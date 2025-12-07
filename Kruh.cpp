#include "Kruh.h"

const float Kruh::PI = 3.14f;

// Výchozí konstruktor
Kruh::Kruh() {
    radius = 0;
}

// Konstruktor s parametrem
Kruh::Kruh(float velikostRadiusu) {
    radius = velikostRadiusu;
}

void Kruh::setRadius(float radiusSize) {
    radius = radiusSize;
}

float Kruh::getRadius() {
    return radius;
}

// Původní funkce
float Kruh::spocitejObvod() {
    return 2 * PI * radius;
}

float Kruh::spocitejPlochu() {
    return PI * radius * radius;
}

// Přepsání virtuálních metod z Tvar
float Kruh::obvod() {
    return spocitejObvod();
}

float Kruh::obsah() {
    return spocitejPlochu();
}

std::string Kruh::jmeno() {
    return "Kruh";
}