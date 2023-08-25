#/bin/bash
rm args.txt
rm log.txt
echo "What would you like to do?"
options="make write help sort replace copy display rename fetch"
read process
echo "$process" >> log.txt

numParams=1

filename=$(echo "$process" | cut -d " " -f 1)
transition=$(echo $process | sed "s/$filename//")
i=0
while [[ "$transition" != "" ]]
do
	echo $transition >> log.txt
	temp=$(echo $transition | cut -d " " -f 1)
	echo temp$temp >> log.txt
	echo "$temp" >> args.txt
	process=$(echo "$transition" | sed "s/$temp//")
	echo process$process >> log.txt
	transition=$(echo $process)
done
bash commands/$filename.sh 

