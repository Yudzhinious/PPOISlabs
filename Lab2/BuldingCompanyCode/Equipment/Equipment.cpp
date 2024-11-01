#include "Equipment.h"

Equipment::Equipment(std::string source, int cash) {
    this->source = source;
    this->cash = cash;
}
void Equipment::ShowEquipmentForRental() const {
    std::cout << "���������� ������ ������������ " << source << " �� ����� " << cash << " ������." << std::endl;    
    for (const auto& rental : rentals) {
        rental.ShowHelp_1();
    }
}
void Equipment::IsEnough() {
    int money = 360000;
    int real = cash * 30;
    if (money > real) {
        std::cout << "������� ��������� ������� " << std::endl;
    }
    else {
        std::cout << "������������ ������� ��� ������� ������������. ������� ��������� " << std::endl;
    }
}
void Equipment::AddTransportRental(const TransportRental& rental) {
    rentals.push_back(rental);
}
void Equipment::ShowEquipmentForThings() const {
    std::cout << "���������� ������ ������������ " << source << " �� ����� " << cash << " ������." << std::endl;
    for (const auto& thing : things) {
        thing.ShowHelp_2();
    }
}
void Equipment::AddThings(const Things& thing) {
    things.push_back(thing);
}
std::vector<TransportRental> Equipment::getRentals() {
    return rentals;
}
std::vector<Things> Equipment::getThings()
{
    return things;
}