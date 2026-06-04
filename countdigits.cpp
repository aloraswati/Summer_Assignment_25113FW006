#include<iostream>
using namespace std;
int main(){
int n ,i=0;
cout << "the number is : " ;
cin >> n;
if(n==0){
cout << "the number of digits in a number are : 1 ";
}
else if(n<0){
cout << n;
}
while(n>0){
n = n / 10 ;
i++;
}
cout << "the number of digits in a number are : ";
cout << i;
return 0;
}