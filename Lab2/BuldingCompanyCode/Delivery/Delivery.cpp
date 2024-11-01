#include "Delivery.h"
#include "Client.h"

Delivery::Delivery(int price, double speed, std::string s_p, std::string f_p) {
    this->price = price;
    this->speed = speed;
    this->start_place = s_p;
    this->finish_place = f_p;
}

void Delivery::AddClient(const Client& clients) {
    people.push_back(clients);
}

void Delivery::ShowDelivery() const {
    std::cout << "��������� �������� �� " << speed << " ����� �� ����� " << start_place << " � ����� "<< finish_place << " ����� ������ " << price << " ������" << std::endl;
    for (const auto& client : people) {
        client.ShowInfo();
    }
}
std::vector<Client> Delivery::getClient() {
    return people;
}