#include <iostream>
using namespace std;

size_t StrLen(const char* str) {
    const char* p;
    for(p = str; *p != '\0'; ++p) {
    }
    return p - str;
}

void ShowLength(const char* str) {
    cout << "文字列[" << str << "]の長さは "
         << StrLen(str) << " バイトです。" << endl;
}

int main() {
    ShowLength("Hello");
    ShowLength(""); // 空文字列も正しく処理されるように修正
    return 0; // main 関数の戻り値を追加
}
