#include <iostream>
#include <string>
#include "case.h"
using namespace std;

long long itc_len(string str){
    int i = 0;
    int k = 0;
    while(str[i] != '\0'){
        k = k + 1;
    i++;
    }
    return k;
}

string itc_probdop(int num1, int bit,int code){
    int  d = 1, per, kol = 0, i = 0, ost;
    char number;
int num;
string str = "";
if(num1 < 0){
num = -1 * num1;
}else{
num = num1;
}
while(num > 0){
   number = num % 2 + '0';
   str = number + str;
    num = num / 2;
}
kol = itc_len(str);
ost = bit - kol;
while(ost > 0){
    str = '0' + str;
    --ost;
}
if(num1 < 0){
    str[0] = '1';
}else{
str[0] = '0';
}
if(code == 1){
    return str;
}
if(code == 2){
 while(str[i] != '\0'){
    if(str[i] == '1'){
        str[i] = '0';
    }else{
    str[i] = '1';
    }
    i++;
 }
 return str;
}
}

