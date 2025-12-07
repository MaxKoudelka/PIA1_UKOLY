#include <iostream>
#include <vector>
#include "Tvar.h"
#include "Kruh.h"
#include "Ctverec.h"

int main() {

    std::vector<Tvar*> tvary;

    tvary.push_back(new Kruh(5));
    tvary.push_back(new Ctverec(3));

    for (Tvar* t : tvary) {
        std::cout << t->jmeno()
                  << " | obsah: " << t->obsah()
                  << " | obvod: " << t->obvod()
                  << std::endl;
    }

    for (Tvar* t : tvary)
        delete t;

    return 0;
}
