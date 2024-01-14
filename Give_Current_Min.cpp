#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        minHeap.push(arr[i]);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            int x;
            cin >> x;
            arr.push_back(x);
            minHeap.push(x);
            cout << minHeap.top() << endl;
        }
        else if (c == 1)
        {
            if (!minHeap.empty())
            {
                cout << minHeap.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (c == 2)
        {
            if (!minHeap.empty())
            {
                minHeap.pop();
                if (!minHeap.empty())
                {
                    cout << minHeap.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}