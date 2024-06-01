#include <iostream>  // Include the iostream header for input/output

int main() 
{
    int favourite_number;
    
    int new_number;
    
    // Prompt the user for their favourite number
    std::cout << "Enter your favourite number between 1 and 10: ";
    
    // Read the input from the user
    std::cin >> favourite_number;
    
    // Print the user's favourite number
    std::cout << "You entered: " << favourite_number << std::endl;
    
    // Print a message indicating it's also your favourite number
    std::cout << "Amazing!! That's my favourite number too!" << std::endl;
    
    std::cout << "Enter another number: ";
    
    std::cin >> new_number;
    
    // Print the user's favourite number
    std::cout << "You entered: " << new_number << std::endl;
    
    // Print a message indicating it's also your favourite number
    std::cout << "Amazing!! That's your first C++ program, keep it going" << std::endl;
    
    return 0;
}
