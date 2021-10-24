/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7B

Write a new program indent.cpp that enhances the program 
from the previous task. As it reads the input line by line, 
it should also count the number of open and closed { } in it, 
and keep track of how many blocks is currently open at the 
beginning of each line.

*/
#include <iostream>
#include <string>
#include "indent.h"

int countChar(std::string line, char c){
    int count = 0;
    for(char x : line) { 
        if(x == c) { 
            count++;
        }
    }
    return count;
}

