#include <iostream>
class Pizza{
    public:
        std::string topping1;
        std::string topping2;
    Pizza(){

    }
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

};
int main(){
    Pizza pizza1;
    Pizza pizza2("pepperoni");
    Pizza pizza3("pepperoni", "sausage");

    std::cout << pizza3.topping1;
    return 0;
}