//
// Created by M17-612 on 03.10.2017.
//

#ifndef UNTITLED_ELEMENT_H
#define UNTITLED_ELEMENT_H

#include <vector>
#include "Isotope.h"

using namespace std;
class Element{
private:
    int numb;
public:
    vector<Isotope> arrayOfIsotopes;
    int getNumb() const;

    void setNumb(int numb);

    const vector<Isotope> &getArrayOfIsotopes() const;

    void setArrayOfIsotopes(const vector<Isotope> &arrayOfIsotopes);

public:
     void getInfo();
};
#endif //UNTITLED_ELEMENT_H
