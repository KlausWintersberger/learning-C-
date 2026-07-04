#include <iostream>
void birthday(std::string name, int age){
    std::cout << "Happy birthday " << name << " you are " << age << " years old.";
}

int main(){
    std::string name = "Tim";
    int age = 21;

    birthday(name, age);

    return 0;
}




