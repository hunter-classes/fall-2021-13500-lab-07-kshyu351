#include <iostream>
#include <fstream>
#include "unindent.h"
#include "indent.h"


//Documented by Jubayer Ahmed
int main() {
  std::fstream inFile;
  inFile.open("bad-code.cpp");
  std::string str;
  int numBracket = 0;
  //implementation of indent
  while(getline(inFile,str)){
    str = removeLeadingSpaces(str); //unindents the bad code for formatting
    numBracket -= countChar(str, '}'); //counts the bracket deficit to add spaces
    for(int i = 0; i < numBracket; i++){
      str = "\t" + str; //indents the code based off the number of brackets
    }
    numBracket += countChar(str, '{'); //add to counter everytime theres an open brace
    std::cout << str << std::endl; //skip to next line and iterate again
  }
  inFile.close();
}
