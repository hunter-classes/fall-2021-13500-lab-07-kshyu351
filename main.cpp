#include <iostream> 
#include <fstream>
#include "unindent.h"
#include "indent.h"



int main() { 
  std::fstream inFile;
  inFile.open("bad-code.cpp");
  std::string str;
  int numBracket = 0;
  while(getline(inFile,str)){
    str = removeLeadingSpaces(str);
    numBracket -= countChar(str, '}');
    for(int i = 0; i < numBracket; i++){
      str = "\t" + str;
    }
    numBracket += countChar(str, '{');
    std::cout << str << std::endl;
  }
  inFile.close();
}


