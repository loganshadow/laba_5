//
// Created by mikh- on 03.05.2019.
//

#ifndef LABA_4_VECTOR_H
#define LABA_4_VECTOR_H

#include "complex.h"

class Vector{
    double x;
    double y;
public:
    Vector(double x = 0, double y = 0);
    Vector(const Vector &alt);
    Vector &operator=(Vector const &rv);
    bool operator==(Vector const &alt);
    friend std::ostream &operator<<(std::ostream &out, Vector const &alt);
    friend std::istream &operator>>(std::istream &in, Vector &alt);
    ~Vector() {};
    void set_Vector();
    void get_Vector();
    void abs();
    void sum(Vector v1, Vector v2);
    void difference(Vector v1, Vector v2);
};
#endif //LABA_4_VECTOR_H
