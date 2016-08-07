#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int cont = 0;
int todos = 0;

bool findCandidate(string &w, int candidate)
{
    int pos = w.find('*');

    switch (candidate)
    {
        case 1:
            if( pos > 0 && w[pos-1] == 'L')
            {
                swap(w[pos], w[pos-1]);
                return true;
            }
            return false;
        case 2:
            if(pos > 1 && w[pos -1]=='R' && w[pos-2]=='L')
            {
                swap(w[pos], w[pos-2]);
                return true;
            }
            return false;
        case 3:
            if(pos <=w.size()-2 && w[pos+1]=='R')
            {
                swap(w[pos], w[pos+1]);
                return true;
            }
            return false;
        case 4:
            if(pos<=w.size()-3 && w[pos+1]=='L' && w[pos+2]=='R')
            {
                swap(w[pos], w[pos+2]);
                return true;
            }
            return false;
    }
}

void frogJumps(const string & original, string currentw,
               vector<int> & steps, bool & found)
{
    int candidate = 1;
    string attempt = currentw, aux;

    do
    {
        attempt = currentw;
        if(findCandidate(attempt, candidate))
        {
            steps.push_back(candidate);
            aux = attempt;
            reverse(aux.begin(), aux.end());

            if(aux != original)
            {
                frogJumps(original, attempt, steps, found);
                if(!found)
                {
                    steps.pop_back();
                    todos++;
                }
            }else
            {
                //found = true;
                ++cont;
                steps.pop_back();
            }
        }
        ++candidate;
    }while(!found && candidate<=4);
}

int main()
{
    string frogs = "LLL*RRR";
    vector<int> steps;
    bool found = false;

    frogJumps(frogs, frogs, steps, found);

    if(found)
    {
        for(vector<int>::iterator i = steps.begin(); i!=steps.end(); ++i)
        {
            cout<<*i<<endl;
        }
    }else
    {
        //imprimir paila
    }
    cout<<cont<<" " <<todos;
    return 0;
}
