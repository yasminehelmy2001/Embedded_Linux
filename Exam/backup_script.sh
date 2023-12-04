#!/bin/bash
if [[ -z $1 ]];
then 
    echo "No parameter passed."
else
for i in $@
do 
	if test -f ./backups; then 
		mkdir backups
	fi
	now=$(date +"%m_%d_%Y")
	name= $(basename "$i")
        tar -czf "./backups/backup>_<$echo $name>_<$echo $now>" $i 
        
        
done
fi
