#include <iostream>
#include <string>

int main (int argc, char* argv[])
double pay = 0, wages=0, hours_worked=0;
double ot_rate =1.5;
std:: cout << "Enter in the hours worked:";
std:: cin >> wage;

// compute regukar wages
if (hours_worked <=40)
pay = hours_worked * wage;

//compute overtimepay
else
pay =(wage *40) +(ot_rate * wage *(hours_worked -40));

std:: cout << "You earned" << pay << "this weeke\n";

