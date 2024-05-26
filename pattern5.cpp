#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number of rows you want";
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int column=1;
        while(column<=n){
            cout<<ch;
            column+=1;
            ch+=1;
        }
        cout<<endl;
        row+=1;
    }
}