#include<iostream>
using namespace std;
int main(){
    int num ;
    cout <<"the given number is :" ;
    cin >> num;
    bool ip = true;
    for(int i=2;i<num;i++){
    if(num%i==0){
    ip = false;
    break;
    }
    }
    if(ip){
        cout <<"prime" << endl;
    }
    else{
        cout << "not prime" << endl;
    }
    
    return 0;}
