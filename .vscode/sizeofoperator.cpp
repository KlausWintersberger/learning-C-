#include <iostream>

int main() {
    std::string characters[] = {"spongebob", "patrick", "crab", "plankton"};
    for (int i = 0; i < sizeof(characters)/sizeof(std::string); i++ ) {
        std::cout << characters[i] << '\n';
    }

    return 0;
}

