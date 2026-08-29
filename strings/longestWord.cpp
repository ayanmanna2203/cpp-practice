#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "   Ayan     is   the smartest";
    int n = s.size();
    int i = 0, j = 0, max_len = 0;
    string ans = "";
    while (j < n)
    {
        if (s[j] != ' ')
            j++;
        else
        {
            int len = j - i;
            if (len > max_len)
            {
                max_len = len;
                ans = s.substr(i, len);
            }
            // jump to next word
            i = j;
            while (i < n && s[i] == ' ')
                i++;
            j = i;
        }
    }
    int len = j - i;
            if (len > max_len)
            {
                max_len = len;
                ans = s.substr(i, len);
            } 
    cout<<ans<<endl;
    cout << max_len << endl;
}