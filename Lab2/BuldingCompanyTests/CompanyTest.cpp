#include "pch.h"
#include "C:/Users/ASUS/source/repos/Lab2/Company.h"
#include "C:/Users/ASUS/source/repos/Lab2/Product.h"

TEST(CompanyTest, AddTest)
{
	Company compamy(67, "BOB", "BOBBS", 19023);
	std::string expected = "������������ �������� BOBBS ���� ������� � 19023 ����\n��� �������� ����� Cola �� ����� 28 ������.\n";

	Product product(28, "Cola");
	compamy.AddProduct(product);

	testing::internal::CaptureStdout();
	compamy.ShowingProduct();
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, expected);
	EXPECT_EQ(compamy.getProduct().size(), 1);
}
