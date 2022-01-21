#include<iostream>
using namespace std;
int main(){
    // printing a pattern
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<=4-i;j++){
            cout<<" ";
        }
        for(j=4-i;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}