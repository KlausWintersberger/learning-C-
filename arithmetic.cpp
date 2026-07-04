#include <iostream>

int main() {
    std::string name;
    std::cout << "Enter Name: ";
    std::getline(std::cin >> std::ws, name);

    int age;
    std::cout << "Enter Age: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.";

    return 0;
}