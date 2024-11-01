#include "pch.h"
#include "C:/Users/ASUS/source/repos/Lab2/Budget.h"

TEST(BudgetTest, ShowInfoTest) {
    Budget budget(5, "Budget1", "Marketing", 1000);

    testing::internal::CaptureStdout();
    budget.ShowInfo();
    std::string output = testing::internal::GetCapturedStdout();

    std::string expectedOutput = " �� �������  Marketing ������ ���� ��������� 1000 ������\n";

    ASSERT_EQ(output, expectedOutput);
}
