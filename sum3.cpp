#include <iostream>
#include <string>
#include <map>
using namespace std;
bool sino(map<char, int> m)
{
    if (m['1'] >= 3)
    {
        return true;
    }
    if (m['0'] >= 2 && m['3'] >= 1)
    {
        return true;
    }
    if (m['6'] >= 2 && m['1'] >= 1)
    {
        return true;
    }
    if (m['2'] >= 2 && m['9'] >= 1)
    {
        return true;
    }
    if (m['3'] >= 2 && m['7'] >= 1)
    {
        return true;
    }
    if (m['5'] >= 2 && m['3'] >= 1)
    {
        return true;
    }
    if (m['4'] >= 2 && m['5'] >= 1)
    {
        return true;
    }
    if (m['9'] >= 2 && m['5'] >= 1)
    {
        return true;
    }
    if (m['7'] >= 2 && m['9'] >= 1)
    {
        return true;
    }
    if (m['8'] >= 2 && m['7'] >= 1)
    {
        return true;
    }
    if ((m['0'] >= 1 && m['1'] >= 1) && m['2'] >= 1)
    {
        return true;
    }
    if ((m['0'] >= 1 && m['4'] >= 1) && m['9'] >= 1)
    {
        return true;
    }
    if ((m['0'] >= 1 && m['5'] >= 1) && m['8'] >= 1)
    {
        return true;
    }
    if ((m['0'] >= 1 && m['6'] >= 1) && m['7'] >= 1)
    {
        return true;
    }
    if ((m['1'] >= 1 && m['3'] >= 1) && m['9'] >= 1)
    {
        return true;
    }
    if ((m['1'] >= 1 && m['4'] >= 1) && m['8'] >= 1)
    {
        return true;
    }
    if ((m['1'] >= 1 && m['5'] >= 1) && m['7'] >= 1)
    {
        return true;
    }
    if ((m['2'] >= 1 && m['4'] >= 1) && m['7'] >= 1)
    {
        return true;
    }
    if ((m['2'] >= 1 && m['5'] >= 1) && m['6'] >= 1)
    {
        return true;
    }
    if ((m['3'] >= 1 && m['4'] >= 1) && m['6'] >= 1)
    {
        return true;
    }
    if ((m['6'] >= 1 && m['8'] >= 1) && m['9'] >= 1)
    {
        return true;
    }
    if ((m['2'] >= 1 && m['3'] >= 1) && m['8'] >= 1)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    int tc, n;
    string num;
    char key;
    map<char, int> mapa;
    cin >> tc;
    while (tc--)
    {
        mapa.clear();
        cin >> n;
        while (n--)
        {
            cin >> num;
            key = num[num.size() - 1];
            mapa[key]++;
        }
        if (sino(mapa)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
