//
// Created by Amila Huzbasic on 12/22/2023.
//

#ifndef PROJEKATVOZILO_MOTOR_H
#define PROJEKATVOZILO_MOTOR_H
#include "Vozilo.h"

class Motor : public Vozilo {
    int brojKubika;

public:
    Motor()=default;
    int getBrojKubika() const;
    void setBrojKubika(int brojKubika);
    bool oldTimer() const override;
    void ispis(std::ostream& out) const override;
    ~Motor() override=default;
};

#endif //PROJEKATVOZILO_MOTOR_H
