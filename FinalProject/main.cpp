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

	items TI;
	items T;
	vector<string>Items;
	vector<string>::iterator itr;
	
	cout << "Welcome To Noah's Grocery Store" << endl;
	int selection;
	do {
	cout << "How can we help you?" << endl;
	cout << "[1] Dairy" << endl;
	cout << "[2] Meats" << endl;
	cout << "[3] Bread" << endl;
	cout << "[4] Fruit" << endl;
	cout << "[5] Vegetables" << endl;
	cout << "[6] Other/Extra" << endl;
	cout << "[0] Done" << endl;
	cin >> selection;
	
		switch (selection){
		case 1:
			int stwo;
			cout << "[1] Dairy" << endl;
			cout << setw(10) << right << "1. Milk" << setw(20) << "2.48" << endl;
			cout << setw(20) << right << "2. Chocolate Milk" << setw(10) << "2.48" << endl;
			cout << setw(12) << right << "3. Yogart" << setw(18) << "0.89" << endl;
			cout << setw(12) << right << "4. Cheese" << setw(18) << "1.20" << endl;
			cout << setw(20) << right << "5. Cottage Cheese" << setw(10) << "1.99" << endl;
			cout << setw(18) << right << "6. Cream Cheese" << setw(12) << "1.85" << endl;
			cout << setw(12) << right << "7. Butter" << setw(18) << "2.00" << endl;
			cout << setw(15) << right << "8. Ice Cream" << setw(15) << "4.50" << endl;
			cout << setw(10) << right << "9. Back" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[7] Done" << endl;
			cin >> stwo;

			if (stwo = 1){
				Items.push_back("Milk");
				
			}
			if (stwo = 2){
				Items.push_back("Chocolate Milk");

			}
			if (stwo = 3){
				Items.push_back("Yogart");

			}
			if (stwo = 4){
				Items.push_back("Cheese");

			}
			if (stwo = 5){
				Items.push_back("Cottage Cheese");

			}
			if (stwo = 6){
				Items.push_back("Cream Cheese");

			}
			if (stwo = 7){
				Items.push_back("Butter");

			}
			if (stwo = 8){
				Items.push_back("Ice Cream");

			}
			if (stwo = 9){
				break;
			}
		case 2:
			int sthree;
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << setw(10) << right << "1. Ribs" << setw(10) << "7.89" << endl;
			cout << setw(11) << right << "2. Bacon" << setw(10) << "7.89" << endl;
			cout << setw(14) << right << "3. Hot Dogs" << setw(10) << "7.89" << endl;
			cout << setw(9) << right << "4. Ham" << setw(10) << "7.89" << endl;
			cout << setw(15) << right << "5. Hamburger" << setw(10) << "7.89" << endl;
			cout << setw(11) << right << "6. Steak" << setw(21) << "7.89" << endl;
			cout << setw(15) << right << "7. RoastBeef" << setw(25) << "7.89" << endl;
			cout << setw(12) << right << "8. Turkey" << setw(22) << "7.89" << endl;
			cout << setw(13) << right << "9. Chicken" << setw(23) << "7.89" << endl;
			cout << setw(13) << right << "10. Salmon" << setw(23) << "7.89" << endl;
			cout << setw(11) << right << "11. Tuna" << setw(21) << "7.89" << endl;
			cout << setw(14) << right << "12. CatFish" << setw(24) << "7.89" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[7] Done" << endl;
			break;
		case 3:
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[7] Done" << endl;
			break;
		case 4:
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[7] Done" << endl;
			break;
		case 5:
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[7] Done" << endl;
			break;
		case 6:
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[7] Done" << endl;
			break;
		case 7:
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[7] Done" << endl;
			return 0;
		}
	} while (selection != 0);

	
	
	system("pause");
	return 0;
}