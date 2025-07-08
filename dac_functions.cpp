#include <iostream>
#include <string>

std::string getDogName() {
    std::string dog_name;
    std::cout << "Enter dog's name: ";
    std::cin >> dog_name;
    return dog_name;
}
std::string getDogAge() {
    int dog_age = 0;
    std::cout << "Enter dog's age: ";
    std::cin >> dog_age;
}

int calculateHumanYears(dog_age, human_years) {
    if (dog_age < 0) {
        std::cout << "Invalid age. Please enter a non-negative number." << std::endl;
        return "0"; // Return 0 for invalid input
    } else if (dog_age <= 2) {
        human_years = dog_age * 10.5; // First two years are counted as 10.5 human years each
    }else if (dog_age > 2) {
        human_years = 21 + (dog_age - 2) * 4; // After two years, each year is counted as 4 human years
    }

    return std::to_string(human_years);
}
void displayDogInfo(const std::string& dog_name, int human_years) {
    std::cout << "My name is " << dog_name << "! Ruff ruff, I am " << human_years << " years old in human years." << std::endl;
}
