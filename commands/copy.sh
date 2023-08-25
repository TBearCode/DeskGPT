#!/bin/bash

actions="file folder"
arg=$(sed -n 1p args.txt|sed "s/ //g")
echo $arg
arg2=$(sed -n 2p args.txt)
echo $arg2
arg3=$(sed -n 3p args.txt)
echo $arg3

if [[ "$actions" == *"$arg"* ]];then
	if [[ $arg == "file" ]];then
		path=$(find -type f -iname $arg2)
		shortpath=$(echo $path | sed "s/$arg2//")
		cp $path $shortpath/$arg3
	fi
	if [[ $arg == "folder" ]];then
		path=$(find -type d -iname $arg2)
		shortpath=$(echo $path | sed "s/$arg2//")
		cp -r $path $shortpath/$arg3
	fi
fi

