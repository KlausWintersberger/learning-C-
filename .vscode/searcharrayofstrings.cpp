#include <iostream>
int searchForCar(std::string parkingGarage[], std::string chosen, int size){
    for (int i = 0; i < size; i++){
        if (parkingGarage[i] == chosen){
            return i;
        }
    }
    return -1;
}
int main(){
    std::string parkingGarage[] = {"honda", "toyota", "lamborghini"};
    std::string chosen;
    int size = sizeof(parkingGarage)/sizeof(parkingGarage[0]);
    std::cout << "Enter car to search for (all lowercase): ";
    std::cin >> chosen;

    int result = searchForCar(parkingGarage, chosen, size);
    if (result == -1){
        std::cout << "Car not found";
    } else {
        std::cout << "Car found at spot " << result;
    }

    return 0;


}