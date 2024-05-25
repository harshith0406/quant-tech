#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    vector<int> b;
    vector<int> c;
    int m, n;

    cout << "Enter the number of elements in vector a: ";
    cin >> m;

    cout << "Enter the elements of vector a:\n";
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    cout << "Enter the number of elements in vector b: ";
    cin >> n;

    cout << "Enter the elements of vector b:\n";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }

    int i = 0, j = 0;
    // Merge the two vectors
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            c.push_back(a[i]);
            i++;
        }
        else
        {
            c.push_back(b[j]);
            j++;
        }
    }

    // Append remaining elements of a (if any)
    while (i < m)
    {
        c.push_back(a[i]);
        i++;
    }

    // Append remaining elements of b (if any)
    while (j < n)
    {
        c.push_back(b[j]);
        j++;
    }

    cout << "Elements of vector c: ";
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
