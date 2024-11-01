#include "Things.h"

Things::Things(int experience, int time, std::string name, std::string naming, int amount) : Fabricator(experience, time, name) {
    this->naming = naming;
    this->amount = amount;
}

void Things::ShowHelp_2() const {
    std::cout << "�������������� ���� ��������" << naming << " ����������� " << amount << " �� ���� " << time << " ������� " << std::endl;
}

void Things::Valid() {
    int a = amount*time-experience;
    if (a < 10000) {
        std::cout << "������ ���� ������������� �������� ��������� ��������" << std::endl;
    }
    else {
        std::cout << "������ ���� �� ������������� �������� ��������� ��������" << std::endl;
    }
}