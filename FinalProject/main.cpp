#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <iomanip>
#include "Items.h"

using namespace std;

int main(){
	cout << "Noah VanCura 3rd hour" << endl;
	cout << endl;

	items T;
	items Ti;
	vector<string>items;
	vector<string>::iterator itr;
	
	cout << "Welcome To Noah's Grocery Store" << endl;
	int selection;
	cout << "How can we help you?" << endl;
	cout << "[1] Dairy" << endl;
	cout << "[2] Meats" << endl;
	cout << "[3] Bread" << endl;
	cout << "[4] Fruit" << endl;
	cout << "[5] Vegetables" << endl;
	cout << "[6] Other/Extra" << endl;
	cin >> selection;
	
		switch (selection){
		case 1:
			system("cls");
			cout << "[1] Dairy" << endl;
			cout << setw(10) << right << "1. Milk" << endl;
			cout << setw(20) << right << "2. Chocolate Milk" << endl;
			cout << setw(12) << right << "3. Yogart" << endl;
			cout << setw(12) << right << "4. Cheese" << endl;
			cout << setw(20) << right << "5. Cottage Cheese" << endl;
			cout << setw(18) << right << "6. Cream Cheese" << endl;
			cout << setw(12) << right << "7. Butter" << endl;
			cout << setw(15) << right << "8. Ice Cream" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[7] Done" << endl;

		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			return 0;
		}
	
	
	system("pause");
	return 0;
}