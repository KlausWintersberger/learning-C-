#include <iostream>

int main() {
    int month;
    std::cout << "Enter Month, (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "January";
            break;
        case 2:
            std::cout << "Febuary";
            break;
        case 3:
            std::cout << "March";
            break;
        case 4:
            std::cout << "April";
            break;
        case 9990:
            std::cout << "Ok";
            break;
        default:
            std::cout << "Error";
    }

    return 0;
}


