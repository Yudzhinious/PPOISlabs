#include "TransportRental.h"

TransportRental::TransportRental(int experience, int time, std::string name, std::string naming, int amount) : Fabricator( experience, time, name) {
    this->naming = naming;
    this->amount = amount;
}

void TransportRental::ShowHelp_1() const {
    std::cout << "�������������� ��� ������� ���������" << naming << " ����������� " << amount << " � ������ �� " << time << " ������� " << std::endl;
}
void TransportRental::Experience() const {
    if (amount == 0) {
        std::cout << "�������������� �� ��� ������� �����������"  << std::endl;
    }
    else {
        std::cout << "���������"<< naming<< "���������� ������������ ��� ������������ �����" << std::endl;
    }
}