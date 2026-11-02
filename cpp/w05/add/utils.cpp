#include "utils.h"
int add (int a,int b){
    return a+b;
}
bool isPrime (int a){
    if (a<2){
        return false;
    }
    for (int i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}