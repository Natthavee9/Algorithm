#include<iostream>
using namespace std;
int Max_Subarray_Sum(int arr[],int n){
    if(n==1) return arr[0];
    int m = n/2;
    int Lmss = Max_Subarray_Sum(arr,m);
    int Rmss = Max_Subarray_Sum(arr+m,n-m);
    int lsum = -1000,rsum = -1000,sum =0;
    for(int i=m;i<n;i++){
        sum += arr[i];
        rsum = max(rsum,sum);
    }
    sum = 0;
    for(int i=m-1;i>=0;i--){
        sum += arr[i];
        lsum = max(lsum,sum);
    }

    cout << "\nn = "<< n << "\n"<<"m (n/2) = "<< m ;
    cout << "\nLeft Sum = "<< lsum << "\nRight Sum = " << rsum;
    cout << "\nMax = " << max(max(lsum, rsum), lsum + rsum) << "\n" <<"\n";
    return max(max(lsum, rsum), lsum + rsum);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << Max_Subarray_Sum(arr,n);
}