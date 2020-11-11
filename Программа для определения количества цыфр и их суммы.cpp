/*Программа для определения количества цыфр в числе и их суммы*/

#include <iostream>
using namespace std;

main() {
       int mainNum , cum , count;
       
       cout << "Программа для определения количества цыфр в числе и их суммы" << endl << endl ;
       cout << "Введите любое число: " ;
       cin >> mainNum ;
       
       cum = 0 ;
       count = 0 ;
       
       while (mainNum > 0) {
             cum = cum + (mainNum % 10) ;
             mainNum = mainNum / 10 ;
             count ++  ; 
             }
       
       cout << "Количество цыфр: " << count << endl;
       cout << "Их сумма: " << cum ;
       
       cin.get() ;
       cin.get() ;
}
