#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <filesystem>

int main() {
  std::cout << "Does file exist: ";
  std::string fileToGo; 

  getline(std::cin, fileToGo); //get input

  struct stat buffer; //defines a struct stat buffer
  if (stat(fileToGo.c_str(), &buffer) == 0) { // does the file exist?
    std::cout << fileToGo << ", " << buffer.st_size << " bytes - last modified at: " << ctime(&buffer.st_mtime) << std::endl;
    // print the stuff
  } else {
    std::cout << fileToGo << " does not exist." << std::endl; // print no it doesnt
  }
}

// checks a file 
