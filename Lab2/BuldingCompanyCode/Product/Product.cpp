#include "Product.h"

Product::Product(int price, std::string name) {
    this->product_price = price;
    this->product_name = name;
}

void Product::AddMaterial(const Material& material) {
    materials.push_back(material);
}

void Product::ShowProduct() const {
    std::cout << "��� �������� ����� " << product_name << " �� ����� " << product_price << " ������." << std::endl;
    for (const auto& material : materials) {
        material.ShowInfo();
    }
}
std::vector<Material> Product::getMaterials()
{
    return materials;
}
