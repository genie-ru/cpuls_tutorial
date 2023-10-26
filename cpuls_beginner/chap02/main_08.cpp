#include <iostream>
using namespace std;

void Divide() {
    int a, b;

    cout << "1番目の値を入力してください > " << flush;
    cin >> a;

    cout << "2 番目の値を入力してください > " << flush;
    cin >> b;

    if (b == 0) {
        cout << "0 では割り切れません!" << endl;
    } else {
        cout << a << " / " << b << " = "
        << a / b << " ... " << a % b << endl;
    }
}

int main() {
    Divide();
    Divide();
}