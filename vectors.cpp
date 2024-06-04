# include <iostream>
# include <vector> 

using namespace std;

int main () 
{

vector <char> vowels {'a','e','i','o','u'};

cout << "the index at 0 is: " << vowels[0] << endl;
cout<< endl;
cout << "the index at 4 is: " << vowels[4] << endl;

vector <int> test_scores {100,98,97};
cout << endl;
cout << "test_score at index 0 using array syntax is: " << test_scores[0] << endl;

cout << endl;

cout << "test score at index 1 using vector syntax is: " << test_scores.at(1) << endl;

cout << "\nThere are: " << test_scores.size() << " scores in the vector" << endl;

int score_to_add {0};

cout << "\nEnter one more test score to add to the vector: " << endl;
cin >> score_to_add;

test_scores.push_back(score_to_add);

cout << "\nTest scores are now: " << endl;

cout << "\nThere are: " << test_scores.size() << " scores in the vector" << endl;

    
return 0;
}
