#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <math.h>

using namespace std;
void prov() {
    if (cin.fail()) // ���� ���������� ���������� ���� ���������,
    {
        cin.clear(); // �� ���������� cin � '�������' ����� ������
        cin.ignore(32767, '\n'); // � ������� �������� ����������� ����� �� �������� ������
        cout << "������!������������ ������� �����!\n";//(����. ������ �������� ��� � ��������� ���� ������ �������)
    }
}
int main() {
	setlocale(LC_ALL, "Rus");                                     //�������� ���������� �������� ����� ������ ��� ���� ���������� �� ����������
   
    int maxDegree, sequence;                                      //int n, n/2
       
    int variable_for_loop,coef;    
    int arrCoef[2];
	cout << "������� ������������ ������� ����������." << endl;
    cin >> maxDegree;
    prov();
    for (variable_for_loop = 0; variable_for_loop < maxDegree; variable_for_loop++) {
        cout << "������� ���������� ��� �" << endl;
        cin >> coef;
        prov();
        arrCoef[variable_for_loop] = coef;
    }
    sequence = floor(maxDegree / 2);
    for (variable_for_loop = 0; variable_for_loop < sequence; variable_for_loop++) {                  //������� ����������� ��� ����� ������ (����. ������ ������� � ��������� ��������)
        for (variable_for_loop = 1; variable_for_loop < maxDegree; variable_for_loop++) {
            arrCoef[variable_for_loop - 1] = arrCoef[variable_for_loop] * variable_for_loop;
            arrCoef[variable_for_loop] = 0; //�� �� ���� �� ����� � �^1 �� �������� � ����� � ��� ���������
        }
   }
    for (variable_for_loop = 0; variable_for_loop < maxDegree; variable_for_loop++) {
        cout << "����������� ��� ������� "<< variable_for_loop << " = " << arrCoef[variable_for_loop] << endl;
    }
    return 0;
}