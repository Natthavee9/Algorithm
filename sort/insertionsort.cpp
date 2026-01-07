#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int> &A ,int n){
    int i,j,v;
    for(i=1;i<=n-1;i++){
        v = A[i];
        j = i-1;
        while (j>=0 && A[j]>v)
        {
            A[j+1] = A[j];
            j = j-1;
        }
        A[j+1] = v;
        
    }
}
void print(vector<int> &A,int s){
    for(int i =0 ;i<s;i++){
        cout<<A[i]<<" ";
    }

}
int main(){
    vector<int> v = {5, 2, 4, 6, 1, 3};
    int size = v.size();
    insertion_sort(v,size);
    print(v, size);
}