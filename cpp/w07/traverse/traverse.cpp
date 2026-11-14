#include <iostream>
#include <cstdlib>
using namespace std;

int sumByPointer(const int* begin, const int* end) {
    int sum = 0;
    for (const int* p = begin; p < end; ++p) {
        sum += *p;
    }
    return sum;
}

const int* maxByPointer(const int* begin, const int* end) {
    if (end <= begin) {
        return nullptr;
    }
    const int* pMax = begin;
    for (const int* p = begin + 1; p < end; ++p) {
        if (*p > *pMax) {
            pMax = p;
        }
    }
    return pMax;
}

void reverseByPointer(int* begin, int* end) {
    --end;
    while (begin < end) {
        int temp = *begin;
        *begin = *end;
        *end = temp;
        ++begin;
        --end;
    }
}

void printByPointer(const int* begin, const int* end) {
    for (const int* p = begin; p < end; ++p) {
        if (p != begin) {
            cout << " ";
        }
        cout << *p;
    }
    cout << endl;
}

int main() {
#ifdef _WIN32
    system("chcp 65001 > nul");
#endif
    int n = 0;
    cout << "请输入元素个数（1~100）：" << endl;
    if (!(cin >> n) || n < 1 || n > 100) {
        cout << "输入无效" << endl;
        return 1;
    }
    int values[100] = {};
    cout << "请输入 " << n << " 个整数：" << endl;
    for (int* p = values; p < values + n; ++p) {
        cin >> *p;
    }
    cout << "原始：";
    printByPointer(values, values + n);
    cout << "总和：" << sumByPointer(values, values + n) << endl;
    const int* pMax = maxByPointer(values, values + n);
    if (pMax != nullptr) {
        cout << "最大值：" << *pMax << "（下标 " << (pMax - values) << "）" << endl;
    }
    reverseByPointer(values, values + n);
    cout << "倒序：";
    printByPointer(values, values + n);
    return 0;
}
