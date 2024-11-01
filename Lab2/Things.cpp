#include "Things.h"

Things::Things(int experience, int time, std::string name, std::string naming, int amount) : Fabricator(experience, time, name) {
    this->naming = naming;
    this->amount = amount;
}

void Things::ShowHelp_2() const {
    std::cout << "Производителем были оснащены" << naming << " количеством " << amount << " на срок " << time << " месяцев " << std::endl;
}