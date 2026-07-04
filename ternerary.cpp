#include <iostream>

int main() {
    int age;
    std::cout << "Enter Age: ";
    std::cin >> age;

    age >=18 ? std::cout << "Access Granted" : std::cout << "Access Denied";
}