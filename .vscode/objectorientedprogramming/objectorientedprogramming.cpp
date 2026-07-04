#include <iostream>

class person{
    public:
        std::string name;
        int age;
        std::string occupation;

        void eat(){
            std::cout << "eating";
        }
        void drink(){
            std::cout << "drinking";
        }
        void sleep(){
            std::cout << "sleep";
        }
};
int main(){
    person person1;

        person1.name = "Joe";
        person1.age = 21;
        person1.occupation = "Scientist";

        std::cout << person1.name << '\n';
        std::cout << person1.age << '\n';
        std::cout << person1.occupation << '\n';
        
        person1.drink();
        person1.eat();
        person1.sleep();
    return 0;
}