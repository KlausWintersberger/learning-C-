#include <iostream> 

double deposit(double balance){
    double amount;
    while (true) {

        std::cout << "Enter amount to deposit: ";
        
            if(!(std::cin >> amount) || amount < 0){
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Invalid amount\n";
                continue;
            }
        break;
    }
    return amount;
}

double withdraw(double balance) {
    double amount;
    while (true){
        
        std::cout << "Enter amount to withdraw: ";
        
        if(!(std::cin >> amount) || amount > balance){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid amount\n";
            continue;
        }
        break;
    }
    return amount;
}

int main() {
    double balance = 0.00;

    while (true){
        int choice;
        std::cout << "Enter choice: 1. Check balance, 2. Deposit, 3. Withdraw, 4. Quit: ";
        if(!(std::cin >> choice)){
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                std::cout << "Your balance is: " << '$' << balance << '\n';
                continue;
            case 2:
                balance += deposit(balance);
                continue;
            case 3:
                balance -= withdraw(balance);
                continue;
            case 4:
                break;
        }
        break;
    }

    return 0;
}