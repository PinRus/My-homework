/*��������� ��� ����������� �������������� �������� ����� � ����� � ��� �������*/

#include <iostream>
using namespace std;

main() {
       int mainNum , posNum , max, count;
       
       cout << "��������� ��� ����������� �������������� �������� ����� � ����� � ��� �������." << endl << endl ;
       cout << "������� ����� �����: " ;
       cin >> mainNum ;
       
       posNum = 0 ;
       count = 0 ;
       max = 0 ;
       
       while (mainNum > 0) {
       		 count ++ ;	
             if (max < mainNum % 10 ) {
             	max = mainNum % 10 ;
             	posNum = count ;
			 }
             mainNum /= 10 ;
             }
       
	   posNum = count - posNum + 1;	       
       
       cout << "���������� �����: " << max << endl;
       cout << "������� � �����: " << posNum ;
       
       cin.get() ;
       cin.get() ;
}
