#!/bin/bash
# Developed by Nathan Mallett (nmallett@student.42quebec.com)
# Project: born2beroot

# Memory Usages Variables - Seperated since we need to divide them to get our actual result

freeram=$(free -m | awk '$1 == "Mem:" {print $2}')
usedram=$(free -m | awk '$1 == "Mem:" {print $3}')
percentageram=$(free | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

# Hard Drive Usage Variables - Seperated since we need to calculate the variables together
freedisk=$(df -Bg | grep '^/dev/' | grep -v '/boot$' | awk '{ft += $2} END {print ft}')
useddisk=$(df -Bm | grep '^/dev/' | grep -v '/boot$' | awk '{ut += $3} END {print ut}')
percdisk=$(df -Bm | grep '^/dev/' | grep -v '/boot$' | awk '{ut += $3} {ft+= $2} END {printf("%d"), ut/ft*100}')

# CPU Load Usages
cpuload=$(top -bn1 | grep '^%Cpu' | cut -c 9- | xargs | awk '{printf("%.1f%%"), $1 + $3}')

# Last Boot
lastboot=$(who -b | awk '$1 == "system" {print $3 " " $4}')# LVM Group Usages from the Encrypted Drives

# LVM Usages
lvmusage=$(lsblk | grep "lvm" | wc -l)
lvmanswer="null"
if [ $lvmusage -eq 0 ]
then
	lvmanswer="no"

else
	lvmanswer="yes"
fi

# TCP Connections
tcp=$(cat /proc/net/sockstat{,6} | awk '$1 == "TCP:" {print $3}')

# System Network MAC Address
mac=$(ip link show | awk '$1 == "link/ether" {print $2}')

# Output information
echo "#Architecture: $(uname -a)"
echo "#Physical CPU: $(grep 'physical id' /proc/cpuinfo | sort | uniq | wc -l)"
echo "#Virtual CPU: $(grep '^processor' /proc/cpuinfo | wc -l)"
echo "#Memory Usage: $usedram / ${freeram}MB ($percentageram%)"
echo "#Disk Usage: $useddisk / ${freedisk}Gb ($percdisk%)"
echo "#CPU Load: $cpuload"
echo "#Last Boot: $lastboot"
echo "#LVM Usage: $lvmanswer"
echo "#TCP Connections $tcp ESTABLISHED"
echo "#User Log: $(users | wc -w)"
echo "#Network: IP $(hostname -I) ($mac)"
echo "#Sudo: $(journalctl _COMM=sudo | grep COMMAND | wc -l)"