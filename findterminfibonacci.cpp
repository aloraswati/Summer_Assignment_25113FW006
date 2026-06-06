#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    if(n==1){
        cout << "the " << n << "term of the series is : 0" ;
    }
    else if(n==2){
        cout << "the " << n << "term of the series is : 1" ;
    }
    else{
        int a=0,b=1,sum;
        for(int i=3;i<=n;i++){
            sum=a+b;
            a=b;
            b=sum;
        }
        cout << "the "<< n <<  "term of the series is : " << sum  << endl; 

    }
    return 0;
}