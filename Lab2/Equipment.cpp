#include "Equipment.h"

Equipment::Equipment(std::string source, int cash) {
    this->source = source;
    this->cash = cash;
}

void Equipment::ShowEquipmentForRental() const {
    std::cout << "Было закуплено оборудование " << source << " на сумму " << cash << " рублей." << std::endl;
    for (const auto& rental : rentals) {
        rentals.ShowHelp();
    }
}
void Equipment::AddTransportRental(const TransportRental& rental) {
    rentals.push_back(rental);
}
void Equipment::ShowEquipmentForThings() const {
    std::cout << "Было закуплено оборудование " << source << " на сумму " << cash << " рублей." << std::endl;
    for (const auto& thing : things) {
        things.ShowHelp();
    }
}
void Equipment::AddThings(const Things& thing) {
    things.push_back(thing);
}