#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false ;
    }
    for (int i=2;i<=(n/2) ;i++){
        if (n%i==0){
            return false;
        }
    }
    return true ;
}
int main (){
    int num;
    cout << "the number is : " ;
    cin >> num ;
    int largestprime = -1 ;
    for(int i=2;i<=(num/2);i++){
        if(num%i==0){
            if(isprime(i)){
                largestprime =i;
            }
        }
    }   
    if(largestprime!= -1){
        cout << "largest prime factor is : " << largestprime << endl;
    } 
    else{
        cout << "no prime factors found " << endl;
    }
    return 0;
}
