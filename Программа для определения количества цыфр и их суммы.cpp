/*��������� ��� ����������� ���������� ���� � ����� � �� �����*/

#include <iostream>
using namespace std;

main() {
       int mainNum , cum , count;
       
       cout << "��������� ��� ����������� ���������� ���� � ����� � �� �����" << endl << endl ;
       cout << "������� ����� �����: " ;
       cin >> mainNum ;
       
       cum = 0 ;
       count = 0 ;
       
       while (mainNum > 0) {
             cum = cum + (mainNum % 10) ;
             mainNum = mainNum / 10 ;
             count ++  ; 
             }
       
       cout << "���������� ����: " << count << endl;
       cout << "�� �����: " << cum ;
       
       cin.get() ;
       cin.get() ;
}
