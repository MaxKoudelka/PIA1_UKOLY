#ifndef KRUH_H
#define KRUH_H

#include "Tvar.h"

class Kruh : public Tvar {
public:
    Kruh();
    Kruh(float velikostRadiusu);

    void setRadius(float radiusSize);
    float getRadius();

    float obvod() override;       
    float obsah() override;       
    std::string jmeno() override; 

private:
    float radius;
    static const float PI;

    float spocitejObvod();  
    float spocitejPlochu(); 
};

#endif
