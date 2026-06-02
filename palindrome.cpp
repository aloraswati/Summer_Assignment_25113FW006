#include<iostream>
using namespace std;
int main(){
    int num,l=0; 
    cout << "the given number is : " ;
    cin >> num ;
    int temp = num ;
    while(num>0){
    l=l*10+(num%10);
    num = num/10;
    }
    cout << "the reverse of a number is : " << l << endl;
    if(l==temp){
        cout << "the given number is a palindrome number ." << endl;
    }
    else{
        cout << "the given number is not a palindrome number " << endl;
    }
    return 0;
}