#include <iostream>

double square(int s1, int s2){
    return s1 * s2;
}
int main() {
    double s1 = 10;
    double s2 = 10;
    double area = square(s1, s2);
    std::cout << area;
    return 0;
}