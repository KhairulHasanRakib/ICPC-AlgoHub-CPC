#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int pa, pb, pc;
        cin >> pa >> pb >> pc;

        if (0 < pa < 6 && 0 < pb < 6 && 0 < pc < 6)
        {
            cout << "Case " << i + 1 << ": perfectus" << endl;
        }
        else
        {
            cout << "Case " << i + 1 << ": invalidum" << endl;
        }
    }
}