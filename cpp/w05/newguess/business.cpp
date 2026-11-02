#include <iostream>
#include <cstdlib>
#include "utils.h"
using namespace std;
bool readRange(int& lo,int& hi){
    while(true){
        cout<<"请输入要猜的最大值和最小值(输入0 0退出)";
        hi=readInt("");
        lo=readInt("");
        if (lo==0&&hi==0) return false;
        if (lo>hi){
            cout<<"范围不合法";
            continue;
        }
        return true;
    }
} 
void playRound(int lo,int hi){
    const int answer=lo+rand()%(hi-lo+1);
    int tries=0;
    while (true) {
        int guess = readInt("请输入你猜的数字：");
        if (guess < lo || guess > hi) {
            cout << "超出范围，请输入 " << lo << "~" << hi << " 之间的数。" << endl;
            continue;
        }
        ++tries;
        if (guess > answer) {
            cout << "大了。" << endl;
        } else if (guess < answer) {
            cout << "小了。" << endl;
        } else {
            cout << "恭喜猜对！一共猜了 " << tries << " 次。" << endl;
            return;
        }
    }
}
