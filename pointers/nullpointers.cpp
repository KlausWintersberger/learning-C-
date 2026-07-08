#include <iostream>

int main(){
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr){
        std::cout << "Adress not found";
    } else {
        std::cout << *pointer;
    }


}

//A null pointer is a pointer that does not point to a valid object or memory location.
//Dereferencing a null pointer is dangerous so that's why
//I checked whether or not the pointer was a null pointer before
//choosing whether or not to dereference it.