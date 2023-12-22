//
// Created by Amila Huzbasic on 12/22/2023.
//

#include "Motor.h"
#include <iostream>

int Motor::getBrojKubika() const {
    return brojKubika;
}

void Motor::setBrojKubika(int brojKubika) {
    Motor::brojKubika=brojKubika;
}

bool Motor::oldTimer() const {
    return trenutnaGodina()- godinaProizvodnje;
}

void Motor::ispis(std::ostream &out) const {
    Vozilo::ispis(out);
    out<<"Broj kubika: " << brojKubika << std::endl;
}