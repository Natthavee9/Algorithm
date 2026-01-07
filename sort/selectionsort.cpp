#include<iostream>
#include<vector>
using namespace std;
void Selection_Sort(vector<int> &a,int n){
    int i, j ,tmp,min;
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
}

void print(vector<int> &a,int s ){
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    vector<int> v = {5,2,4,6,1,3};
    int size = v.size();
    Selection_Sort(v,size);
    print(v,size);

}