/*

1
0 0
1 1 1
0 0 0 0
1 1 1 1 1

*/

# include <iostream>
using namespace std;

int main() 
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0) cout << "0 ";
            else cout << "1 ";
        }
        cout << endl;
    }
}