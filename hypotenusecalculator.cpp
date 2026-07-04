#include <iostream>
#include <cmath>
int main(){
    double l1;
    std::cout << "Enter First Side Length: ";
    std::cin >> l1;

    double l2;
    std::cout << "Enter Second Side Length:";
    std::cin >> l2;

    double sum = pow(l1,2) + pow(l2,2);
    double hyp = std::sqrt(sum);
    std::cout << hyp;

    return 0;
}