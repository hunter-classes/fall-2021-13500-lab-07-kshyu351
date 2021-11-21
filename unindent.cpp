/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7A

Write a program unindent.cpp that reads input 
from cin and prints out each input line with 
leading spaces removed.
*/

#include <iostream> 
#include "unindent.h" 
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
#include <cctype> 


std::string removeLeadingSpaces(std::string line) { 
    std::string output = ""; 
    for (int i = 0; i < line.length(); i++) {       
        if (!isspace(line[i])) { 
            for (int j = i; j < line.length(); j++) { 
                output += line[j]; 
            }
            return output;
        }
    }
    return output;
}



