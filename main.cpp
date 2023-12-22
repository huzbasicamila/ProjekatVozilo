#include <iostream>
#include <limits>
#include "Kontejner.h"

inline int meni() {
    std::cout<<"1. Dodavanje automobila\n";
    std::cout<<"2. Dodavanje motora\n";
    std::cout<<"3. Broj elemenata u kontejneru\n";
    std::cout<<"4. Ispis vozila po indeksu\n";
    std::cout<<"5. Ispis svih old tajmera iz kontejnera\n";
    std::cout<<"0. Izlaz\n Izbor:";

    int izbor=0;
    do {
        std::cin >> izbor;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max());

        }
    }while (izbor<0 || izbor>5);
        return izbor;
    }


    int main() {
    Kontejner kontejner;
    int izbor;
    while((izbor=meni())) {
        std::cin.ignore();
        switch(izbor) {
            case 1: {
                std::cout<<"Unesite marku automobila: ";
                std::string marka;
                std::getline(std::cin, marka);

                std::cout<<"Unesite tip automobila: ";
                std::string tip;
                std::getline(std::cin, tip);

                std::cout<<"Unesite ime proizvodjaca: ";
                std::string proizvodjac;
                std::getline(std::cin, proizvodjac);

                int brojTockova, godinaProizvodnje;
                std::cout<<"Unesite broj tockoba: ";
                std::cin>>brojTockova;
                std::cout<<"Unesite godinu proizvodnje automobila: ";
                std::cin>>godinaProizvodnje;

                int gorivoIndex;
                std::cout<<"Unesite tip goriva (00 - DIZEL, 1 - BENZIN, 2 ELEKTRICNO VOZILO): ";
                do {
                    std::cin>>gorivoIndex;
                } while(gorivoIndex < 0 || gorivoIndex> 2);
                Automobil::Gorivo gorivo;

                switch(gorivoIndex) {
                    case 0: gorivo = Automobil::Gorivo::DIZEL; break;
                    case 1: gorivo = Automobil::Gorivo::BENZIN; break;
                    case 2: gorivo = Automobil::Gorivo::ELEKTRICNO_VOZILO; break;
                }
                kontejner.dodajAutomobil(marka, tip, gorivo, brojTockova, godinaProizvodnje,proizvodjac);
                break;
            }
            case 2: {
                std::cout<<"Unesite ime proizvodjaca motora: ";
                std::string proizvodjac;
                std::getline(std::cin, proizvodjac);

                int brojTockova, godinaProizvodnje, brojKubika;
                std::cout<<"Unesite broj tockova motora: ";
                std::cin>>brojTockova;
                std::cout<<"Unesite godinu proizvodnje: ";
                std::cin>>godinaProizvodnje;
                std::cout<<"Unesite broj kubika: ";
                std::cin>>brojKubika;

                kontejner.dodajMotor(brojTockova, godinaProizvodnje, proizvodjac, brojKubika);
                break;
            }
            case 3: {
                std::cout<<"Uneseno je " << !kontejner << "vozila\n";
                break;
            }
            case 4: {
                try {
                    std::cout<<"Unesite indeks vozila za ispis: ";
                    int index;
                    std::cin>>index;
                    kontejner[index] ->ispis(std::cout);
                } catch (...) {
                    std::cout<<"Neispravan index ili nepoznata greska";
                }
                break;
            }
            case 5: {
                std::vector<Vozilo*> oldTajmeri= kontejner.sviOldTajmeri();
                if(oldTajmeri.empty()) {
                    std::cout<<"Nema unesenih old tajmera\n";
                    break;
                }
                std::cout<<"Old tajmeri u kontejneru su: \n";
                for (const auto &vozilo : oldTajmeri) vozilo->ispis(std::cout);
                break;
            }
            default: {
                std::cout<<"Pogresan izbor\n";
                break;
            }
        }
    }
    return 0;
}
