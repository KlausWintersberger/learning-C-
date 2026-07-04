#include <iostream>

char main(){
    std::string choice;
    std::cout << "Welcome\n";
    std::cout << "Enter: + to add task, v to view task.";

    std::cin >> choice;

    if (choice == "+"){
        addTask();
    }


}



