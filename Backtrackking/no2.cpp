#include<iostream>
using namespace std;
int target;
void print_sol(int x[] ,int n, int A[]){
    int sum =0;
    for(int i=1 ;i<=n;i++){
        //cout << x[i] << " ";
        if(x[i] == 1){
            sum += A[i - 1];
        }
        
    }
    
    if(sum == target){
        for(int i=1;i<=n;i++){
            if (x[i] == 1)
            {
                cout << A[i - 1] << " ";
            }
            
        }
        cout << "\n";

    }
}

void subset1(int x[], int l, int r, int A[])
{
    
    if(l == r){
        print_sol(x,r,A);
    }
    else{
        x[l+1] = 1;
        subset1(x, l + 1, r, A);
        x[l+1] = 0;
        subset1(x, l + 1, r, A);
    }
}
int main(){
    int n = 5;
    int x[n+1];
    int A[n] ;
    
    cin >> target;
    for(int i=0 ;i<n;i++){
        cin >> A[i];
    }
    
    subset1(x, 0, n,A);
}