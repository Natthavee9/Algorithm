#include<iostream>
using namespace std;
long double fac(int num){
    if(num == 1){
        return 1;
    }
    else{
        return num*fac(num-1);
    }
}
int main(){
    long double n;
    cin >> n;
    cout << fac(n);
}