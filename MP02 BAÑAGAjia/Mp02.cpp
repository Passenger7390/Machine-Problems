#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

class Func {
    private:
        string a;
        int b;
        vector<int> intList;
        vector<int>::iterator it;
    public:
        void init();
        void inputNum();
        void convert();
        void low();
        void mid();
        void high();
        void ascending();
        void descending();
        void odd();
        void even();
        void clear();

};

int main() {
    string key;

    Func w;
    
    w.init();

    while (true)
    {
        key = " ";
        cout << endl;
        cout << "Try another[y/n] : ";
        getline(cin,key);

        if (key == "y") {
            w.init();
        }
        else if (key == "n") {
            break;
        }

        key = " ";
        cout << endl;
    }
    
    return 0;
   
};

void Func::init() {
    clear();
    inputNum();
    convert();
    low();
    mid();
    high();
    ascending();
    descending();
    odd();
    even();
}

void Func::inputNum() {
    cout << "Enter positive integer : ";
    getline(cin,a);
}

void Func::convert() { // Function to convert string to integer

    stringstream s;
    
    s << a;
    
    while (s >> b) {
        intList.push_back(b);
    }

    int n = intList.size();
    for (it = intList.begin(); it != intList.end(); ++it) {
        if (intList[n-1] < 0) {
            continue;
        }
        else {
            exit(0);
        }
    }

    intList.pop_back();

}

void Func::low() {
    sort(intList.begin(), intList.end());
    cout << endl;
    cout << "Low : " << intList[0] << endl;
}

void Func::mid() {
    sort(intList.begin(), intList.end());
    cout << endl;
    int n = intList.size();
    int a = n % 2;

    if (a == 0) { // if the index size is even
        n /= 2;
        cout << "Mid : " << intList[n-1] << " " << intList[n] << endl;
    }
    else { // if the index size is odd
        n /= 2; 
        cout << "Mid : " << intList[n] << endl;
    }
}

void Func::high() {
    sort(intList.begin(), intList.end());
    cout << endl;
    int n = intList.size();
    cout << "High : " << intList[n-1] << endl;
}

void Func::ascending() {
    sort(intList.begin(), intList.end());
    cout << endl;
    cout << "Ascending : ";

    for (it = intList.begin(); it != intList.end(); ++it) 
        cout << *it << " ";
    
    cout << endl;
}

void Func::descending() {
    reverse(intList.begin(), intList.end());
    cout << endl;
    cout << "Descending : ";

    for (it = intList.begin(); it != intList.end(); ++it)
        cout << *it << " ";
    cout << endl;

}

void Func::odd() {
    sort(intList.begin(), intList.end());
    cout << endl;
    cout << "Odd : ";

    for (it = intList.begin(); it != intList.end(); ++it) {  
        if ((*it % 2) != 0) {
            cout << *it << " ";
        }
    }
    cout << endl;
}

void Func::even() {
    sort(intList.begin(), intList.end());
    cout << endl;
    cout << "Even : ";

    for (it = intList.begin(); it != intList.end(); ++it) {  
        if ((*it % 2) == 0) {
            cout << *it << " ";
        }
    }
    cout << endl;
}

void Func::clear() {
    intList.clear();
    a = " ";
    b = 0;
}