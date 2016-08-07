#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, int> mimapa;

    pair<int, int> a;
    a.first = 3;
    a.second = 8;

    mimapa.insert(a);

    mimapa.insert(pair<int, int>(5,3));
    mimapa.insert(pair<int, int>(3,1));
    mimapa.insert(pair<int, int>(8,4));
    mimapa.insert(pair<int, int>(5,0));
    /*mimapa[3] = 1;
    mimapa[8] = 4;
    mimapa[5] = 0;
*/
    for(map<int, int>::iterator i = mimapa.begin();i != mimapa.end(); ++i)
    {
        cout<<(*i).first << " - " << i->second<<endl;
    }

    return 0;
}
