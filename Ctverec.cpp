#include "Ctverec.h"

Ctverec::Ctverec(float strana) {
    a = strana;
}

float Ctverec::obvod() {
    return 4 * a;
}

float Ctverec::obsah() {
    return a * a;
}

std::string Ctverec::jmeno() {
    return "Ctverec";
}
