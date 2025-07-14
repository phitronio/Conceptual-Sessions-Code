/**
    Sample Input:
    a b c d e f stop
    4
    play a
    right
    left
    left

    Sample Output:
    playing a
    playing b
    playing a
    Not Found

 */
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    list<string> playList;

    // while(true){
    //     string song;
    //     cin>>song;
    //     if(song=="stop") break;
    //     playList.push_back(song);
    // }

    string song;
    while (cin >> song && song != "stop")
        playList.push_back(song);

    int q;
    cin >> q;
    auto current = playList.begin();

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "play")
        {
            string songName;
            cin >> songName;

            auto isFound = find(playList.begin(), playList.end(), songName);

            if (isFound != playList.end())
            {
                cout << "playing " << *isFound << endl;
                current = isFound;
            }
            else
            {
                cout << "Not Found" << endl;
            }
        }
        else if (cmd == "right")
        {
            if (next(current) != playList.end())
            {
                current = next(current);
                cout << "playing " << *current << endl;
            }
            else
            {
                cout << "Not Found" << endl;
            }
        }
        else if (cmd == "left")
        {
            // ========== way-01 ==============
            // if (prev(current) != prev(playList.begin()))
            // {
            //     current = prev(current);
            //     cout << "playing " << *current << endl;
            // }
            // else
            // {
            //     cout << "Not Found" << endl;
            // }

            // =============== way-02 ===========
            if (current == playList.begin())
            {
                cout << "Not found";
            }
            else
            {
                current = prev(current);
                cout << "playing " << *current << endl;
            }
        }
    }

    return 0;
}
