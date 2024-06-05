# include <iostream>

using namespace std;

int main ()
{

const double pound_usd {1.28};

cout << " Welcome to the Pound to USD converter" << endl;
cout << " Enter the value in Pounds:£ ";

double pounds {0.0};
double dollars {0.0};

cin >> pounds;

dollars = pounds * pound_usd;

cout << pounds << " pounds is eqivalent to " << dollars <<" dollars" << endl;    
    
return 0;
