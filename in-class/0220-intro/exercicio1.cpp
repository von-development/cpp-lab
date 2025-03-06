#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    int hour;
    int min;
    int sec;

public:

    // 1. CONSTRUTOR DEFAULT INCIALIZIA EM 0; 0; 0
    Time() : hour(0), min(0), sec(0) {};

    // 2. CONSTRUCTOR PARAMETRIZADO
    Time(int h, int m, int s){
        setTime(h, m, s);
    }

    // 3. Set Funcao condicao da parametrizacao
    void setTime(int h, int m, int s){
        hour = (h >= 0 && h < 24) ? h : 0;
        min = (m >= 0 && m < 60) ? m: 0;
        sec = (s >= 0 && m < 60) ? s: 0;
    }


    //4. Get methodos
    int getHour() const {return hour; }
    int getMin() const {return min; }
    int getSec() const {return sec; }

    //5 display 
    void displayTime() const {
        cout << setw(2) << setfill('0') << hour << ":" <<
        setw(2) << setfill('0') << min << ":" <<
        setw(2) << setfill('0') << sec << endl;
    }

    

};


int main(){

    Time time1(5, 6, 7);
    time1.displayTime();

    return 0;
}