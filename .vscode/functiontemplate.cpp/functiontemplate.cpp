#include <iostream>
template <typename T>
T max(T x, T y){
    if (y > x){
        return y;
    } else { 
        return x;
    }
}
int main(){
    std::cout << max(1, 2);
    
    return 0;
}