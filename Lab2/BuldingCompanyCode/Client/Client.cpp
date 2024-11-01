#include "Client.h"

Client::Client(int exp, std::string name, std::string surname, int cash) : Owner(exp, name) {
    this->surname = surname;
    this->cash = cash;
}

void Client::ShowInfo() const {
    std::cout << "������ " << surname << " �������� ����� �� " << cash << " ������" << std::endl;
}