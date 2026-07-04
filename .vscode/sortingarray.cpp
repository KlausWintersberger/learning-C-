#include <iostream>
void sort(int arr[], int size){
    int temp;
    for (int i = 0; i < size-1; i++){
        for(int j = 0; j < size - i -1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
}

int main(){
    int arr[] = {10,1,4,7,6,2,5,9,8,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    sort(arr, size);
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}

