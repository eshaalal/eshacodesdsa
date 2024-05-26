#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of row you want";
    int n;
    cin>>n;
    int row=1;
    int count=1;
    while(row<=n){
        int column=1;
        while(column<=row){
            cout<<count;
            column+=1;
            count+=1;
        }
        cout<<endl;
        row+=1;

    }
}