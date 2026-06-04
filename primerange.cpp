#include<iostream>
using namespace std;
int main(){
    int start,end ;
    cout << "the starting number is :" ;
    cin >> start;
    cout << "the ending number is :" ;
    cin >> end;
    cout << "the range of prime numbers are : " ;
    

    while ( start <= end ){
        bool isprime = true ;
        for(int i=2;i<start;i++){
            if(start%i==0){
                isprime = false ;
                break;
            }
        }
       if (isprime){ 
        cout << start << "  " ;
       }
        start ++ ;
    }
    return 0;
}