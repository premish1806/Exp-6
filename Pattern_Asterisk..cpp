// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++) // rows
    {
        for(int j = 1; j <= i; j++) // columns
        {
            cout << "*";
        }
        cout << "\n"; // cout << endl;
    }
    return 0;
}
