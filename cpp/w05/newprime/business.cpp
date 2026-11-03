#include "business.h"
#include "utils.h"
#include <iostream>
using namespace std;
bool isPrime(int n){
    if (n < 2) return false;          // 0、1、负数都不是素数
    for (int i=2;i*i<=n;i++){
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
void runPrime(){
    while (true) {
        int n = readInt("请输入一个整数（输入 0 退出）：");
        if (n == 0) break;
        cout << n << (isPrime(n) ? " 是素数" : " 不是素数") << endl;
    }
}