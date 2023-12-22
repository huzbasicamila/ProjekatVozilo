//
// Created by Amila Huzbasic on 12/22/2023.
//

#include "Vozilo.h"
#include <iostream>
#include <ctime>

void Vozilo::setGodinaProizvodnje(int godinaProizvodnje) {
    Vozilo::godinaProizvodnje=godinaProizvodnje;
}

void Vozilo::setBrojTockova(int brojTockova) {
    Vozilo::brojTockova=brojTockova;
}

void Vozilo::setProizvodac(const std::string &proizvodac) {
    Vozilo::proizvodac=proizvodac;
}

int Vozilo::getGodinaProizvodnje() {
    return godinaProizvodnje;
}

int Vozilo::getBrojTockova() {
    return brojTockova;
}

std::string &Vozilo::getProizvodac() {
    return proizvodac;
}

void Vozilo::ispis(std::ostream &out) const  {
    out<< proizvodac << " (" << godinaProizvodnje << " ) - " << brojTockova << "- tockova\n";

}

int Vozilo::trenutnaGodina() {
    const time_t time= std::time(nullptr);
    struct tm *tm=std::localtime(&time);
    return tm->tm_year+1900;
}
