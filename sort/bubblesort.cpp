#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Bubble_Sort(vector<int> &A,int n){
    int i,j;
    for(i =0 ;i<n;i++){
        for(j=0;j<n-1;j++){
            if(A[j] > A[j+1]){
                swap(A[j],A[j+1]);
            }
        }
    }
}
void print(vector<int> &A, int s)
{
    for(int i=0 ;i<s;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    vector<int> A = {22,4,51,699,91,0};
    int size = A.size();
    Bubble_Sort(A,size);
    print(A,size);
}