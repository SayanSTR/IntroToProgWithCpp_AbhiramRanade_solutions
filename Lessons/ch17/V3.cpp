#include <simplecpp>
#include "V3.h"

// constructor
V3::V3(double p, double q, double r){
    x = p;
    y = q;
    z = r;
}

// member functions
V3 V3::operator+(V3 const &w) const { return V3(x+w.x, y+w.y, z+w.z); }
V3 V3::operator*(double t) const { return V3(x*t, y*t, z*t); }
double V3::length() const { return sqrt(x*x+y*y+z*z); }

// other functions
ostream & operator<<(ostream & ost, V3 v){
    ost << "(" << v.x << ", "<< v.y << ", "<< v.z << ")";
    return ost;
}