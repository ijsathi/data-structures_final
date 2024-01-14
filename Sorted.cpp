#include <bits/stdc++.h>
using namespace std;
int duplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;

    int j = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j++] = arr[i];
        }
    }

    arr[j++] = arr[n - 1];

    return j;
}
int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        n = duplicates(a, n);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}