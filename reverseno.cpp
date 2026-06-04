#include<iostream>
using namespace std;
int main(){
    int n,r=0;
    cout << "the number is : ";
    cin >> n ;
    cout << "the reverse of a number is : ";
    while(n>0){
    r=r*10+(n%10);
    n=n/10;
    }
        cout << r;
    return 0;
}