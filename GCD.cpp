#include<iostream>
using namespace std;
int main(){
    int a,b ;
    cout << "the first number is : " ;
    cin >> a ;
    cout << "the second number is : " ;
    cin >> b;
    int i = 1, ans = 1;
    while (i <= min(a,b)){
    if( a%i==0 && b%i==0){
        ans = i ;
    }
    i++;
    }
    cout << "GCD IS :" << ans << endl;
    return 0;
}