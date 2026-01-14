#include<iostream>
using namespace std;
void MergeSort(int arr[],int l, int r){
    if(l<r){
        int m = l+(r-l)/2;
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        
    }
}
void Merge(int arr[],int l,int m,int r){
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    
    for(i=0 ; i<n1;i++){
        L[i] = arr[l+i];
    }
    for(j=0;j<n2;j++){
        R[j] = arr[m+1+j];
    }
}
int main(){

}