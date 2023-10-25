#include <iostream>
using namespace std;

struct Vector {
    int sz;         //要素数
    double* elem;   //要素へのポインタ
}

void vector_init(Vector& v, int s)
{
    v.elem = new double[s];
    v.sz = s;
}
int main() {
    
}