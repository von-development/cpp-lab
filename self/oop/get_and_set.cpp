#include <iostream>

class Stove{
    private:
    int temp = 0;

    public: 
    Stove(int temp){
        setTemp(temp);
    }

    int getTemp(){
        return temp;
    }

    void setTemp(int temp){
        if(temp < 0){
            this->temp=0;
        } else if(temp >= 10){
            this->temp = 10;
        } else{
            this->temp = temp;
        }
        this->temp = temp;
    }

};

int main(){

    //Abstractions = Hiding unecessary data from outside classes
    // getter = function that make a provate attribure READBLE
    // setter = funtion that makes a private attribute WRITEABLE

    Stove stove(0);

   // stove.temp = 100000;
   stove.setTemp(10000);

    std::cout << "The the temp is  " << stove.getTemp();

    return 0;
}