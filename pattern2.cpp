#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows you want: ";
    cin >> n;
    int row = 1;

    while(row <= n) {
        int column = 1;
        while(column <= row) {
            cout << row + column - 1 << " ";  // Calculate the number directly
            column += 1;
        }
        cout << endl;
        row += 1;
    }

    return 0;
}
