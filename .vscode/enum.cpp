#include <iostream>
enum Flavor{strawberry = 0, vanilla = 1, chocolate = 2};
//if you do not assign numbers here then the items will be listed it ascending order starting at 0 like they are above.
int main(){
    Flavor f = vanilla;

    switch(f){
        case vanilla: std::cout << "vanilla";
        break;

        case chocolate: std::cout << "chocolate";
        break;

        case strawberry: std::cout << "strawberry";
        break;
    }
}