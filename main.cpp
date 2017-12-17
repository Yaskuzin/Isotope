#include <iostream>
#include "Element.h"

int main() {
    Isotope *Fe56 = new Isotope("Fe56",55.9349363,26,56,0.91754);
    Isotope *Fe54 = new Isotope("Fe54",53.9396090,26,54,0.05845);
    Isotope *Fe57 = new Isotope("Fe57",56.9353928,26,57,0.02119);
    Isotope *Fe58 = new Isotope("Fe58",57.9332744,26,58,0.00282);
    Element *Fe = new Element();
    vector<Isotope> vector1;
    vector1.push_back(*Fe54);
    vector1.push_back(*Fe56);
    vector1.push_back(*Fe57);
    vector1.push_back(*Fe58);
    Fe->setArrayOfIsotopes(vector1);
    Fe->getInfo();
    return 0;
}