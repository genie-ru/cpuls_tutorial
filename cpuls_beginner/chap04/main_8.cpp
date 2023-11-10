#include <iostream>
using namespace std;

size_t StrLen(const char* str) { // constを追加
    size_t i;
    for(i = 0; str[i] != '\0'; ++i) {

    }
    return i;
}

void ShowLength(const char* str) { // constを追加
    cout << "文字列[" << str << "]の長さは "
         << StrLen(str) << " バイトです。" << endl;
}

int main() {
    ShowLength("Hello");
    ShowLength("");
    return 0; // main関数からのreturn文を追加
}
