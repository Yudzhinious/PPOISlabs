#include "SectionsOfDepartment.h"

SectionsOfDepartment::SectionsOfDepartment(int number, std::string name) {
    this->number = number;
    this->name_of_section = name;
}
void SectionsOfDepartment::AddStorage(const Storage& storage) {
    storages.push_back(storage);
}

void SectionsOfDepartment::ShareSection() {
    if (name_of_section == " ") {
        std::cout << "������ ����� �� ���������, ���������� ��������� ��������" << std::endl;
    }
}
void SectionsOfDepartment::EditSection() {
        if (number == 0) {
            std::cout << "����� " << name_of_section << " ���������� ��������������" << std::endl;
        }
        else {
            std::cout << "����� " << name_of_section << " �������� � ���� ����������� ���������� ������" << std::endl;
        }
}
void SectionsOfDepartment::ShowSectionsOfDepartment() const {
    std::cout << "�������� ������� �� ������� " << name_of_section << " ����������� " << number << " ����." << std::endl;
    for (const auto& storage : storages) {
        storage.ShowInfo();
    }
}
std::vector<Storage> SectionsOfDepartment::getStorages() {
    return storages;
}