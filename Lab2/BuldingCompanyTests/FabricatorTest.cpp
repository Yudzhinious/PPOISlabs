#include "pch.h"
#include "C:/Users/ASUS/source/repos/Lab2/Fabricator.h"

TEST(FabricatorTest, ShowHelp1Test) {
    Fabricator fabricator(10, 6, "CompanyX");

    testing::internal::CaptureStdout();
    fabricator.ShowHelp_1();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("������������� CompanyX � ������ �� ����� � 10 ��� ������������� �������� ������ �� ���������� 6 �������"), std::string::npos);
}

TEST(FabricatorTest, ShowHelp2Test) {
    Fabricator fabricator(5, 3, "CompanyY");

    testing::internal::CaptureStdout();
    fabricator.ShowHelp_2();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("������������� CompanyY � ������ �� ����� � 5 ��� ������������� �������� ������ �� ���������� 3 �������"), std::string::npos);
}