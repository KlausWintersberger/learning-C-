#include <iostream>

int main(){
    std::string name = "Bob";
    int age = 21;

    std::string *pName = &name;
    int *pAge = &age;

    std::cout << *pAge << '\n';
    std::cout << *pName;

    return 0;
}

//A pointer is a variable that contains the address of another variable
// * is the dereference operator. It is used to create a pointer or dereference it
//(get the value stored at an address).
// & is the address of operator. It is used to get the address of a variable.
