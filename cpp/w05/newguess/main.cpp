#include "utils.h"
#include "business.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
    initConsole();
    srand(static_cast<unsigned>(time(nullptr)));
    while (true){
        int lo=0,hi=0;
        if(!readRange(lo,hi)) break;
        playRound(lo,hi);
    }
    cout<<"再见";
    return 0;
}