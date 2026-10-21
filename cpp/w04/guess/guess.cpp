#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    #ifdef _WIN32
    system ("chcp 65001 > nul");
    #endif
    srand(static_cast<unsigned>(time (nullptr)));
    while(true){
        int high,low,guess;
        cout<<"请输入要猜的最小值和最大值(输入两个0结束)\n";
        while (!(cin>>low>>high)){
            if (cin.eof()) return 1;
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"输入错误请重新输入:\n";
        }
        if (high==0&&low==0){
            return 0;
        }
        if (high<=low){
            cout<<"不符合逻辑，请重新输入\n";
            continue;
        } 
        int answer=low+rand()%(high-low+1);
        int tries=0;
        while (true){
            cout<<"请输入你猜的数字\n";
            while (!(cin>>guess)){
            if (cin.eof()) return 1;
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"输入错误请重新输入:\n";
            continue;
            }
            if (guess>high||guess<low){
            cout<<"你输入的数字与你设定的范围不符\n";
            cout<<"MAX="<<high<<"MIN="<<low<<endl;
            continue;
            }
            tries++;
            if(guess>answer){
                cout<<"你输入的数大了,继续猜吧\n";
            }
            else if(guess<answer){
                cout<<"你输入的数小了,继续猜吧\n";
            }
            else {
                cout<<"恭喜你猜对了，一共猜了"<<tries<<"次\n";
                break;
            }
        }
        }
        return 0;
    }
    