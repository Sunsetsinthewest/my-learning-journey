#include<iostream>
using namespace std;
int main()
{
    double weightKg;
    double heightM;
    cout << "请输入体重(kg): ";
    cin >> weightKg;
    cout << "请输入身高(m): ";
    cin >> heightM;
    double bmi = weightKg / (heightM * heightM);
    printf("你的 BMI = %.2f\n", bmi);
    return 0;
}