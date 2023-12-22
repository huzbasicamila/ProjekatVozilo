//
// Created by Amila Huzbasic on 12/22/2023.
//

#ifndef PROJEKATVOZILO_KONTEJNER_H
#define PROJEKATVOZILO_KONTEJNER_H
#include <vector>
#include <stdexcept>
#include "Vozilo.h"
#include "Automobil.h"

class Kontejner {
    std::vector<Vozilo*> vozila;

public:
    Kontejner()=default;
    inline size_t operator!() {
        return vozila.size();
    }
    inline Vozilo* operator[](int index) const {
        return vozila.at(index);
    }
    void dodajAutomobil(const std::string& marka, const std::string& tip, Automobil::Gorivo gorivo, int brojTockova, int godinaProizvodnje, const std::string& proizvodac);
    void dodajMotor(int brojTockova, int godinaProizvodnje, const std::string& proizvodac, int brojKubika);
    inline std::vector<Vozilo*> sviOldTajmeri() const {
        std::vector<Vozilo*> pomocniVektor;
        for(const auto& vozilo : vozila)
            if(vozilo->oldTimer()) pomocniVektor.push_back(vozilo);
        return pomocniVektor;
    }
    inline ~Kontejner() {
        for (const auto& vozilo : vozila) delete vozilo;
    }
};
#endif //PROJEKATVOZILO_KONTEJNER_H
