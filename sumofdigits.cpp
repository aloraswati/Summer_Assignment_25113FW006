#include<iostream>
using namespace std;
int main(){
    int n,l=0;
    cout <<"the number is : ";
    cin >> n;
    while(n>0){
        l=l+(n%10);
        n=n/10;
        
    }
    cout << "the sum of digits is : " << l << endl;
    
    return 0;
    
}