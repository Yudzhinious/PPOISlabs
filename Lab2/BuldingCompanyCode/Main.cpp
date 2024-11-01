#include "Budget.h"
#include "Checkout.h"
#include "Client.h"
#include "Company.h"
#include "Delivery.h"
#include "Things.h"
#include "Equipment.h"
#include "Fabricator.h"
#include "Material.h"
#include "Owner.h"
#include "Product.h"
#include "SectionsOfDepartment.h"
#include "Staff.h"
#include "Storage.h"
#include "TransportRental.h"
#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	
	std::cout << "Информация о  строительной компании :" << std::endl;
	        
			Company company(10, "Petrov", "BuiLD", 1995);
			company.ShowingProduct();

			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			Staff staff("заместитель главного по маркетингу", 25);
			staff.ShowingDelivery();
			

			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			SectionsOfDepartment section_1(0, " установочный ");
			SectionsOfDepartment section_2(4, " облицовочный ");

			company.AddSectionsOfDepartment(section_1);
			company.AddSectionsOfDepartment(section_2);

			section_1.ShowSectionsOfDepartment();
			section_1.EditSection();
			section_1.ShareSection();
			section_2.ShowSectionsOfDepartment();
			section_2.EditSection(); 
			section_2.ShareSection();
		    std:: cout<< "------------------------------------------------------------------------------------------------" << std::endl;
	 
			Product product_1(25, "Ламинат французский ");
			Product product_2(35, "Плитка керамическая");

			company.AddProduct(product_1);
			company.AddProduct(product_2);

			product_1.ShowProduct();
			product_2.ShowProduct();

			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			Material material_1(15, "p", "Кирпич", 125);
			Material material_2(15, "p", "Камень", 574);

			product_1.AddMaterial(material_1);
			product_2.AddMaterial(material_2);

			material_1.ShowInfo();
			material_2.ShowInfo();

			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			Storage storage_1(15, "p", 35, 98, "Кирпич");
			Storage storage_2(15, "p", 324, 48, "Камень");

			section_1.AddStorage(storage_1);
			section_2.AddStorage(storage_2);

			storage_1.ShowInfo2();
			storage_1.Occupancy();
			storage_2.ShowInfo2();
			storage_2.Occupancy();
			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			Checkout checkout_1(195, 13, 15.66, " самообслуживания");
			Checkout checkout_2(39, 3, 14.05, " стандартная");

			checkout_1.ShowCheckout();
			checkout_1.Casher();

			checkout_2.ShowCheckout();
			checkout_2.Casher();
			Owner owner(35," ");
			owner.Order();
			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			Budget budget_1(15, "p", "установочного", 12500);
			Budget budget_2(15, "p", "облицовочного", 32500);

			checkout_1.AddBudget(budget_1);
			checkout_2.AddBudget(budget_2);

			budget_1.ShowInfo();
			budget_2.ShowInfo();

			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			Equipment equipment_1("сварочный аппарат", 13000);
			Equipment equipment_2("станки литейные", 4500);

			checkout_1.AddEquipment(equipment_1);
			checkout_2.AddEquipment(equipment_2);

			equipment_1.ShowEquipmentForRental();
			equipment_1.IsEnough();
			equipment_2.ShowEquipmentForThings();
			equipment_2.IsEnough();

			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			TransportRental rental_1(14, 15, "p", " погрузчик", 12);

			equipment_1.AddTransportRental(rental_1);

			rental_1.ShowHelp_1();

			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			Things thing_2(14, 15, "p", " балоны", 12);

			equipment_2.AddThings(thing_2);

			thing_2.ShowHelp_2();
			thing_2.Valid();
			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			Delivery delivery_1(50, 5, "склад", "загородный дом");
			Delivery delivery_2(120, 7, "склад", "стадион");

			staff.AddDelivery(delivery_1);
			staff.AddDelivery(delivery_2);

			delivery_1.ShowDelivery();
			delivery_2.ShowDelivery();

			std::cout << "------------------------------------------------------------------------------------------------" << std::endl;

			Client client_1(15, "p", "Петров", 1200);
			Client client_2(15, "p", "Хачатрян", 34600);

			delivery_1.AddClient(client_1);
			delivery_2.AddClient(client_2);

			client_1.ShowInfo();
			client_2.ShowInfo();
	
	return 0;
}