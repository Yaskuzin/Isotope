//
// Created by M17-612 on 03.10.2017.
//

#ifndef UNTITLED_ISOTOPE_H
#define UNTITLED_ISOTOPE_H

#include <string>
using namespace std;
class Isotope{
public:
    Isotope();

    const string &getName() const;

    void setName(const string &name);

    double getA() const;

    void setA(double a);

    int getIz() const;

    void setIz(int iz);

    int getN() const;

    void setN(int n);

    double getFm() const;

    void setFm(double fm);

    Isotope(string name, double a, int iz, int n, double fm);

private:
    string name;
    double a;
    int iz;
    int n;
    double fm;
};
#endif //UNTITLED_ISOTOPE_H
