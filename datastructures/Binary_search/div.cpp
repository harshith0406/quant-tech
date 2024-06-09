#include <bits/stdc++.h>
using namespace std;

int binHelper(int divi, int divs, int start, int end)
{
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    if (mid * divs == divi)
    {
        return mid;
    }
    else if (mid * divs < divi)
    {
        int right = binHelper(divi, divs, mid + 1, end);
        return right == -1 ? mid : right;
    }
    else
    {
        return binHelper(divi, divs, start, mid - 1);
    }
}

int bin(int divi, int divs)
{
    return binHelper(divi, divs, 0, divi);
}

int main()
{
    int divi = 10;
    int divs = 2;
    int res = bin(divi, divs);

    if (res == -1)
    {
        cout << "No valid integer found!" << endl;
    }
    else
    {
        cout<< res << endl;
    }

    return 0;
}
