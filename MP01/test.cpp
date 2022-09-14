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
        GasPump();
        void showLiter();
        void showCost();
        void showTotal();
        void distribute();
        void keypress();
        
};

GasPump::GasPump() {

    liter = 00000.00;
    cost = 62.00;
    total = 00.00;

};

void keypress(); // function declaration for detecting keypress

int main() {

    char key;
    int ascii;
    bool t = true;
    
    GasPump test;

    while(t) {
        key = getch();
        ascii = key;
        
        if (ascii == 27)
            break;
        else if (ascii == 120)
            test.keypress();   
        
        
    }
    
    return 0;
};

void GasPump::keypress() {
    showLiter();
    showCost();
    showTotal();
  
}; 

void GasPump::showLiter() {
    
    string statement;
        
    statement = "Liter : ";
    cout << fixed << setprecision(2) << left << setw(19) << statement << liter << "\r\n";
    liter = liter + 0.2;
};

void GasPump::showCost() {

    string statement,s1;
    s1 = "PhP ";
    statement = "Price per Liter : ";
    cout << fixed << setprecision(2) << left << setw(19) << statement << s1 << cost << "\n";

};

void GasPump::showTotal() {
    
    string statement, s1;

    statement = "Price : ";
    
    cout << fixed << setprecision(2) << left << setw(19) << statement << total << "\n";
    total = cost * liter;

};

