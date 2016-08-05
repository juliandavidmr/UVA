#include <iostream>
#include <time.h> 

using namespace std;

int main(int argc, char const *argv[]) {
    clock_t start = clock();
    
    system(argv[1]);
    
    cout << "Time: " << ((clock() - start) / (double) CLOCKS_PER_SEC) << endl; 
   
    return 0;
}