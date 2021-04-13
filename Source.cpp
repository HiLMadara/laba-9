#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include "libforlab.h"

using namespace std;

int main() {    
	                                                          
    int maxDegree, sequence;                                                            //int n, n/2
       
    int i;
    double coef;
	cout << "Enter the maximum degree of the polynomial." << endl;
    cin >> maxDegree;
    check();
    if (maxDegree < 0) {
        cout << "Error!Negative degree of the derivative!";
        return 1;
    }
    if (maxDegree > 1000) {
        cout << "Error! Too big degree man relax dont break my lab! ";
        return -1;
    }
    double* arrCoef = new(nothrow) double[maxDegree];
    if (!arrCoef) {
        cout << "Memory error!";
        return -1;
    }
    
    for (i = 0; i < maxDegree; i++) {
       //cout << "Enter the coefficient at x" << endl;
        cin >> coef;
        check();
        arrCoef[i] = coef;
    }
    
    sequence = floor(maxDegree / 2);
    
    for (i = 0 ; i < sequence; i++) {                                                   
        
        for (int j = 1; j < maxDegree; j++) {
            deriv(arrCoef, arrCoef + maxDegree, j);                                                            
        }

   }

    for (i = 0; i < maxDegree; i++) {
        cout << "Coefficient at the degree of "<< i << " = " << arrCoef[i] << endl;
    }
    
    
    delete [] arrCoef;
    return 0;
}