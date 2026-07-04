#include <iostream>

int main() {
    while (true){
        char op;
        double num1;
        double num2;
        double result;

        while (true){
            std::cout << "Enter First Number: ";
            if(!(std::cin >> num1)) {
                std::cout << "Invalid Number\n";

                std::cin.clear();
                std::cin.ignore(1000, '\n');

                continue;
            }
            break;
        }


        while (true) {
            std::cout << "Choose Operator: +, -, /, *, or (q) to quit: ";

            if (!(std::cin >> op)){
                std::cout << "Invalid Operator\n";

                std::cin.clear();
                std::cin.ignore(1000, '\n');

                continue;
            }
            break;
        }
    
        
        if (op == 'q'){
            break;
        }

        while (true) {
            std::cout << "Enter Second Number: ";

            if (!(std::cin >> num2)) {
                std::cout << "Invalid Operator\n";

                std::cin.clear();
                std::cin.ignore(1000, '\n');

                continue;
            }
            break;
        }

        switch(op){
            case '+':
                result = num1 + num2;
                std::cout << result << '\n';
                break;
            case '-':
                result = num1 - num2;
                std::cout << result << '\n';
                break;
            case '/':
                result = num1 / num2;
                std::cout << result << '\n';
                break;
            case '*':
                result = num1 * num2;
                std::cout << result << '\n';
                break;
            default:
                std::cout << "Invalid Operator\n";

        }
    }
    return 0;
}