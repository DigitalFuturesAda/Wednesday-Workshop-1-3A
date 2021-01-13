// exercise 3 - https://repl.it/@B3GHU8/e3#main.cpp

#include <iostream>
#include <fstream>

int main() {
  std::string fileName;
  std::cout << "Enter a filename: ";
  getline(std::cin, fileName); // gets input

  auto count = 0;

  std::string fileContent;  
  std::ifstream file(fileName);
 
  if(file.good()) { //checks if file exist
    while (getline (file, fileContent)) {
      count++; // iterates count by 1
      std::cout << count << ". " << fileContent << "\n";
    } // prints

    std::cout << "total number of lines read: " << count << std::endl; // outputs lines
  } else {
    std::cout << "sorry, " << fileName << " does not exist." << std::endl; // outputs no
  }

  file.close(); // closes files
  return 0;
}
