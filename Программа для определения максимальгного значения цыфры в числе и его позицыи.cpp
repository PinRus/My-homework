/*Программа для определения максимальгного значения цыфры в числе и его позицыи*/

#include <iostream>
using namespace std;

main() {
       int mainNum , posNum , max, count;
       
       cout << "Программа для определения максимальгного значения цыфры в числе и его позицыи." << endl << endl ;
       cout << "Введите любое число: " ;
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
       
       cout << "Наибольшая цыфра: " << max << endl;
       cout << "Позиция в числе: " << posNum ;
       
       cin.get() ;
       cin.get() ;
}
