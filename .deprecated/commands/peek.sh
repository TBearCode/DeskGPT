#!/bin/bash

actions="file"
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
			path=$(find -type d -name $arg4)
			view $path/$arg2
		else
			path=$(find -type f -name $arg2)
			view $path/$arg2
		fi
	fi
fi
