#include "Checkout.h"
Checkout::Checkout(int order, int load, double coord, std::string name) {
    this->order = order;
    this->load = load;    this->coordinate = coord;
    this->name = name;
}
void Checkout::AddBudget(const Budget& budget) {
    money.push_back(budget);
}
void Checkout::AddEquipment(const Equipment& equipment) {
    equip.push_back(equipment);
}
void Checkout::Casher() {
    for (int i = 0; i < load; i++) {
        std::cout << "����� �������� � ������� " << order - 8 * i << " �������, ��������� ��� " << load - i << " ����" << std::endl;        order -= 8;
    }    std::cout << "����� ����� � ������" << std::endl;
}
void Checkout::ShowCheckout() const {
    std::cout << "����� " << name << " � ������������� " << coordinate << " �������� � ������� " << order << " ������� c ��������� � " << load << " ���� " << std::endl;    for (const auto& budget : money) {
        budget.ShowInfo();
    }
}
void Checkout::ShowingEquipment() const {
    std::cout << "����� " << name << " � ������������� " << coordinate << " �������� � ������� " << order << " ������� c ��������� � " << load << " ���� " << std::endl;    for (const auto& equipment : equip) {
        equipment.ShowEquipmentForRental();
    }
}
std::vector<Budget> Checkout::getMoney() {
    return money;
}
std::vector<Equipment> Checkout::getEquip() {
    return equip;
}