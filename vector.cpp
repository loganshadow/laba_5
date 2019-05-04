//
// Created by mikh- on 03.05.2019.
//

#include "vector.h"
#include <iostream>
void Vector::abs()
{
    double a = sqrt(x * x + y * y);
    std::cout << "abs: " << a;
};

void Vector::sum(Vector v1, Vector v2)
{
    x = v1.x + v2.x;
    y = v1.y + v2.y;
    std::cout << "Sum:" << std::endl;
    get_Vector();
};

void Vector::difference(Vector v1, Vector v2)
{
    x = v1.x - v2.x;
    y = v1.y - v2.y;
    std::cout << "Diff: " << std::endl;
    get_Vector();
};
void Vector::set_Vector()
{
    std::cout << "Enter coords"<< std::endl;
    std::cout << "Enter X: ";
    std::cin >> x;
    std::cout << "Enter Y: ";
    std::cin >> y;
}

void Vector::get_Vector()
{
    std::cout << "X = " << x << std::endl;
    std::cout << "Y = " << y << std::endl;
}
Vector::Vector(double x, double y): x(x), y(y) {};
Vector::Vector(const Vector &alt): x(alt.x), y(alt.y) {};
Vector &Vector::operator=(Vector const &rv) {
    y = rv.y;
    x = rv.x;
    return *this;
};
bool Vector::operator==(Vector const &alt) {
    return ((x/alt.x == y/alt.y) && sqrt(x*x + y*y) == sqrt(alt.x*alt.x + alt.y*alt.y));
};
std::ostream &operator<<(std::ostream &out, Vector const &alt){
    out << "X = " << alt.x << std::endl << "Y = " << alt.y << std::endl;
    return  out;
};
std::istream &operator>>(std::istream &in, Vector &alt){
    std::cout << "Enter X" << std::endl;
    in >> alt.x;
    std::cout << "Enter Y" << std::endl;
    in >> alt.y;
    return in;
}