#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int num,temp,digits=0,ld,copy;
 double result=0 ;
 cout << "the given number is : " ;
 cin >> num ;
 temp = num ;
 copy = num ;
 while(copy > 0){
    copy = copy / 10 ;
 digits++;
 }
 cout << "the number of digits in a given number are " << digits << endl;
 while(num>0){
 ld = num%10;
 result = result + pow(ld,digits) ;
 num = num/10 ;
 }
 if(temp==result){
    cout << "is an armstrong number" << endl;
 }
 else{
    cout << "is not an armstrong number" << endl;
 }
 return 0;
}