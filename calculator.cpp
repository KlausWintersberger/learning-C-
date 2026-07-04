#include <iostream>

int main (){
    while (true){
        int num1;
        int num2;
        while (true) {
            std::cout << "Enter first number: ";
            if (!(std::cin >> num1)) {
                std::cout << "Invalid Number\n";
                
                std::cin.clear();
                std::cin.ignore(1000, '\n');

                continue;
            }
            break;
        }

        while (true) {
            std::cout << "Enter second number: ";
            if (!(std::cin >> num2)) {
                std::cout << "Invalid Number\n";
                
                std::cin.clear();
                std::cin.ignore(1000, '\n');

                continue;
            }
            break;
        }
       
        char op;
        while (true) {
            std::cout << "Choose operator. +, -, or x to exit the program:";
            std::cin >> op;

                if (op == 'x') {
                break;
            }

            if (op == '+') {
                std::cout << num1 + num2 << "\n";
            } else if (op == '-') {
                std::cout << num1 - num2 << "\n";
            } else {
                std::cout << "Invalid operator\n";
                continue;
            }
            break;
        }
    if (op == 'x'){
        break;
    }

    }
}