// https://repl.it/@B3GHU8/doesfileexist#main.cpp
// run the code here, this is a comment ^

#include <iostream> // input output stream
#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream> // import all the useful libraries
#include <sys/types.h>
#include <sys/stat.h> // stat is needed to get stats about the file
#include <filesystem>

int main() {
  std::cout << "Does file exist: ";
  std::string fileToGo;  // define string

  getline(std::cin, fileToGo); //get input

  struct stat buffer; //defines a struct stat buffer
  if (stat(fileToGo.c_str(), &buffer) == 0) { // does the file exist?
    std::cout << fileToGo << ", " << buffer.st_size << " bytes - last modified at: " << ctime(&buffer.st_mtime) << std::endl;
    // print the stuff
  } else { // create else
    std::cout << fileToGo << " does not exist." << std::endl; // print no it doesnt
  } // end the else
}

// checks a file 
