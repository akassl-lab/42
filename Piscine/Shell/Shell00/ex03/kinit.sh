## This will create a Kerberos ticket with a duration of 24h. Make sure to not initialize any other ticket
## or this ticket will not be generated due to another ticket not being expired yet
## Then print the output and save it to a file named klist.txt
kinit -l "1d 0h 0m 0s"
klist | grep -i "Credentials" | cut -f3- -d: >> klist.txt
echo 'Saving ticket credentials to klist.txt'
