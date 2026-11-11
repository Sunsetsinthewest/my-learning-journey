#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string readALLtest(){
    string alltest;
    string line;
    while(getline(cin,line)){;
        alltest+=line;
    }
    return alltest;
}
void countChars(const string& text, int counts[]){
    for (char ch:text){
        ++counts[static_cast<unsigned char>(ch)];
    }
}
void printStats(const int counts[]){
    int total=0;
    for(int i=0;i<256;i++){
        if (counts[i]!=0){
            total+=counts[i];
            cout<<"字符 '"<<static_cast<unsigned char>(i)<<"' : "<<counts[i]<<endl;
        }
    }
    cout<<"总计: "<<total<<" 个字符"<<endl;
}
int main(){
    #ifdef _WIN32
    system("chcp 65001 >nul");
    #endif
    int counts[256]={};
    string test=readALLtest();
    countChars(test,counts);
    printStats(counts);
    return 0;   
}