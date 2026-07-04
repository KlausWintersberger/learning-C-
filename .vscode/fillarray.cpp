#include <iostream>

int main() {
    const int size = 99;
    std::string array[size];
    fill(array, array + size/3, "Pineapple");
    fill(array + size/3, array + size*2/3, "Apple");
    fill(array + size*2/3, array + size, "Pear");
    for (std::string food: array){
        std::cout << food;
    }
    return 0;
}