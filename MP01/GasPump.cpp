// Sept 14, 2022

#include <iostream>
#include <iomanip>
#include <conio.h> // header for getting keyboard input
#include <windows.h> // header used in sleep function
using namespace std;

// class declaration
class GasPump {
    private:
        double liter; // total quantity of gas
        double cost; // cost of gas per liter
        double total; // total cost of gas per liter
    public:
        GasPump(); // Constructor
        void showLiter();
        void showCost();
        void showTotal();
        void reset();
        void calc();
        
};

GasPump::GasPump() { // Constructor

    liter = 00000.00;
    cost = 62.00;
    total = 00.00;

};

int main() {
    // Variable Declaration
    char key;
    int ascii;
    bool t = true;
    
    GasPump pump1; // object declaration


    do {
        Sleep(150); // delay to avoid screen stuttering
        system("cls"); // clear screen
        pump1.showLiter(); // show liter
        pump1.showCost(); // show price per liter
        pump1.showTotal(); // show total price

        key = getch(); // keyboard input
        ascii = key; // assigning char value of keyboard input to integer value of keyboard input

        if (ascii == 27) { // pressing esc button to exit the program
            break;
        }
        else if (ascii == 13) { // pressing enter key to fill up the tank
            pump1.calc(); 
        }
        else if (ascii == 120) { // x button
            pump1.reset();   // resetting the values to 0
        }
        
    } while (t);

    return 0;
};

// Class implementation

void GasPump::reset() { // method to reset the values
    
    system("cls"); // clearing screen

    liter = 00000.00;
    cost = 62.00;
    total = 00.00;

    showLiter();
    showCost();
    showTotal();
    
}; 

void GasPump::showLiter() { // method to show liter
    
    cout << fixed << setprecision(2) << left << setw(19);
    cout << "Liter : " << liter <<endl;
  
};

void GasPump::showCost() { // method to show price per liter

    cout << fixed << setprecision(2) << left << setw(19);
    cout << "Price per Liter : " << "PhP " << cost << endl;
  
};

void GasPump::showTotal() { // method to show total price of the gas
    
    cout << fixed << setprecision(2) << left << setw(19);
    cout << "Price : " << total;
    
};

void GasPump::calc() { // calculating the total amount of gas
    liter = liter + 0.2;
    total = liter * cost;
};