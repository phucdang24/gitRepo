#include <iostream>
#include <math.h>
using namespace std;

class fraction {
    public:
        int numerator;
        int denominator;

        void getFraction (int numerator, int denominator) {
            this->numerator = numerator;
            this->denominator = denominator;
        }

        void putFraction () {
            cout << numerator << "/" << denominator << endl ;
        }


        fraction (float width, float height){
        }

};



int main () {

    fraction *number = new fraction();

    number->getFraction(2,4);
    number->putFraction();
    

    fraction *number2 = new fraction();

    return 0;
}
