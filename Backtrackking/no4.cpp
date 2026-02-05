#include<iostream>
#include<cmath>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
bool  check(int x[],int end){
    for(int i=1;i<=end;i++){
        for(int j=i+1;j<=end;j++){
            if(abs(i-j) == abs(x[i]-x[j])){
                return false;

            }

        }
    }
    return true;

}
void permute(int x[],int start ,int end){
    if(start == end){
        if(check(x,end)){
            for(int i =1;i<=end;i++){
                for(int j=1;j<=end;j++){
                    if(x[i] == j){
                        cout<<"Q ";
                    }else{
                        cout<<". ";
                    }
                }
                cout << "\n";
            }
            cout << "-----------------" << "\n";
        }
        
    }

    for(int i=start;i<=end;i++){
        swap(&x[start],&x[i]);
        permute(x,start+1,end);
        swap(&x[start], &x[i]);
    }
}
int main(){
    int n = 4;
    int x[] = {-1,1,2,3,4};
    permute(x,1,n);

}