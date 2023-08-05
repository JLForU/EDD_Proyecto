#!/bin/bash

echo

g++ -std=c++11 main.cpp -o main

if [ $? -eq 0 ]; then
    ./main
else
    exit 1
fi
