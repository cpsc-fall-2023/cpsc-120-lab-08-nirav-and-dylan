// Nirav Sharma
// nirav0701@csu.fullerton.edu
// @Nirav0105
// Partners: @DylanProchazka

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
    
  if (arguments.size() <=1) {
    std::cout << "error: you must supply at least one number \n";
    return 1;
  }

  bool zero {true};
  double sum {0.0};

  for (std::string argue : arguments) {
    if (zero) {
      zero = false;
      continue;
    }
    sum += stod(argue);
  }

  double average = sum / static_cast<double>(arguments.size() - 1);

  std::cout << "average = " << average << "\n";

  return 0;
}