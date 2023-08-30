#!/bin/bash

actions="file macro rule"
arg=$(sed -n 1p args.txt|sed "s/ //g")
echo $arg
arg2=$(sed -n 2p args.txt)
echo $arg2
arg3=$(sed -n 3p args.txt)
arg4=$(sed -n 4p args.txt)
echo $arg3   $arg4

if [[ "$actions" == *"$arg"* ]];then
	if [[ $arg == "file" ]];then
		if [[ $arg3 == "in" ]];then
			cd ~
			path=$(find -type d -name $arg4)
			less $path/$arg2 
			cd -
			echo "Hope you did what you needed to"
		else
			less $arg2
		fi
	fi
fi



