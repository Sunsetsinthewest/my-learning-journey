#include <iostream>
#include <cstdio>
int main()
{
    const double SCALE=1.8;
    const double OFFSET=32.0;
    double celsius;
    std::cout<<"请输入摄氏度";
    std::cin>> celsius;
    double fahrenheit =celsius*SCALE+OFFSET;
    std::printf("%.lf摄氏度=%.lf华氏度",celsius,fahrenheit);
    return 0;
} 