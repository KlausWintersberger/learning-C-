#include <iostream>
    struct person{
        std::string name;
        int age;
        bool enrolled;
    };
int main(){
    person person1;
    person1.name = "Bob";
    person1.age = 21;
    person1.enrolled = true;

    std::cout << person1.name << '\n';
    std::cout << person1.age << '\n';
    std::cout << person1.enrolled << '\n';
}