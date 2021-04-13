#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cmath>

using namespace std;
void prov() {
    if (cin.fail())                                                                     
    {
        cin.clear();                                                                    
        cin.ignore(32767, '\n');                                                        
        cout << "Error!Invalid input attempt!\n";                                 
    }
}

void proizv(double* first, double* last, const int j) {
    if ((j > last - first) || (j == 0)) {
        return ;
    }
    first[j - 1] = first[j] * j;
    first[j] = 0;
}