#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);

        string word;
        stringstream ss(s);
        map<string, int> wordCount;

        string maxWord;
        int mx = INT_MIN;
        while (ss >> word)
        {
            wordCount[word]++;
            if (mx < wordCount[word])
            {
                mx = wordCount[word];
                maxWord = word;
            }
        }
        cout << maxWord << " " << mx << endl;
    }

    return 0;
}
