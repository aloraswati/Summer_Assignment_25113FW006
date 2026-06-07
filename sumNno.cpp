#include<iostream>
using namespace std;
int main(){
    int n , sum=0;
    cout << "n is : " ;
    cin >> n ;
    cout << endl ;
    for(int i=0;i<=n;i++){
    sum = sum + i ;
    }
    cout << "sum of n natural number is : ";
    cout << sum ;
    return 0;
}