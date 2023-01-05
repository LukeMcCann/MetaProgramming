#include <iostream>
#include <fstream>
#include <string>

int main() {
  std::string program = "int main() { std::cout << \"Hello, world!\" << std::endl; }";

  // Write the program to a file
  std::ofstream out("generated_program.cpp");
  out << program;
  out.close();

  return 0;
}
