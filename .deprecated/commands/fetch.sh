#!/bin/bash

actions="file folder activity biggest smallest tasks webpage"
arg=$(sed -n 1p args.txt|sed "s/ //g")
echo $arg
arg2=$(sed -n 2p args.txt)
echo $arg2
arg3=$(sed -n 3p args.txt)
echo $arg3
arg4=$(sed -n 4p args.txt)
echo $arg4


if [[ "$actions" == *"$arg"* ]];then
	if [[ $arg == "file" ]];then
		if [[ $arg3 == "in" ]];then
			path=$(find -type f -iname $arg4)
			echo $(find -type f -iname $path/$arg2)
		else
			path=$(find -type f -iname $arg2)
			echo $path
		fi
	fi
	if [[ $arg == "folder" ]];then
		if [[ $arg3 == "in" ]];then
			path=$(find -type d -iname $arg4)
			echo $(Find -type d -iname $path/$arg2)
		else
			path=$(find -type d -iname $arg2)
			echo $path
		fi
	fi
	if [[ $arg == "activity" ]];then
		top -b 1 -n 1 > activitylog.txt
		head activitylog.txt
	fi
	if [[ $arg == "biggest" ]];then
		echo fetching biggest
		if [[ $arg2 == "file" ]];then
			if [[ $arg3 == "in" ]];then
				path=$(find -type d -iname $arg4)
				cd $path
				echo "$(find . -maxdepth 1 -type f | sed 's_./__g')" > files
				biggest=0
				count=1
				while read -r line; do
					echo $line
					size=$(stat --printf="%s" $line) 
					if [[ $size -gt $biggest ]];then
					biggest=$size
					biggestcount=$count
					fi
					((count=count+1))	
				done < files
				echo biggest is:
				sed -n ${biggestcount}p files
				rm files
				cd -
			else
				echo "$(find . -maxdepth 1 -type f | sed 's_./__g')" > files
				biggest=0
				count=1
				while read -r line; do
					echo $line
					size=$(stat --printf="%s" $line) 
					if [[ $size -gt $biggest ]];then
					biggest=$size
					biggestcount=$count
					fi
					((count=count+1))	
				done < files
				echo biggest is:
				sed -n ${biggestcount}p files
				rm files

			fi
		fi
		if [[ $arg2 == "folder" ]];then
			if [[ $arg3 == "in" ]];then
				path=$(find -type d -iname $arg4)
				cd $path
				echo $(ls -Sd */ | head -1)
				cd -
			else
				echo $(ls -Sd */ | head -1)
			fi
		fi
	fi
	if [[ $arg == "smallest" ]];then
		if [[ $arg3 == "in" ]];then
			path=$(find -type d -iname $arg4)
			cd $path
			echo "$(find . -maxdepth 1 -type f | sed 's_./__g')" > files
			smallest=10000000000
			count=1
			while read -r line; do
				echo $line
				size=$(stat --printf="%s" $line) 
				if [[ $size -lt $smallest ]];then
				smallest=$size
				smallestcount=$count
				fi
				((count=count+1))	
			done < files
			echo smallest is:
			sed -n ${smallestcount}p files
			rm files
			cd -
		else
			echo "$(find . -maxdepth 1 -type f | sed 's_./__g')" > files
			smallest=10000000000
			count=1
			while read -r line; do
				echo $line
				size=$(stat --printf="%s" $line) 
				if [[ $size -lt $smallest ]];then
				smallest=$size
				smallestcount=$count
				fi
				((count=count+1))	
			done < files
			echo smallest is:
			sed -n ${smallestcount}p files
			rm files

		fi
	fi
fi

			
