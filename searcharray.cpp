#include <iostream>

int findElement(int array[], int size, int chosen){
    for (int i = 0; i < size; i++){
        if (array[i] == chosen){
            return i;
        }
    }
    return -1;
}
int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);
    int chosen;
    std::cout << "Enter element to search for: ";
    std::cin >> chosen;
    
    int result = findElement(array, size, chosen);

    if (result == -1){
        std::cout << "Element not found";
    } else{
        std::cout << "The index of your element is " << result;
    }
    return 0;
}