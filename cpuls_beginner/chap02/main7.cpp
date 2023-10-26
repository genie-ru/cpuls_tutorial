#include <iostream>
using namespace std;

void BirthMonth() {
    int month;

    cout << "What is your birth month?: " << flush;
    cin >> month;

    if (1 <= month && month <= 12) {
        cout << "Your birthmonth is " << month << "." << endl; 
    } else {
        cout << month << " ???" << endl;
    }
}

int main() {
    BirthMonth();
    BirthMonth();
    return 0;
}