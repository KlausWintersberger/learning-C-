#include <iostream>

int main(){
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++){
        std::cout << "Enter Food or q to quit: ";
        std::getline(std::cin, temp);

        if (temp == "q"){
            break;
        } else {
            foods[i] = temp;
        }

    }

    for (int i = 0; i < size; i++){
        if (foods[i].empty() == true){
            continue;
        }
        std::cout << foods[i] << '\n';
    }
}