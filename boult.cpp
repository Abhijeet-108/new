#include <iostream>
using namespace std;

int main(){

    int f;
    cout<< "Convert faherenheit to celsius \n";
    cout << "Enter value of faherenheit:- ";
    cin >> f;
    float celsius = (5.0/9) * (f - 32);
    cout << "Value in celsius:- " << celsius << endl;

    return 0;
}    