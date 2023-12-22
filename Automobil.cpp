//
// Created by Amila Huzbasic on 12/22/2023.
//

#include "Automobil.h"


bool Automobil::oldTimer() const {
    return trenutnaGodina()-godinaProizvodnje>30;
}

void Automobil::ispis(std::ostream &out) const {
    Vozilo::ispis(out);
    out<<marka << " " << tip << " - GORIVO: ";
    switch (gorivo) {
        case Gorivo::BENZIN: out<< "BENZIN";
        case Gorivo::DIZEL: out<< "DIZEL";
        case Gorivo::ELEKTRICNO_VOZILO: out<< "ELEKTRICNO VOZILO";

    }
    out<< std::endl;
}

const std::string &Automobil::getMarka() const {
    return marka;
}

void Automobil::setMarka(const std::string &marka) {
    Automobil::marka=marka;
}

const std::string &Automobil::getTip() const {
    return tip;
}

void Automobil::setTip(const std::string &tip) {
    Automobil::tip = tip;
}

Automobil::Gorivo Automobil::getGorivo() const {
    return gorivo;
}

void Automobil::setGorivo(Automobil::Gorivo gorivo) {
    Automobil::gorivo=gorivo;
}