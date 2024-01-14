#include <bits/stdc++.h>
using namespace std;
class Pairs
{
public:
    string name;
    int id;
    Pairs(string name, long long int id)
    {
        this->name = name;
        this->id = id;
    }
};
class cmp
{
public:
    bool operator()(Pairs a, Pairs b)
    {
        if (a.name > b.name)
            return true;
        else if (a.name < b.name)
            return false;
        else
        {
            if (a.id < b.id)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Pairs, vector<Pairs>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        long long int id;
        cin >> name;
        cin >> id;
        Pairs obj(name, id);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().id << endl;
        pq.pop();
    }
    return 0;
}