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
cpuload=$(grep 'cpu' /proc/stat | awk '{usage=($2+$4)*100/($2+$4+$5)} END {print usage "%"}')

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
wall "	#Architecture: $(uname -a)
		#Physical CPU: $(grep 'physical id' /proc/cpuinfo | sort | uniq | wc -l)
		#Virtual CPU: $(grep '^processor' /proc/cpuinfo | wc -l)
		#Memory Usage: $usedram / ${freeram}MB ($percentageram%)
		#Disk Usage: $useddisk / ${freedisk}Gb ($percdisk%)
		#CPU Load: $cpuload
		#Last Boot: $lastboot
		#LVM Usage: $lvmanswer
		#TCP Connections $tcp ESTABLISHED
		#User Log: $(users | wc -w)
		#Network: IP $(hostname -I) ($mac)
		#Sudo: $(journalctl _COMM=sudo | grep COMMAND | wc -l)"