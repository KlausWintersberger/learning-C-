#include <iostream>

int main(){
    int age = 21;
    std::string name = "Bob";
    bool condition = true;
    char ch = 'A';

    std::cout << &age << '\n';
    std::cout << &name << '\n';
    std::cout << &condition << '\n';
    std::cout << &ch << '\n';


    

    return 0;
}