#include <iostream> 

int main(){
    int count = 0;
    std::string questions[] = {"What is 1+1?", "What is 1x1?", "What is 2+2?", "What is 10^2?"};

    std::string choices[][4] = {{"A. 1", "B. 2", "C. 3", "D. 4"},
                                {"A. 1", "B. 2", "C. 3", "D. 21"},
                                {"A. 1", "B. 2", "C. 3", "D. 4"},
                                {"A. 1", "B. 100", "C. 10", "D. 2"}};

    char answers[] = {'B', 'A', 'D', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);

    for (int i = 0; i < size; i++){
        char answer;
        std::cout << questions[i] << '\n';
        for (int j = 0; j < size; j++){
            std::cout << choices[i][j] << '\n';
        }
            std::cout << '\n';
            std::cout << "Enter Answer: ";
            std::cin >> answer;

            if (answer == answers[i]){
                std::cout << "Correct" << '\n';
                count += 1;

            } else {
                std::cout << "Incorrect, the correct answer was: " << answers[i] << '\n';
            }

    }
    std::cout << "Score: " << count <<"/"<< size;
    return 0;
}