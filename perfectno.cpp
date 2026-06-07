#include<iostream>
using namespace std;
int main(){
    int num ;
    cout << " the given number is : " ;
    cin >> num ;
    int temp = num , result = 0 ;
    for (int i = 1 ; i <= ( temp/2 ) ; i++ ){
    if( temp % i == 0){
    result = result + i ;
    }
}
if ( num == result ){
    cout << "the given number is a perfect number " ;
}
else {
    cout << "the given number is not a perfect number " ;
}
return 0;
}