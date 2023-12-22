//
// Created by Amila Huzbasic on 12/22/2023.
//
 /*
  * Automobil koja je vozilo i koji ima i atribute marka,
  * tip i gorivo koje predstavlja enumeraciju.
Implementirati metodu oldTimer koja će vratiti true ako je
  vozilo starije od 30 godina. */
#ifndef PROJEKATVOZILO_AUTOMOBIL_H
#define PROJEKATVOZILO_AUTOMOBIL_H

#include <iostream>

#include "Vozilo.h"

 class Automobil : public Vozilo {
     std::string marka, tip;
 public:
     enum class Gorivo {
         DIZEL, BENZIN, ELEKTRICNO_VOZILO
     };

     Automobil()=default;
     void ispis(std::ostream& out) const override;
     bool oldTimer() const override;
     const std::string &getMarka() const;
     void setMarka(const std::string &marka);
     const std::string &getTip() const;
     void setTip(const std::string &tip);
     Gorivo getGorivo() const;
     void setGorivo(Gorivo gorivo);
     ~Automobil() override=default;

 private:
     Gorivo gorivo;

 };

#endif //PROJEKATVOZILO_AUTOMOBIL_H
