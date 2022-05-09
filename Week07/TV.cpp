#include <iostream>

class TV{
    private:
        int channel;
        int volumeLevel;
        bool on;

    public:
        TV(){
            channel = 1;
            volumeLevel = 1;
            on = true;
        }

        void turnOn(){
            on = true;
        }

        void turnOff(){
            on = false;
        }

};

int main(){

    return 0;
}