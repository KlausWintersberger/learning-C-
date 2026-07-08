#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        this->temperature = temperature;
    }
};

int main(){
    Stove stove1;
    stove1.setTemperature(100);
    std::cout << stove1.getTemperature();
    return 0;
}