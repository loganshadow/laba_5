#include <iostream>
#include "complex.h"
#include "vector.h"
using std::cout;
using std::cin;
int main() {
//5_1
    Complex c1(0,1);
    Complex c2;
    bool f;
    c2 = c1;
    cout << c2 << std::endl;
    cin >> c1;
    cout << c1 << std::endl;
    ++c1;
    cout << c1 << std::endl;
    cout << c1-- << std::endl;
    f = (c1 == c2);
    cout << f << std::endl;
//5_2
    Vector v1(1, 1);
    Vector v2(1, 2);
    v1 = v2;
    cout << v1;
    cin >> v1;
    cout << v1;
    f = (v1 == v2);
    cout << f;
    return 0;
}