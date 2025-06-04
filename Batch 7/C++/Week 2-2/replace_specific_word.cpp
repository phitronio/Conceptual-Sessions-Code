#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc; // 3
    cin >> tc;
    while (tc--) // 3 2 1 0
    {
        string sentence, target_str;
        cin >> sentence >> target_str;

        // mynameisatiqisatiq is

        // while (sentence.find(target_str) != string::npos)
        while (sentence.find(target_str) != -1)
        {
            // int sz = target_str.size();
            sentence.replace(sentence.find(target_str), target_str.size(), "@");
        }
        cout << sentence << endl;
    }

    return 0;
}


/*  
input: 
3
helloworld wor
mynameisatiqisatiq is
phitronisgoodphitronisgood good

*/