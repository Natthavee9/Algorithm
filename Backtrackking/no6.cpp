#include<iostream>
using namespace std;
char book[100];
void swap(char *a,char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char x[],int start ,int end){
    if(start == end){
        for(int i=1;i<=end;i++){
            cout << x[i];
        }
        cout << "\n";

    }

    for(int i=1 ;i<=end;i++){
        swap(&x[start] , &x[i]);
        permute(x,start+1,end);
        swap(&x[start], &x[i]);
    }

}
int main(){

}