#include <iostream>
class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "Eating";
    }
};

class Dog : public Animal{
    public:
        void bark(){
            std::cout << "woof woof";
        }
};

class Cat : public Animal{
    public:
        void meow(){
            std::cout << "meow";
        }
};
int main(){
    Dog dog;
    Cat cat;

    std::cout << cat.alive << '\n';
    cat.meow();
    cat.eat();

    return 0;
}