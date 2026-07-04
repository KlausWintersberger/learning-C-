#include <iostream>
#include <random>

int main() {

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(1, 5);
    int random_num = distrib(gen);
    int guess;
    std::cout << "Enter a guess: ";
    std::cin >> guess;

    if (random_num == guess) {
        std::cout << "Correct";
    } else {
        std::cout << "Incorrect";
    }
    return 0;

}



