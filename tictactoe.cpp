#include <iostream>
#include <random>
void drawBoard (std::string *spots){
    std::cout << "   " << "|" << "   " << "|" << "   " << '\n';
    std::cout << " " <<  spots[0] << " " << "|" << " " << spots[1] << " " << "|" << " " << spots[2] << " " << '\n';
    std::cout << "___" << "|" << "___" << "|" << "___" << '\n';
    std::cout << "   " << "|" << "   " << "|" << "   " << '\n';
    std::cout << " " <<  spots[3] << " " << "|" << " " << spots[4] << " " << "|" << " " << spots[5] << " " << '\n';
    std::cout << "___" << "|" << "___" << "|" << "___" << '\n';
    std::cout << "   " << "|" << "   " << "|" << "   " << '\n';
    std::cout << " " <<  spots[6] << " " << "|" << " " << spots[7] << " " << "|" << " " << spots[8] << " " << '\n';
    std::cout << "   " << "|" << "   " << "|" << "   " << '\n';
}

void playerMove(std::string *spots, char player, int& moves){
    int pMove;
    while (true){
        std::cout << "Enter Move (1-9): ";
        if(!(std::cin >> pMove)){
            std::cout << "Error\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }
        if (spots[pMove-1] == " "){
            pMove-=1;
            spots[pMove] = player;
            moves+=1;
            break;
        } else {
            std::cout << "Error\n";
            continue;
        }

    }
}

void computerMove(std::string *spots, char computer, int& moves) {
    int cMove;
    while (true){
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> distrib(0, 8);
        cMove = distrib(gen);

        if (spots[cMove] == " "){
            spots[cMove] = computer;
            moves += 1;
            break;
        }

    }
}

std::string checkForWinner(int (*winningPossibilities)[3], std::string *spots, int rows, int columns){

    for (int i = 0; i < rows; i++){
        int playerCount = 0;
        int computerCount = 0;
        for (int j = 0; j < columns; j++){
            int index = winningPossibilities[i][j];

            if(spots[index] == "X"){
                playerCount += 1;
            } else if (spots[index] == "O"){
                computerCount += 1;
            }
        }
        if (playerCount == 3){
            return "Player Wins";
        } else if (computerCount == 3){
            return "Computer Wins";
        }
    }
    return "None";
}



int main(){
    int winningPossibilities[][3] = {{0,1,2}, {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, {2,5,8}, {0,4,8}, {2,4,6}};
    int rows = sizeof(winningPossibilities)/sizeof(winningPossibilities[0]);
    int columns = 3;
    int moves = 0;
    bool playerTurn = true;
    char player = 'X';
    char computer = 'O';
    std::string spots[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    drawBoard(spots);
    while (moves < 9){
        if (playerTurn == true){
            playerMove(spots, player, moves);
            std::cout << '\n';
            drawBoard(spots);
            playerTurn = !playerTurn;
            std::string result = checkForWinner(winningPossibilities, spots, rows, columns);
            if (result == "Computer Wins"){
                std::cout << "Computer Wins";
                break;
            } else if (result == "Player Wins"){
                std::cout << "Player Wins";
                break;
            }
        } else {
            computerMove(spots, computer, moves);
            std::cout << '\n';
            drawBoard(spots);
            playerTurn = !playerTurn;
            std::string result = checkForWinner(winningPossibilities, spots, rows, columns);
            if (result == "Computer Wins"){
                std::cout << "Computer Wins";
                break;
            } else if (result == "Player Wins"){
                std::cout << "Player Wins";
                break;
            }
        }
    }


    return 0;
}