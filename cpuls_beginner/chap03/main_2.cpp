#include <iostream>
using namespace std;

void WestrnToShouwa(int x) {
    if(1926 <= x && x <= 1989) {
        x -= 1925;
    } else {
        x = 0;
    }
}

void Shouwa() {
    int year;

    cout << "西暦を入力してください > " << flush;
    cin >> year;
    WestrnToShouwa(year);
    if(year != 0) {
        cout << "その年は昭和 " << year << " 年です。 " << endl;
    } else {
        cout << "その年は昭和ではありません。" << endl;
    }
}

int main() {
    Shouwa();
    Shouwa();
}