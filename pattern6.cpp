#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number of rows you want";
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        while(column<=n){
            char ch='A'+row+column-2;
            cout<<ch;
            column+=1;
        }
        cout<<endl;
        row+=1;
    }
}