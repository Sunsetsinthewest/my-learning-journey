#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
#ifdef _WIN32
    system("chcp 65001 > nul");
#endif

    int age = 20;
    int* pAge = &age;

    cout << "age          = " << age << endl;
    cout << "&age         = " << &age << endl;
    cout << "pAge         = " << pAge << endl;
    cout << "*pAge        = " << *pAge << endl;
    cout << "&pAge        = " << &pAge << endl;
    cout << "sizeof(int)  = " << sizeof(int) << endl;
    cout << "sizeof(int*) = " << sizeof(int*) << endl;
    cout << "sizeof(pAge) = " << sizeof(pAge) << endl;

    *pAge = 99;
    cout << "执行 *pAge = 99 之后，age = " << age << endl;

    return 0;
}
