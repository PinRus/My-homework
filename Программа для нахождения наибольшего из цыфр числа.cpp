/*Программа для нахождения наибольшего из цыфр числа*/
 
 #include <iostream>
 
 using namespace std ;
 
 main() {
 	int a, x1, x2, x3, x4, x5, max ;
 	
 	cout << "Эта программа служит для того чтобы находить наибольшее число из цыфр числа." << endl << endl ; 
 	cout << "Введите пятизначное число: " ;
 	cin >> a ;
 	
 	x5 = a % 10 ;0
 	a = a / 10 ;
 	
 	x4 = a % 10 ;
 	a = a / 10 ;
 	
 	x3 = a % 10 ;
 	a = a / 10 ;
 	
 	x2 = a % 10 ;
 	a = a / 10 ;
 	
 	x1 = a % 10 ;
 	
 	max = 0 ;
 	if (x1 > max) {
 		max = x1 ;
	 }
	if (x2 > max) {
 		max = x2 ;
	 }
	if (x3 > max) {
 		max = x3 ;
	 }
	if (x4 > max) {
 		max = x4 ;
	 }
	if (x5 > max) {
 		max = x5 ;
	 }    
 	
 	cout << "Максимальное значение цыфр числа равно: " << max ;
 	
 	
  cin.get() ;
  cin.get() ;
 	
 }
