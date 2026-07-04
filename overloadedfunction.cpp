#include <iostream>
void pizza(){
    std::cout << "Cheese Pizza.";
}
void pizza(std::string topping1){
    std::cout << "Cheese Pizza.\n";
    std::cout << "Toppings: " << topping1;
}
void pizza(std::string topping1, std::string topping2){
    std::cout << "Cheese Pizza.\n";
    std::cout << "Toppings: " << topping1 << ", " << topping2 << ", " << topping2;

}

int main() {
    std::string topping1 = "Pepperoni";
    std::string topping2 = "Sausage";
    pizza(topping1, topping2);
    return 0;
}
