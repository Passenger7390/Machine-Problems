// Programmed by : Jaycy Ivan A. Bañaga
// CEIT 03-302A
// Sept 14, 2022

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class GasPump {
    private:
        double liter; // total quantity of gas
        double cost; // cost of gas per liter
        double total; // total cost of gas per liter
    public:
      //  void askInput();
        void showLiter();
        void showCost();
        void showTotal();
        void distribute();
        
};

void keypress(); // function declaration for detecting keypress

int main() {
    GasPump test;
    test.showLiter();
    test.showCost();
    test.showTotal();

    return 0;
};

void keypress() {

    char key; 
    int ascii;
    bool i = true;

    while(i) {

        key = getch();
        ascii = key;

        if (ascii == 27)
            i = false;

        cout << "Key " << key << " is pressed!," << " ascii value is " << ascii << endl;
    }

};

void GasPump::showLiter() {

    double l = 00000.00;
    cout << fixed << setprecision(7);
    cout << left;
    cout << setw(19) << "Liter : ";
    cout << l << endl;

};

void GasPump::showCost() {

    double p = 62.00;
    cout << fixed << setprecision(2);
    cout << left;
    cout << setw(19) << "Price per Liter : ";
    cout << p << endl;

};

void GasPump::showTotal() {
    double t = 00.00;
    cout << fixed << setprecision(2);
    cout << left;
    cout << setw(19) << "Price : ";
    cout << t << endl;
};

