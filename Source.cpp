#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <math.h>

using namespace std;
void prov() {
    if (cin.fail()) // если предыдущее извлечение было неудачным,
    {
        cin.clear(); // то возвращаем cin в 'обычный' режим работы
        cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
        cout << "Ошибка!Некорректная попытка ввода!\n";//(Прим. автору перенеси это в отдельный файл никита доебётся)
    }
}
int main() {
	setlocale(LC_ALL, "Rus");                                     //Поставил читаемость русского языка потому что лень переводить на английский
   
    int maxDegree, sequence;                                      //int n, n/2
       
    int variable_for_loop,coef;    
    int arrCoef[2];
	cout << "Введите максимальную степень многочлена." << endl;
    cin >> maxDegree;
    prov();
    for (variable_for_loop = 0; variable_for_loop < maxDegree; variable_for_loop++) {
        cout << "Введите коэфициент при х" << endl;
        cin >> coef;
        prov();
        arrCoef[variable_for_loop] = coef;
    }
    sequence = floor(maxDegree / 2);
    for (variable_for_loop = 0; variable_for_loop < sequence; variable_for_loop++) {                  //функция производной для много членов (Прим. автору сделать её отдельной функцией)
        for (variable_for_loop = 1; variable_for_loop < maxDegree; variable_for_loop++) {
            arrCoef[variable_for_loop - 1] = arrCoef[variable_for_loop] * variable_for_loop;
            arrCoef[variable_for_loop] = 0; //ну по идее он начнёт с х^1 но возможно я мудак и чёт накосячил
        }
   }
    for (variable_for_loop = 0; variable_for_loop < maxDegree; variable_for_loop++) {
        cout << "Коэффициент при степени "<< variable_for_loop << " = " << arrCoef[variable_for_loop] << endl;
    }
    return 0;
}