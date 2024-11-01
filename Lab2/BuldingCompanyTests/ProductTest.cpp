#include "pch.h"
#include "C:/Users/ASUS/source/repos/Lab2/Product.h"
#include "C:/Users/ASUS/source/repos/Lab2/Material.h"

TEST(ProductTest, AddMaterialTest) {
    Product product(200, "Table");
    Material material1(1, "Wood", "Building Material", 100);
    Material material2(2, "Metal", "Building Material", 50);

    product.AddMaterial(material1);
    product.AddMaterial(material2);

    ASSERT_EQ(product.getMaterials().size(), 2);
}

TEST(ProductTest, ShowProductTest) {
    Product product(200, "Table");
    Material material1(1, "Wood", "Building Material", 100);
    Material material2(2, "Metal", "Building Material", 50);

    product.AddMaterial(material1);
    product.AddMaterial(material2);

    testing::internal::CaptureStdout();
    product.ShowProduct();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("��� �������� ����� Table �� ����� 200 ������."), std::string::npos);
    EXPECT_NE(output.find("������������ ��������� : Building Material, ���������� ������ ��������� : 100"), std::string::npos);
    EXPECT_NE(output.find("������������ ��������� : Building Material, ���������� ������ ��������� : 50"), std::string::npos);
}
