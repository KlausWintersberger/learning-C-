#include <iostream>
#include <random>

int main() {
    int pScore = 0;
    int cScore = 0;
    int round = 1;
    int rounds;
    while (true){
        std::cout << "Choose the number of rounds you would like to play: ";
        if (!(std::cin >> rounds)){
            std::cout << "Invalid Choice";
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                continue;
        }
        break;
    }
    for (int i = 1; i <= rounds; i++) {
        std::string pc;
        std::cout << '\n' << "Round: " << round << " of " << rounds << '\n';
        std::cout << '\n' << "Enter choice: r, p, s, e to exit: ";
        if(!(std::cin >> pc)){
            std::cout << "Invalid Choice\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }
        if (pc.length() != 1){
            std::cout << "Invalid Choice\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }
        char computerChoice;
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> distrib(1,3);
        int num = distrib(gen);

        char playerChoice = pc[0];

        if (playerChoice == 'e'){
            break;
        }
        switch (num){
            case 1:
                computerChoice = 'r';
                break;
            case 2:
                computerChoice = 'p';
                break;
            case 3:
                computerChoice = 's';
                break;

            
        }

        switch (playerChoice){
            case 'r':
                if (computerChoice =='r'){
                    std::cout << "You tie\n";
                    break;
                } else if (computerChoice == 'p'){
                    std::cout << "You lose\n";
                    cScore += 1;
                    break;
                } else {
                    std::cout << "You win\n";
                    pScore += 1;
                    break;
                }
            case 'p':
                if (computerChoice == 'p'){
                    std::cout << "You tie\n";
                    break;
                } else if (computerChoice == 's'){
                    std::cout << "You lose\n";
                    cScore += 1;
                    break;
                } else {
                    std::cout << "You win\n";
                    pScore += 1;
                    break;
                }
            case 's':
                if (computerChoice == 's'){
                    std::cout << "You tie\n";
                    break;
                } else if (computerChoice == 'r'){
                    std::cout << "You lose\n";
                    cScore += 1;
                    break;
                } else {
                    std::cout << "You win\n";
                    pScore += 1;
                    break;
                }
            default:
                std::cout << "Invalid letter choice\n";
                continue;
        
        }
        if (round == rounds){
            if (pScore > cScore){
                std::cout << "---------- You Won ----------\n";
                std::cout << "Player score: " << pScore;
                std::cout << "\nComputer score: " << cScore;
            } else if (pScore < cScore){
                std::cout << "---------- Computer Won ----------\n";
                std::cout << "Player score: " << pScore;
                std::cout << "\nComputer score: " << cScore;
            } else {
                std::cout << "---------- Tie ----------\n";
                std::cout << "Player score: " << pScore;
                std::cout << "\nComputer score: " << cScore;
            }

        }
        if (round < rounds){
            std::cout << "Player score: " << pScore;
            std::cout << "\nComputer score: " << cScore;
        }
        round +=1;
    }
    return 0;
}