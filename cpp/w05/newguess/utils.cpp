#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
using namespace std;
int readInt(const string& prompt){
    int n;
    cout<<prompt;
    while(!(cin>>n)){
        if (cin.eof()) exit(0);
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"您的输入有误，请重新输入";
    }
    return n;
}
void initConsole(){
    #ifdef _WIN32
    system ("chcp 65001 >nul");
    #endif 
}