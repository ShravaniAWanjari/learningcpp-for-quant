#include <iostream>
#include <cmath>

using namespace std;

int principal;
double interestRate;
int numberOfYears;

int main(){
    cout << "How much are you investing?\n";
    cin >> principal;
    cout << "What is the annual interest rate?";
    cin >> interestRate;
    cout << "How long for (years)";
    cin >> numberOfYears;
    double finalBalance = pow(1.0 + interestRate * 0.01, numberOfYears)* principal;
    double interest = finalBalance - principal;
    
    cout << "You will earn ";
    cout << interest;
    cout << "\n";

    return 0;
}
