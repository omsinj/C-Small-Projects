# include <iostream>

using namespace std;

int main () 
{
int total {};
int num1{}, num2{}, num3{};

const int count{3};

cout << " Enter three integers seperated by spaces: ";

cin >> num1>> num2>>num3;

total = num1 + num2 + num3;

double average {0.0};

average  = static_cast <double>(total) / count;

cout << " The numbers were: " << num1 << "," << num2 << "," << num3 << endl;

cout << " the sum of the number is: " << total << endl;

cout << " the average of the number is : " << average << endl;
    
return 0;
}
