#include <iostream>

double getTotal(double prices[], int sizeOfPrices){
    double total = 0;
    for(int i = 0; i < sizeOfPrices; i++){
        total += prices[i];
    }
    return total;
}
int main () {
    double prices[] = {0.99, 1.00, 100};
    int sizeOfPrices = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, sizeOfPrices);

    std::cout << "Total: " << "$" << total;
    return 0;
}