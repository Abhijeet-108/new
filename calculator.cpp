#include<iostream>
using namespace std;

int main() {
    cout << "TRINETRA CALCULATOR WORLD \n";
    char op;
    float x;
    cout << "Enter the value of x:-  ";
    cin >> x;
    cout << "Enter the value of operator(+,-,*,/):-  ";
    cin >> op;
    float y;
    cout << "Enter the value of y:-  ";
    cin >> y;
    switch (op)
    {
    case '+':
        cout << "your answer:- " << x + y << endl;
        break;

    case '-':
        cout << "your answer:- " << x - y << endl;
        break;
    
    case '*':
        cout << "your answer:- " << x * y << endl;
        break;         
    
    case '/':
        cout << "your answer:- " << x / y << endl;
        break;

    /*case '%':
        cout << "your answer:- " <<x % y;
        break;*/

    default:
        cout<< "Error! PLEASE ENTER CORRECT OPERATOR ";
        break;
    }
    cout << "THANKS FOR USING TRINETRA CALCULATOR \n" "FOR MORE VISITS TRINETRA WEBSITES := www.trinetraworld.in.co " ;
}