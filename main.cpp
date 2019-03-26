#include <iostream>
using namespace std;

template <class x>
void swapargs(x &a, x &b){
    x temp;
    temp = a;
    a = b;
    b = temp;
}
template <class x1, class y1>
void disp(x1 a, y1 b){
    cout<<"a : "<<a<<"\nb : "<<b<<endl<<endl;
}

int main() {
    int i = 10, j =20;
    double m = 10.32, n =20.32;
    disp(i, j);
    swapargs(i, j);
    disp(i, j);
    disp(m, n);
    swapargs(m, n);
    disp(m, n);
    return 0;
}