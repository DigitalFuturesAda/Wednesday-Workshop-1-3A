// https://repl.it/@B3GHU8/createthefile#main.cpp
//re
#include <iostream>
#include <fstream> // imports libs

bool is_file_exist(const char *fileName){
    std::ifstream infile(fileName);
    return infile.good(); // checks if a file exists based on a given filename
}

int main() {
  std::ofstream myfile;

  if(is_file_exist("list.csv")){ //check if file exists
    myfile.open ("list.csv", std::fstream::in | std::fstream::out | std::fstream::app);// open file in append mode
  } else {
    myfile.open ("list.csv");
  }

  bool editting = true; // keep in while loop

  do {
    std::string userInputString;
    std::cout << "Enter name: ";

    getline(std::cin, userInputString);

    myfile << userInputString << "\n";

    std::string another;
    std::cout << "Add another (y/n): "; // add names
    getline(std::cin, another);

    if (another == "n" || another == "N"){
      editting = false; // exit
    }

  } while (editting);
  myfile.close();
  std::cout << "Good bye!";
}
