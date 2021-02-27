/*Программа для оприделения встречаемых симвалов*/

#include <iostream>
using namespace std;


main(){
	int NumEnd = 0;
	while ( NumEnd == 0) {
		
		string a;
		const int N = 50;
		char A[N];
		int V[N], i, j, x= 0, count=0;
		
		for (i= 0; i< N; i++) V[i]= 0;
		
		cout << "Enter a suggestion: ";
		getline (cin, a);
		
		for (i = 0; i < a.size(); i++){
			if (a[i] != ' ') {
				for (j=0; j< count; j++){
					if (A[j] == a[i]) {
						x++;
						V[j]++;
					}
				}
				if (x == 0) {
					A[count]= a[i];
					V[count]= 1; 
					count++;
				}
			}
			x=0;
		}
		
		for (i= 0; i < count; i++){
			cout << A[i] << " ";
		}
		cout << endl;
		for (i= 0; i < count; i++){
			cout << V[i] << " ";
		}
		
		string StrEnd;
		cout << endl << endl << "Do you wish to continue: ";
		cin >> StrEnd; 
		cout << endl;
		if (StrEnd == "no" ) {
			NumEnd = 1;
		}
	}
}
