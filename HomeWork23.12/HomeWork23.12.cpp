#include <iostream>

using namespace std;

int main()
{
	/*
	int a;
	cin >> a;
	for (int i = 0; i < 8; i++) {						//высота всей доски 
		if (i % 2) {
			for (int j = 0; j < a; j++) {				//высота отдельной клетки
				for (int h = 0; h < 8; h++) {			// длина всей доски
					if (h % 2) {
						for (int k = 0; k < a; k++) {	//длина отдельной клетки
							cout << '*';
						}
					}
					else {
						for (int k = 0; k < a; k++) {
							cout << '_';
						}
					}
				}
				cout << endl;
			}
		}
		else {
			for (int j = 0; j < a; j++) {
				for (int h = 0; h < 8; h++) {
					if (h % 2) {
						for (int k = 0; k < a; k++) {
							cout << '_';
						}
					}
					else {
						for (int k = 0; k < a; k++) {
							cout << '*';
						}
					}
				}
				cout << endl;
			}
		}
	}
	*/

	/*
	 
0	*      * 6
1	**    ** 5
2	***  *** 4
3	******** 3
4	***  *** 2
5	**    ** 1
6	*      * 0
	
	*/
	for (int i = 0, step = 7; i < 7; i++, step--) {
		for (int j = 0; j < 8; j++) {
			if (i <= 7 / 2) {
				if (j <= i || j >= step) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}
			else {
				if (j > i || j < step) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}
			
		}
		cout << endl;
		
	}
	

	for (int i = 0, j = 1, k = 6; i < 7; i++) {
		if (i < 7 / 2) {
			cout << string(j, '*') << string(k, ' ') << string(j, '*') << endl;
			j++; k -= 2;
		}
		else if (i == 7 / 2) {
			cout << string(8, '*') << endl;
			j--; k += 2;
		}
		else {
			cout << string(j, '*') << string(k, ' ') << string(j, '*') << endl;
			j--; k+=2;
		}
	}

	/*
	 
	*
	**
	***
	****
	*****
	****
	***
	**
	*
	
	*/
	/*int step = 7;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 8; j++) {
			if (i <= 7 / 2) {
				if (j <= i) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}
			else {
				if (j < step) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}

		}
		cout << endl;
		step--;
	}*/

	/*
	    *
	   **
	  ***
	 ****
	*****
	 ****
	  ***
	   **
	    *
	*/
	/*int step = 7;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 8; j++) {
			if (i >= 7 / 2) {
				if (j <= i) {
					cout << ' ';
				}
				else {
					cout << '*';
				}
			}
			else {
				if (j >= step) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}

		}
		cout << endl;
		step--;
	}
	*/
}
