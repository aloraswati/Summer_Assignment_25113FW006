#include<iostream>
using namespace std ;
int main (){
    int num , sum = 0 ;
    cout <<  "the given number is : " ;
    cin >> num ;
    int temp = num , ld = 0 ;
    while( temp > 0 ){
        ld = ( temp % 10 ) ;
        int fact = 1 ;
        for ( int i = 1 ; i <= ld ; i++){
            fact = fact * i ;
        }
        sum = sum + fact ;
        temp = temp / 10 ;
    }
    if (sum == num ){
        cout << "the given number is a strong number " << endl;
    }
    else{
        cout << "the given number is not a strong number " << endl ;
    }
    return 0 ;
}