//
// Created by Amila Huzbasic on 12/22/2023.
//

#include "Kontejner.h"
#include "Motor.h"

void Kontejner::dodajAutomobil(const std::string &marka, const std::string &tip, Automobil::Gorivo gorivo,
                               int brojTockova, int godinaProizvodnje, const std::string &proizvodac) {
    auto* automobil =new Automobil();
    automobil->setMarka(marka);
    automobil->setTip(tip);
    automobil->setGorivo(gorivo);
    automobil->setBrojTockova(brojTockova);
    automobil->setGodinaProizvodnje(godinaProizvodnje);
    automobil->setProizvodac(proizvodac);
    vozila.push_back(automobil);
}

void Kontejner::dodajMotor(int brojTockova, int godinaProizvodnje, const std::string &proizvodac, int brojKubika) {
    auto* motor= new Motor();
    motor->setBrojKubika(brojKubika);
    motor->setBrojTockova(brojTockova);
    motor->setGodinaProizvodnje(godinaProizvodnje);
    motor->setProizvodac(proizvodac);
    vozila.push_back(motor);
}
