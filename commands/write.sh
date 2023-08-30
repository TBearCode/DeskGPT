#!/bin/bash

actions="file macro rule"
arg=$(sed -n 1p args.txt|sed "s/ //g")
echo $arg
arg2=$(sed -n 2p args.txt)
echo $arg2
arg3=$(sed -n 3p args.txt)
arg4=$(sed -n 4p args.txt)
echo $arg3   $arg4
i=0
if [[ "$actions" == *"$arg"* ]];then
	if [[ $arg == "file" ]];then
		if [[ $arg3 == "in" ]];then
			cd ~
			path=$(find -type d -name $arg4)
			vim $path/$arg2 
			cd -
			echo "Hope you did what you needed to"
		else
			vim $arg2
		fi
		i=4
	fi
	if [[ $arg == "macro" ]];then
		#echo $arg3
		echo $arg3 | sed "s/-/ /g" >> commands/$arg2.sh
		
	fi
fi


