#include <iostream>

int checkCard(const std::string &cardNum){
    int sum = 0;
    for (int i = cardNum.size() - 2; i >= 0; i -= 2){
        int digit = cardNum[i]-'0';
        int result = digit*2;
        if (result > 9){
            result-=9;
            sum += result;
        } else {
            sum += result;
        }
    }
    for (int i = cardNum.size()-1; i >= 0; i -= 2){
        int digit2 = cardNum[i]-'0';
        sum += digit2;
    }
    return sum;
}
int main(){
    std::string cardNum;
    std::cout << "Enter card number: ";
    std::cin >> cardNum;
    int result = checkCard(cardNum);
    if (result % 10 == 0){
        std::cout << "Card Valid";
    } else {
        std::cout << "Card Not Valid";
    }
    return 0;
}