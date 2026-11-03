#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include "utils.h"
using namespace std;
void initConsole(){
    #ifdef _WIN32
    system("chcp 65001 >nul");
    #endif
}
int readInt(const string& prompt){
    int n=0;
    cout<<prompt;
    while (!(cin>>n)){
        if(cin.eof()) exit(0);
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"输入错误，请重新输入";
    }
    return n;
}