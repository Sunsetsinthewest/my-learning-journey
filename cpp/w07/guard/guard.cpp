#include <iostream>
#include <cstdlib>
using namespace std;

bool tryRead(const int* p, int& out) {
    if (p == nullptr) {
        return false;
    }
    out = *p;
    return true;
}

int* findFirstNegative(int* begin, int* end) {
    for (int* p = begin; p < end; ++p) {
        if (*p < 0) {
            return p;
        }
    }
    return nullptr;
}

int main() {
#ifdef _WIN32
    system("chcp 65001 > nul");
#endif
    int value = 42;
    int result = 0;

    if (tryRead(&value, result)) {
        cout << "读取成功：" << result << endl;
    }

    if (!tryRead(nullptr, result)) {
        cout << "指针为空，已安全返回，result 仍是 " << result << endl;
    }

    int numbers[5] = {3, 8, -1, 6, -4};
    int* pFound = findFirstNegative(numbers, numbers + 5);
    if (pFound != nullptr) {
        cout << "第一个负数是 " << *pFound
             << "，下标是 " << (pFound - numbers) << endl;
    } else {
        cout << "没有负数" << endl;
    }

    int positives[3] = {1, 2, 3};
    int* pNone = findFirstNegative(positives, positives + 3);
    if (pNone == nullptr) {
        cout << "全部为正，找不到负数" << endl;
    }

    return 0;
}
