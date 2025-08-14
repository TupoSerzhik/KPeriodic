#include <iostream>
#include <string>

using namespace std;

bool IsKPeriodic(const string& s, int k)
{
    if (k <= 0 || s.length() % k != 0)
    {
        return false;
    }

    int numRepeats = s.length() / k;
    string pattern = s.substr(0, k);

    for (int i = 1; i < numRepeats; i++)
    {
        if (s.substr(i * k, k) != pattern)
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    cout << IsKPeriodic("abc", 0) << endl;
    cout << IsKPeriodic("abc", 4) << endl;
    cout << IsKPeriodic("abcabcabcabc", 3) << endl;
    cout << IsKPeriodic("abcabcabcabc", 4) << endl;
    cout << IsKPeriodic("abababab", 2) << endl;
    cout << IsKPeriodic("abababab", 3) << endl;
    cout << IsKPeriodic("abcdef", 2) << endl;
    cout << IsKPeriodic("abcdef", 6) << endl;
    cout << IsKPeriodic("aaaaaa", 1) << endl;
    cout << IsKPeriodic("aaaaaa", 2) << endl;
    cout << IsKPeriodic("aaaaaa", 3) << endl;
    cout << IsKPeriodic("aaaaaa", 6) << endl;
    
    // 1 - true  |  0 - false
    return 0;
}