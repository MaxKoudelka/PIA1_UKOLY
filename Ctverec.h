#ifndef CTVEREC_H
#define CTVEREC_H

#include "Tvar.h"

class Ctverec : public Tvar {
public:
    Ctverec(float strana);

    float obvod() override;
    float obsah() override;
    std::string jmeno() override;

private:
    float a;
};

#endif
