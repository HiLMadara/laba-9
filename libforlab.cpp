#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <math.h>

using namespace std;
void prov() {
    if (cin.fail())                                                                     
    {
        cin.clear();                                                                    
        cin.ignore(32767, '\n');                                                        
        cout << "Error!Invalid input attempt!\n";                                 
    }
}

void proizv(int* first, int* last, const int i) {
    if ((i > last - first) || (i == 0)) {
        return ;
    }
    first[i - 1] = first[i] * i;
    first[i] = 0;
}