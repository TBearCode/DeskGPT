#!/bin/bash

actions="files folders memory cpu tasks"
arg=$(sed -n 1p args.txt|sed "s/ //g")
echo $arg
arg2=$(sed -n 2p args.txt)
echo $arg2

