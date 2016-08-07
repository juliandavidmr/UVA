#include <iostream>
#include <map>

using namespace std;

//#define DEBUG

#ifdef DEBUG
#define debug(x) cout<<x
#else
#define debug(x) //cout<<x
#endif

int main()
{
    map<string, int> mimapa;

    mimapa["hola"] = 10;
    mimapa["chao"] = 20;

    for(map<string, int>::iterator i = mimapa.begin();i != mimapa.end(); ++i)
    {
        debug((*i).first << " - " << i->second<<endl);
    }

    cout<<mimapa.size();

    return 0;
}
