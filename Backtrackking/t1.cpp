#include<iostream>
#include<string>
using namespace std;
void swap(string *a, string *b)
{
    string temp = *a;
    *a = *b;
    *b = temp;
}

bool check(string x[], int n){
    for(int i =1 ;i<n;i++){
        if (x[i][0] == 'W' && x[i + 1][0] == 'W')
        {
            return false;
        }
    }
    return true;
}

/*void permute(int x[],int  start,int  end){
    if(start == end){
        for(int i = 1;i<=end;i++){
            cout <<  x[i] << " ";
        }
        cout<<"\n";
        return;
    }

    for(int i = start;i<=end;i++){
        swap(&x[start] , &x[i]);
        permute(x,start+1,end);
        swap(&x[start], &x[i]);
    }
}*/

void permuteC(string x[],int start,int end){
    if(start == end){
        if(check(x,end)){
            for(int i=0 ;i<=end;i++){
                cout << x[i]<<" ";
            }
            cout << "\n";
        }
        return;
    }
    for(int i=start ; i<=end ;i++){
        swap(&x[start],&x[i]);
        permuteC(x,start+1,end);
        swap(&x[start], &x[i]);
    }
}
int main(){
    int n =3;
    //int x[] = {-1,1,2,3};
    string y[] = {" ","W1", "W2", "M1"};
    permuteC(y,1,n);
}