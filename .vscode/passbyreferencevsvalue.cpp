#include <iostream>

void swap (int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x = 0;
    int y = 1;

    std::cout << x;
    std::cout << y;

    swap(x, y);

    std::cout << x;
    std::cout << y;

    return 0;
}