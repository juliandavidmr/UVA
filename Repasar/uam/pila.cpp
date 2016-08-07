#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    list<int> s;

    int num, cont=5;

    while(cont--)
    {
        cin>>num;
        s.push_back(num);
    }

    sort(s.begin(), s.end());

    for(list<int>::reverse_iterator i = s.rbegin(); i!=s.rend(); ++i)
    {
        cout<< *i <<" - ";
    }

    return 0;
}
