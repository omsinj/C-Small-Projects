# include <iostream>

using namespace std;

int main () {

    cout << "Hello, welcome to my services" << endl;
    
    
    cout << "\nHow many rooms will you like to clean" << endl;
    
    int number_rooms {0}; 
    cin >> number_rooms;
    
    const double price_per_room{30.0};
    const double sales_tax {0.06};
    const int estimate_expiry{30};
    
    cout << "\nEstimate for cleaning service" << endl;
    
    cout << "Number of rooms: " << number_rooms << endl;
    
    cout << "\nPrice per room:$ " << price_per_room << endl;
    
    cout << "\nCost:$ " << price_per_room * number_rooms << endl;
    
    cout << "\nSaleTax:$ " << price_per_room * number_rooms * sales_tax << endl;
    
    cout << "\n ===========================================" << endl;
    
    cout << "\nTotal estimates: $" << (price_per_room * number_rooms) + (price_per_room * number_rooms * sales_tax) << endl;
    
    cout << "\nThis estimate is valid for " << estimate_expiry << " days" <<endl;
