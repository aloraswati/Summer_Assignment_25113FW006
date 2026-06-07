#include<iostream>
using namespace std;
int main(){
    int a,b ;
    cout << "the first number is : " ;
    cin >> a ; 
    cout << "the second number is : " ;
    cin >> b;
    int lcm = 1 , i=2 ;
    while(a>1 || b>1){
        if(a%i==0 && b%i==0) {       
        lcm = lcm * i ;
        a=a/i;
        b=b/i;
        }
        if(a%i==0 && b%i!=0 ){
        lcm = lcm * i ;
        a=a/i;
        }
        if(b%i==0 && a%i!=0){
            lcm=lcm*i;
            b=b/i;
        }
        if(a%i!=0 && b%i!=0){
        i++;
    }}
    cout << "LCM :" << lcm << endl;
    return 0;

}