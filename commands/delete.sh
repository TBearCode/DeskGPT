#!/bin/bash

actions="file folder task"
arg=$(sed -n 1p args.txt|sed "s/ //g")
echo $arg
arg2=$(sed -n 2p args.txt)
echo $arg2

if [[ "$actions" == *"$arg"* ]]; then
	if [[ $arg == "file" ]]; then
		echo "Are you sure? This cannot be undone. [y/n]"
		read answer
		if [[ $answer == "y" ]]; then
		       rm $arg2
	        else
			if [[ $answer != "n" ]];then
				echo "answer not understood, cancelling"
			else
				echo "operation cancelled"
			fi
		fi
	fi
	if [[ $arg == "folder" ]];then
		echo "Are you sure? This cannot be undone. [y/n]"
		read answer
		if [[ $answer == "y" ]];then
			rm -rf $arg2
		else
			echo "Operation cancelled"
		fi
	fi
fi
 				
