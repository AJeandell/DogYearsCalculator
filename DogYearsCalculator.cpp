#include <iostream>
#include <string>

int main() {
  int dog_age = 0; //dogs age
  int early_years = 21; // dogs age at 21 human years in first 2 years
  int later_years = (dog_age - 2) * 4; //dogs aging changes after 2 years to 4 human years equivalent
  int human_years;
  std::string dog_name = "";
  human_years = early_years+later_years;

  std::cout << "Enter dogs name";
  std::cin >> dog_name;
  std::cout << "Enter dogs age";
  std::cin >> dog_age;
  std::cout << "My name is " << dog_name << "! Ruff ruff, I am " << human_years << " years old in human years.";
}
