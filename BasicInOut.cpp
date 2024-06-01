# include <iostream>

// Basic I/O using cin and cout

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    
    cout << "Hello"; 
    
    cout << " World" <<endl;
    
    cout << "Hello World!" << endl;
    
    cout << "Hello" << " World" << endl;
    
    cout << "Hello" << " World\n";
    
    cout << "Hello\nOut\nThere\n";
    
    int num1;
    int num2;
    
    double num3;
    
    cout << " Enter an interger: ";
    cin >> num1;
    cout << "You entered " << num1 << endl;
    
    cout << "Enter a first Intger ";
    cin >> num1;
    
    cout << " Enter a second Interger: ";
    cin >> num2;
    
    cout << " You entered " << num1 << " and " << num2 << endl;
    
    
    cout << " Enter 2 Integers separated with a space: ";
    cin >> num1 >> num2;
    cout << " You entered " << num1 << " and " << num2 << endl;
    
    cout << " Enter a double: ";
    cin >> num3;
    cout << " You entered " << num3 << endl;
    
    return 0;
