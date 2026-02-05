#include<iostream>
using namespace std;
int  maxWei = 0 , maxVal = 0;
int value[4] ,weight[4] ;
void best(int x[], int n)
{
    int sumValue = 0, sumWeight = 0;
    for (int i = 1; i <= n; i++)
    {
        if(x[i] == 1){
            sumValue+=value[i-1];
            sumWeight+=weight[i-1];
        }
    }

    if(sumWeight <= maxWei){
        if(sumValue > maxVal){
            maxVal = sumValue;
            
        }
    }
}

void subset1(int x[], int l, int r)
{
    if(l==r){
        best(x,r);

    }
    else{
        x[l+1] = 1;
        subset1(x, l + 1, r);
        x[l + 1] = 0;
        subset1(x, l + 1, r);
    }
}
int main(){
    int n = 4;
    int x[n+1];
    cin >> maxWei;
    for(int i=0 ;i<n;i++){
        cin >> value[i];
    }
    for(int i=0;i<n;i++){
        cin >> weight[i];
    }

    subset1(x,0,n);
    cout << "Max Value : "<<maxVal <<"\n";

}