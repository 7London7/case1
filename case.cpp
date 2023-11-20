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
long long itc_math(string str){
    int a = 0, st = 1; int i = str.size()-1;
while(i >= 0){
    a = a +  (str[i] - '0') * st; //1 2 4 8
    st = st * 2;
    i--;
}
return a;
}
string itc_probdop(int num1, int bit,int code){
    int kol = 0, i = 0, ost, t;
    char number, a;
int num;
string str = "";
string str2 = "";
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

        for(i = 0; i < bit; i++){
         str2 = str2 + str[i];
        }
    return str2;
}
if(code == 2){
    if(num1 > 0){
for(i = 0; i < bit; i++){
         str2 = str2 + str[i];
        }
    return str2;
}else{
 while(str[i] != '\0'){
    if(str[i] == '1'){
        str[i] = '0';
    }else{
    str[i] = '1';
    }
    i++;
 }
 if(num1 < 0){
    str[0] = '1';
}else{
str[0] = '0';
}
 for(i = 0; i < bit; i++){
         str2 = str2 + str[i];
        }
    return str2;
}
}
if(code == 3){
    if(num1 > 0){
for(i = 0; i < bit; i++){
         str2 = str2 + str[i];
        }
    return str2;
}else{
        while(str[i] != '\0'){
    if(str[i] == '1'){
        str[i] = '0';
    }else{
    str[i] = '1';
    }
    i++;
 }

     if(num1 < 0){
    str[0] = '1';
}else{
str[0] = '0';
}
    t = itc_math(str);

  t = t + 1;
  str = "";
  while(t > 0){
   a = t % 2 + '0';
   str = a + str;
    t = t / 2;
  }
if(num1 < 0){
    str = '1' + str;
}else{
str = '0' + str;
}
for(i = 0; i < bit; i++){
         str2 = str2 + str[i];
        }
    return str2;
}
}
}
