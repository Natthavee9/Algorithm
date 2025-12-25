#include<iostream>
#include<vector>
#include<string>
using namespace std;
void swap(int &a,int &b){
    int tem = a;
    a = b;
    b = tem;
}
int partition(vector<int>&v ,int l,int r){
    int pivot,i,j;
    pivot = v[l];
    i = l;
    j = r+1;
    while (true){
        do{
            ++i;
        }while(v[i]<=pivot);
        do{
            --j;
        }while(v[j]>pivot);
        if(i>=j){
            break;
        }
        swap(v[i], v[j]);
    }
    swap(v[l],v[j]);
    return j;
}
void quicksort(vector<int>&v,int l,int r){
    if(r-l >0){
        int p = partition(v,l,r);
        quicksort(v,l,p-1);
        quicksort(v,p+1,r);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0 ; i<n ;i++){
        cin >> vec[i];
    }
    quicksort(vec,0,vec.size()-1);

    //number to string
    string string_s = "";
    for(int i=0 ;i<n;i++){
        string_s += to_string(vec[i]);
    }
    cout<<string_s;

    int count = 0;
    for(int i=0 ;i<string_s.length();i++){
        if(string_s[i] == string_s[i-1]){
            count++;
        }
        else{

        }
    }

}