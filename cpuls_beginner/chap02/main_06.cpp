#include <iostream>
using namespace std;

int main() {
    int a;
    
    cout << "Input something: " << flush;
    cin >> a;

    cout << "answer: " << a % 3 <<  endl;
    return 0; 
}