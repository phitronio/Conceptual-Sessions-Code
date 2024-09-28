#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
bool vis[N][N];
int dx[4] = {-1, 0, 1, 0}; // row er move
int dy[4] = {0, 1, 0, -1}; // col er move
map<pair<int, int>, pair<int, int>> par;

int n, m;

char graph[N][N];

bool valid(int ci, int cj)
{

    if (ci >= 0 && ci < n && cj >= 0 && cj < m)
    {
        return true;
    }
    else
        return false;
}

void bfs(int si, int sj)
{
    vis[si][sj] = true;

    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = node.first + dx[i];
            int cj = node.second + dy[i];

            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                par[{ci, cj}] = {node.first, node.second};
            }
        }
    }
}

int main()
{

    cin >> n >> m;

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }
    bfs(0, 0);

    if (vis[2][2])
    { // যদি আমার দেয়া ডেস্টিনেশন টি ভিজিট হয়। এক্ষেত্রে মেট্রিক্সের একদম শেষ প্রান্তকে ডেস্টিনেশন ধরা হয়েছে যেখানে B আছে

        // এখন আমরা B যে জায়গায় আছে তা থেকে শুরু করে এর Parent এর মাধ্যমে A তে পোঁছাবো

        int xi = 2; // initially B এর row এর পজিশন
        int xj = 2; // initally B এর column এর পজিশন

        while (true)
        { // A খুজে না পাওয়া পর্যন্ত একটি ইনফিনিটি লুপ চালাচ্ছি

            int newXi = par[{xi, xj}].first;  // এখন যে পজিশনে আছে অর্থাৎ (2,2) তার Parent এর row এর পজিশন বের করা হলো
            int newXj = par[{xi, xj}].second; // এখন যে পজিশনে আছে অর্থাৎ (2,2) তার Parent এর row এর পজিশন বের করা হলো

            // উপরের লাইন গুলোতে নতুন ভ্যারিয়েবল নেয়ার কারণ হলো আমরা যদি এখানে এইভাবে xi =  par[{xi,xj}].first এইভাবে xi এর মান আপডেট
            // করা হলে xi এর মান আপডেট হয়ে যাবে
            // সেক্ষেত্রে পরের লাইনে xj = par[{xi,xj}].second এক্সেস করার সময় par[{xi,xj}] এর xi এর ভ্যালুটি পরিবর্তিত ভ্যালু পাবো।

            // যেমন ধরুন , xi = 2 এবং xj = 2. এক্ষেত্রে  xi =  par[{2,2}].first. xi এর মান চেঞ্জ হয়ে 1 হয়ে গেলো
            // এর পর xj = par[{1,2}].second এক্সেস হবে পরের লাইনে , যা হওয়ার কথা ছিলো xj = par[{2,2}].second

            // এরপর xi , xj এর মান আপডেট করে তাদের parent cell এ মুভ করলাম

            xi = newXi;
            xj = newXj;

            if (graph[xi][xj] == 'A')
            { // Parent এর সেল এ A থাকলে তাকে পরিবর্তনের কোনো প্রয়োজন নেই। এক্ষেত্রে আমরা  ব্রেক করে দিতে পারি।
                break;
            }

            // প্যারেন্ট না হলে সেক্ষেত্রে তা Path এর ই একটি অংশ তাই তা চেঞ্জ করে দিলাম

            graph[xi][xj] = 'X';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << graph[i][j];
        }
        cout << endl;
    }

    cout << endl;
}