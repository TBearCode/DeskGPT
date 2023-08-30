#/bin/bash
rm args.txt
rm log.txt
rm processes.txt

options="make write help sort replace copy display rename fetch"
process=" " && [[ $1 ]] && process=$1

sleep .5

if [[ $process == " " ]];then 
	echo "What would you like to do?"
	read process 
fi
	
procs=0

IFS=';'
read -ra PROC <<< "$process"
for x in ${PROC[@]}; do
	((procs=procs+1))
	echo $x >> processes.txt
	#process$procs="$x"
done
echo $procs
numProcess=1
while [[ $numProcess -le $procs ]]
do
	current=$(sed -n $numProcess\p processes.txt | xargs)
	echo $current
	filename=$(echo "$current" | cut -d " " -f 1)
	echo filename$filename
	transition=$(echo $current | sed "s/$filename//")

	while [[ "$transition" != "" ]]
	do
		echo $transition >> log.txt
		temp=$(echo "$transition" | xargs |cut -d " " -f 1)
		echo temp$temp >> log.txt
		echo "$temp" >> args.txt
		current=$(echo "$transition" | sed "s/$temp//")
		echo current$current >> log.txt
		transition=$(echo $current)
	done
	if [[ "$options" != *"$filename"* ]];then
		if [[ -f commands/$filename.sh ]];then
			bash init.sh "$(cat commands/$filename.sh)"
		fi
	else
		bash commands/$filename.sh 
	fi
	rm args.txt
	((numProcess=numProcess+1))
done
fls= $(find -type f -name "*.bak" -not -path '*/backups/*') 
if [[ $fls != '' ]];then
       mv $fls backups/
fi
