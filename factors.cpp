#include<iostream>
using namespace std ;
int main (){
 int num ;
 cout << "the given number is : " ;
 cin >> num ;
 cout << "Factors of the given number are : " ;
 for ( int i = 1 ; i <= ( num / 2 ) ; i++ ){
    if(num % i == 0){
        cout << i << "  " ;
    }
 }
return 0;
}