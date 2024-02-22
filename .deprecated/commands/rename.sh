#!/bin/bash

actions="file folder user"
arg=$(sed -n 1p args.txt|sed "s/ //g")
echo $arg
arg2=$(sed -n 2p args.txt)
echo $arg2
arg3=$(sed -n 3p args.txt)
echo $arg3

if [[ "$actions" == *"$arg"* ]];then
	if [[ $arg == "file" ]]; then
		echo file
		path=$(find -type f -name $arg2)
		shortpath=$(echo $path | sed "s/$arg2//")
		mv $path $shortpath/$arg3
	fi
	if [[ $arg = "folder" ]];then
		echo folder
		path=$(find -type d -name $arg2)
		shortpath=$(echo $path | sed "s/$arg2//")
		mv $path $shortpath/$arg3
	fi
fi
