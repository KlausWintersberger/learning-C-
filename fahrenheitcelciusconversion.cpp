#include <iostream>

int main() {
    std::string choice;
    std::cout << "Type: cf for celsius to fahrenheit or fc for fahrenheit to celsius: ";
    std::cin >> choice; 

    if (choice == "cf"){
        double temp;
        std::cout << "Enter Celsius Temperature: ";
        std::cin >> temp;
        double result = temp * 1.8 + 32;
        std::cout << result;
    } else if (choice == "fc"){
        double temp;
        std::cout << "Enter Fahrenheit Temperature: ";
        std::cin >> temp;
        double result = (temp - 32) * 0.5555555555555556;
        std::cout << result;
    } else {
        std::cout << "Invalid option";
    }
}