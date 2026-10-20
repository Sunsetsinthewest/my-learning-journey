#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    #ifdef _WIN32
    system ("chcp 65001 >nul");
    #endif
    while(true){
        int a;
        cout<<"请输入一个整数(输入0停止)：\n";
        while (!(cin>>a)){
            if (cin.eof()) return 1;
            cin.clear();
            cin.ignore(1000, '\n');
            cout<<"输入无效请重新输入一个整数\n";
        }
        if (a==0){
            cout<<"程序结束\n";
            break;
        }
        if (a<2){
            cout<<a<<"不是素数\n";
            continue;
        }
        bool isPrime=true;
        for (int i=2;i*i<=a;i++){
            if(a%i==0){
                isPrime=0;
                break;
            }
        }
        if (isPrime){
            cout<<a<<"是素数\n";
        }
        else{
            cout<<a<<"不是素数\n";
        }
    }    
    return 0;
}