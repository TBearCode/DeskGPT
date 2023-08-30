#!/bin/bash

actions="file folder"
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
	if [[ $arg == "file" ]];then
		echo working
		path=$(find -type f -name $arg2)
		shortpath=$(echo $path | sed "s/$arg2//")
		echo $path $shortpath
		if [[ $arg3 == "in" ]];then
			sort $path > $shortpath/$arg4
		else
			sort $path > $shortpath/temp.txt
			cat $shortpath/temp.txt > $path
			rm $shortpath/temp.txt
		fi
	fi
	if [[ $arg == "folder" ]];then
		path=$(find -type d -name $arg2)
		if [[ $arg4 == "in" ]];then
			if [[ $arg3 == "contents" ]];then
				sort $(find $path -type f) > $path/$arg5
			else
				ls -lS $(find $path -type f) > $path/$arg5
			fi
		else 
			if [[ $arg3 == "contents" ]];then
				sort $(find $path -type f)
			else
				ls -lS $(find $path -type f)
			fi
		fi
	fi
fi
