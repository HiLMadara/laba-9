#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <math.h>
#include "libforlab.h"

using namespace std;

int main() {    
	                                                          
    int maxDegree, sequence;                                                            //int n, n/2
       
    int i,coef;    
	cout << "Enter the maximum degree of the polynomial." << endl;
    cin >> maxDegree;
    prov();
    int* arrCoef = new int[maxDegree];
    
    for (i = 0; i < maxDegree; i++) {
        cout << "Enter the coefficient at x" << endl;
        cin >> coef;
        prov();
        arrCoef[i] = coef;
    }
    
    sequence = floor(maxDegree / 2);
    
    for (i = 0 ; i < sequence; i++) {                                                   
        
        for (i = 1; i < maxDegree; i++) {
            proizv(arrCoef, arrCoef + maxDegree, i);                                                            
        }

   }

    for (i = 0; i < maxDegree; i++) {
        cout << "Coefficient at the degree of "<< i << " = " << arrCoef[i] << endl;
    }
    
    delete [] arrCoef;
    return 0;
}