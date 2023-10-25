#include <iostream>
using namespace std;

bool accept()
{
    cout << "Do you want to proceed (y or n)? \n";
    
    char answer = 0;
    cin >> answer;
    if (answer == 'y') return true;
    return false;
}

bool accept2()
{
    cout << "Do you want to proceed (y or n)?\n" << endl;

    char answer = 0;
    cin >> answer;

    switch (answer) {
    case 'y':
        return true;
    case 'n':
        return false;
    default:
        cout << "I'll take that for a no.\n";
        return false;
    }
}

bool accept3()
{
    int tries = 1;
    while (tries<4) {
        cout << "Do you want to proceed (y or n)?\n";
        char answer = 0;
        cin >> answer;

        switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "Sorry, I don't understand that.\n" << endl;
            ++ tries;
        }
    }
    cout << "I'll take for a no.\n";
    return false;
}

void copy_fct() {
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];

    for (auto i=0; i!=10; ++i)
        v2[i]=v1[i];
}

void print() {
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    
    for (auto x : y)
        cout << x << '\n' << endl;
    for (auto x : y {10,21,32,43,54,65})
        cout << x << '\n' << endl;
}

void increament()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    for (auto& x : v)
        ++x;
}
int main() {
    accept();
    accept2();
    accept3();
    return 0;
}