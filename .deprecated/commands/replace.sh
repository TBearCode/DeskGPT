#!/bin/bash

actions="file keyword"
arg=$(sed -n 1p args.txt|sed "s/ //g")
echo $arg
arg2=$(sed -n 2p args.txt)
echo $arg2
arg3=$(sed -n 3p args.txt)
echo $arg3
arg4=$(sed -n 4p args.txt)
echo $arg4
arg5=$(sed -n 5p args.txt)
echo $arg5

if [[ "$actions" == *"$arg"* ]]; then
	if [[ $arg == "file" ]]; then
		path=$(find -type f -iname $arg2 | sed "s/$arg2//")
		mv $path/$arg2 $path/$arg2.bak
		mv $(find -type f -iname $arg3) $path/
	fi
	if [[ $arg == "keyword" ]]; then
		mkdir -p backups
		path="" && [[ $arg4 == "in" ]] && path=$(find -iname $arg5)
		if [[ $path != "" ]]; then
			if [[ -d $path ]];then
				grep -l $arg2 $path/* | xargs -n 1 sed -i.bak "s/$arg2/$arg3/g"
				mv $path/*.bak backups
			fi
			if [[ -f $path ]]; then
				sed -i.bak "s/$arg2/$arg3/g" $path
				mv $path.bak backups
			fi
		else
			echo "Invalid file name"
		fi		
	fi
fi

			

