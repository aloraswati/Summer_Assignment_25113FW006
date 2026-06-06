#include<iostream>
#include<cmath>
using namespace std;
int main(){
int start , end ;
cout << "starting number is : " ;
cin >> start ;
cout << "the ending number is : " ;
cin >> end ;
cout << "the range is from " << start << " to " << end << endl;
for(int i=start ; i<=end ;i++){
     int digits=0,num = i ,result = 0, temp = i;
    while(num>0){
        num=num/10;
        digits++;
    }
    while(temp>0){
        int ld =0;
        ld = temp%10;
        result = result + pow(ld,digits) ;
        temp = temp/10;
    }
    if(i==result){
        cout << result << "  " ;
    }
}
return 0;
}