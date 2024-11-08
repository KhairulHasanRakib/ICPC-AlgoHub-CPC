#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i <= t; i++)
    {
        int pa, pb, pc;
        cin >> pa >> pb >> pc;

        if (i <= pa , pb, pc <= 5)
        {
            cout << "Case " << i + 1 << ": perfectus" << endl;
        }
        else
        {
            cout << "Case " << i + 1 << ": invalidum" << endl;
        }
    }
}