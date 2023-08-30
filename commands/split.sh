#!/bin/bash

actions="file folder"
arg=$(sed -n 1p args.txt|sed "s/ //g")
echo arg1 $arg
arg2=$(sed -n 2p args.txt)
echo $arg2
arg3=$(sed -n 3p args.txt)
arg4=$(sed -n 4p args.txt)

if [[ "$actions" == *"$arg"* ]];then
	if [[ $arg == "file" ]]; then
		path=$(find -type f -name $arg2)
		if [[ $arg3 == "into" ]]; then
			lines=$(wc -l $path | cut -d " " -f 1)
			echo lines $lines
			flines=$(echo "$lines/$arg4" | bc )
			echo flines $flines
			i=0
			while [[ $i -lt $arg4 ]];do
				strt=$(echo "$i*$flines" | bc)
				((strt=strt+1))
				fnl=$(echo "($i+1)*$flines" | bc)
				echo $strt and $fnl
				sed -n $strt,$fnl\p $path > ${path}-$i
				((i=i+1))
				if [[ $i == $arg4 && $fnl != $lines ]];then
					echo final $fnl
					remaining=$(echo " $(wc -l $path| cut -d " " -f 1) - $fnl " | bc)
					j=$(echo $i-1 | bc)
					tail -$( echo $remaining+1 | bc) $path >> $path-$j
				fi
			done
			cp $path $path.bak
			rm $path
		fi
	fi
fi

					
