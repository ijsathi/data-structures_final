#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class Compare
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        return a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, Compare> maxHeap;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        maxHeap.push(obj);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student newStudent(name, roll, marks);
            maxHeap.push(newStudent);
            cout << maxHeap.top().name << " " << maxHeap.top().roll << " " << maxHeap.top().marks << endl;
        }
        else if (c == 1)
        {
            if (!maxHeap.empty())
            {
                cout << maxHeap.top().name << " " << maxHeap.top().roll << " " << maxHeap.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (c == 2)
        {
            if (!maxHeap.empty())
            {
                maxHeap.pop();
                if (!maxHeap.empty())
                {
                    cout << maxHeap.top().name << " " << maxHeap.top().roll << " " << maxHeap.top().marks << endl;
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