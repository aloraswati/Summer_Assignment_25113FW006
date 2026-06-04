#include<iostream>
using namespace std;
int main(){
    int n,l=1;
    cout << "the given number is : ";
    cin >> n;
    while(n>0){
    l=l*(n%10);
    n=n/10;
    }
    cout << "the product of the digits are " << l ;
    return 0;
}