#include <bits/stdc++.h>
using namespace std;

class IQ_Data
{
public:
    int roll;
    char section;
    int IQ;

    IQ_Data(int roll, char section, int IQ)
    {
        this->roll = roll;
        this->section = section;
        this->IQ = IQ;
    }
};

class comparator
{
public:
    bool operator()(IQ_Data a, IQ_Data b)
    {
        // jodi swap korte chai tokhon true return korbe
        if (a.IQ < b.IQ)
        {
            return true;
        }
        else if (a.IQ == b.IQ)
        {
            if (a.roll > b.roll)
            {
                return true;
            }
            else
                return false;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    // priority_queue<data_type> name ;

    priority_queue<IQ_Data, vector<IQ_Data>, comparator> pq;

    for (int i = 0; i < 5; i++)
    {
        int roll;
        char sec;
        int IQ;
        cin >> roll >> sec >> IQ;
        IQ_Data obj(roll, sec, IQ);
        pq.push(obj);
    }

    while (!pq.empty())
    {

        IQ_Data obj = pq.top();
        pq.pop();
        cout << obj.roll << " " << obj.section << " " << obj.IQ << endl;
    }

    // int q;
    // cin >> q;

    // while (q--)
    // {
    //     int operation;
    //     cin >> operation;
    //     if (operation == 1)
    //     {
    //         // highest IQ tar data nicchi
    //         if (!pq.empty())
    //         {
    //             IQ_Data obj = pq.top();
    //             cout << obj.roll << " " << obj.section << " " << obj.IQ << endl;
    //         }
    //         else
    //         {
    //             cout << "no data available" << endl;
    //         }
    //     }
    //     else if (operation == 2)
    //     {
    //         // IQ table e notun data store kortesi
    //         int roll;
    //         char sec;
    //         int IQ;
    //         cin >> roll >> sec >> IQ;
    //         IQ_Data obj(roll, sec, IQ);
    //         pq.push(obj);
    //     }
    //     else
    //     {
    //         // IQ table er top element k remove kortesi
    //         if (!pq.empty())
    //         {
    //             pq.pop();
    //         }
    //         else
    //         {
    //             cout << "no data available";
    //         }
    //     }
    // }
}