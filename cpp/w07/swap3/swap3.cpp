#include <iostream>
#include <cstdlib>
using namespace std;

void swapByValue(int left, int right) {
    int temp = left;
    left = right;
    right = temp;
}

void swapByReference(int& left, int& right) {
    int temp = left;
    left = right;
    right = temp;
}

void swapByPointer(int* pLeft, int* pRight) {
    if (pLeft == nullptr || pRight == nullptr) {
        return;
    }
    int temp = *pLeft;
    *pLeft = *pRight;
    *pRight = temp;
}

int main() {
#ifdef _WIN32
    system("chcp 65001 > nul");
#endif
    int valueA = 1, valueB = 2;
    swapByValue(valueA, valueB);
    cout << "① 值传递后：x = " << valueA << "，y = " << valueB << endl;

    int refA = 1, refB = 2;
    swapByReference(refA, refB);
    cout << "② 引用传递后：x = " << refA << "，y = " << refB << endl;

    int ptrA = 1, ptrB = 2;
    swapByPointer(&ptrA, &ptrB);
    cout << "③ 指针传递后：x = " << ptrA << "，y = " << ptrB << endl;

    int nullA = 1, nullB = 2;
    swapByPointer(&nullA, nullptr);
    cout << "④ 第二个参数传 nullptr 后：x = " << nullA << "，y = " << nullB << endl;

    return 0;
}
