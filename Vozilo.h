//
// Created by Amila Huzbasic on 12/22/2023.
//
/* 1. Vozilo koja je sadrzi podatake o godini proizvodnje, broju točkova, proizvođaću, te
omogućava get i set metode za te atribute. Kreirati metodu oldTimer koja će se preklopiti u
izvedenim klasama. */
#ifndef PROJEKATVOZILO_VOZILO_H
#define PROJEKATVOZILO_VOZILO_H

#include <iostream>
#include <string>

class Vozilo{
protected:
    int godinaProizvodnje;
    int brojTockova;
    std::string proizvodac;

public:
    Vozilo()=default;
    void setGodinaProizvodnje(int godinaProizvodnje);
    void setBrojTockova(int brojTockova);
    void setProizvodac(const std::string &proizvodac);

    int getGodinaProizvodnje();
    int getBrojTockova();
    std::string &getProizvodac();

    static int trenutnaGodina();

    virtual void ispis(std::ostream& out) const;
    virtual bool oldTimer() const=0;

    virtual ~Vozilo() =default;
};

#endif //PROJEKATVOZILO_VOZILO_H
