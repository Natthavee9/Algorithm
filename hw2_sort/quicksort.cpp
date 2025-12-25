#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int>&arr,int l ,int r){
    int pivot,i,j;
    pivot = arr[l];
    i = l;
    j = r+1;
    while(true){
        do{
            ++i;
        }while(arr[i]<=pivot);
        do{
            --j;
        }while(arr[j]>pivot);
        if(i>=j){
            break;
        }
        swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;
}
void quicksort(vector<int>&s,int l,int r){
    if(l<r){
        int p;
        p = partition(s, l, r);
        quicksort(s, l, p - 1);
        quicksort(s, p + 1, r);
    }
}

void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    vector<int> a = {16,25,2,54,36,9,12,66};
    quicksort(a,0,a.size()-1);
    for(int i = 0 ;i<a.size();i++){
        cout << a[i] << " ";
    }
    cout<<"\n";  
}
