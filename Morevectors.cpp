#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10); // use pushback to add into the vectors
    vector2.push_back(20);

    vector1.push_back(40);
    vector2.push_back(80);

    vector1.push_back(90);
    vector2.push_back(100);

    // Print the sizes of the vectors
    cout << "\nThere are: " << vector1.size() << " scores in vector1" << endl;
    cout << "Contents of vector1: ";
    for (int i = 0; i < vector1.size(); ++i) {
        cout << vector1[i] << " ";
    }
    cout << endl;

    cout << "\nThere are: " << vector2.size() << " scores in vector2" << endl;
    cout << "Contents of vector2: ";
    for (int i = 0; i < vector2.size(); ++i) {
        cout << vector2[i] << " ";
    }
    cout << endl;

    return 0;
}
