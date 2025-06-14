#include <iostream>

int main() {
  int dog_age = 1; //dogs age
  int early_years = 21; // dogs age at 21 human years in first 2 years
  int later_years = (dog_age - 2) * 4; //dogs aging changes after 2 years to 4 human years equivalent
  int human_years;
  human_years = early_years+later_years;

  std::cout << "My name is Chocquito! Ruff ruff, I am " << human_years << " years old in human years.";
}