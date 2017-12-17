//
// Created by M17-612 on 03.10.2017.
//
#include <iostream>
#include "Element.h"
//using namespace std;

void Element::getInfo() {
    for(int i =0;i<4;i++){
        cout<<"Name="<<arrayOfIsotopes[i].getName()
            <<"  A="<<arrayOfIsotopes[i].getA()
            <<"  Iz="<<arrayOfIsotopes[i].getIz()
            <<"  N="<<arrayOfIsotopes[i].getN()
            <<"  fm="<<arrayOfIsotopes[i].getFm()<<endl;
    }
}


int Element::getNumb() const {
    return numb;
}

void Element::setNumb(int numb) {
    Element::numb = numb;
}

const vector<Isotope> &Element::getArrayOfIsotopes() const {
    return arrayOfIsotopes;
}

void Element::setArrayOfIsotopes(const vector<Isotope> &arrayOfIsotopes) {
    Element::arrayOfIsotopes = arrayOfIsotopes;
}



