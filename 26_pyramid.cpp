/*

1 0 1 0 1 
0 1 0 1 
1 0 1 
0 1 
1

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j % 2 << " ";
        }
        cout << endl;
    }
    return 0;
}