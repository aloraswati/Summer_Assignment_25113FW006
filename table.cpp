#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "The number is :";
    cin >> n;
    cout << "Table of n is : " ;
    int temp = n ;
    for(int i=1;i<=10;i++){
    n = temp * i ;
    cout << n << "  " ;
    }  
    return 0;
}