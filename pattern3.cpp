#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number of rows you want";
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int column=1;
        while(column<=row){
            cout<<row-column+1;
            column+=1;
        }
        cout<<endl;
        row+=1;
    }
}