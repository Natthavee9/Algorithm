#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>a , int value){
    for(int i = 0;i<a.size();i++){
        if(a[i] == value){
            return true;
        }
    }
    return false;
}
void output(vector<int>v){
    for(int i = 0;i<v.size();i++){
        cout << v[i]<< " ";
    }
}
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for(int i =0 ;i<N;i++){
        cin >> A[i];
    }
    
    for(int i =0 ;i<N;i++){
        cin >> B[i];
    }

    //intersec
    vector<int> intersec;
    for(int i =0 ;i<N;i++){
        if(check(A,B[i]) && !check(intersec,B[i])){
            intersec.push_back(B[i]);
        }
    }
    cout<<"intersec => ";
    output(intersec);
    cout<<"\n";
    
    //union
    vector<int> u_nion;
    for(int i = 0;i<N;i++){
        if(!check(u_nion,A[i])){
            u_nion.push_back(A[i]);
        }
    }
    for(int i = 0;i<N;i++){
        if(!check(u_nion,B[i])){
            u_nion.push_back(B[i]);
        }
    }
    cout<< "union => ";
    output(u_nion);
}