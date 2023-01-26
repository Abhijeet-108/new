#include <iostream>
using namespace std;

int main(){
    int p, r ,t, si , a;
    cout<< "Find out the simple interest to help the bank manager" << endl;
    cout<< "Enter the principle amount you want to deposit in bank";
    cin >> p;
    cout<< "rate of interest the bank will provide to customer";
    cin >> r;
    cout<< "Time(in term of year) for which customer want to deposite money";
    cin >> p;
    si = (p * r * t) / 100;
    cout<< "Simple interset in a given year" << si << endl;
    a = p + si;
    cout << "Amount after a given year" << a << endl;
    return 0;
}