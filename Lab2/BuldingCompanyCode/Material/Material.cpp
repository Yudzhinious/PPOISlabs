#include "Material.h"

Material::Material(int exp, std::string name, std::string type, int amount) : Owner( exp, name) {
    this->type = type;
    this->amount = amount;
}

void Material::ShowInfo() const {
    std::cout << "������������ ��������� : " << type << ", ���������� ������ ��������� : " << amount << std::endl;
}