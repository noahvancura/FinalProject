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


	vector<string>Items;
	vector<string>::iterator itr;

	cout << "Welcome To Noah's Grocery Store" << endl;
	int selection;
	do {
		system("cls");
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
			system("cls");
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
			cout << setw(10) << right << "0. Back" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[0] Done" << endl;
			cin >> stwo;
			break;
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
			if (stwo = 0){
				break;
			}
			break;
		case 2:
			system("cls");
			int sthree;
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << setw(10) << right << "1. Ribs" << setw(21) << "7.89" << endl;
			cout << setw(11) << right << "2. Bacon" << setw(20) << "7.89" << endl;
			cout << setw(14) << right << "3. Hot Dogs" << setw(17) << "7.89" << endl;
			cout << setw(9) << right << "4. Ham" << setw(22) << "7.89" << endl;
			cout << setw(15) << right << "5. Hamburger" << setw(16) << "7.89" << endl;
			cout << setw(11) << right << "6. Steak" << setw(20) << "7.89" << endl;
			cout << setw(15) << right << "7. RoastBeef" << setw(16) << "7.89" << endl;
			cout << setw(12) << right << "8. Turkey" << setw(19) << "7.89" << endl;
			cout << setw(13) << right << "9. Chicken" << setw(18) << "7.89" << endl;
			cout << setw(12) << right << "10. Salmon" << setw(19) << "7.89" << endl;
			cout << setw(10) << right << "11. Tuna" << setw(21) << "7.89" << endl;
			cout << setw(13) << right << "12. CatFish" << setw(18) << "7.89" << endl;
			cout << setw(10) << right << "0. Back" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[0] Done" << endl;
			cin >> sthree;
			if (sthree = 1){
				Items.push_back("Ribs");
			}
			if (sthree = 2){
				Items.push_back("Bacon");
			}
			if (sthree = 3){
				Items.push_back("Hot Dogs");
			}
			if (sthree = 4){
				Items.push_back("Ham");
			}
			if (sthree = 5){
				Items.push_back("Hamburger");
			}
			if (sthree = 6){
				Items.push_back("Steak");
			}
			if (sthree = 7){
				Items.push_back("RoastBeef");
			}
			if (sthree = 8){
				Items.push_back("Turkey");
			}
			if (sthree = 9){
				Items.push_back("Chicken");
			}
			if (sthree = 10){
				Items.push_back("Salmon");
			}
			if (sthree = 11){
				Items.push_back("Tuna");
			}
			if (sthree = 12){
				Items.push_back("CatFish");
			}
			break;
		case 3:
			system("cls");
			int sfour;
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << setw(11) << right << "1. White" << setw(19) << "2.50" << endl;
			cout << setw(17) << right << "2. Whole Wheat" << setw(13) << "2.50" << endl;
			cout << setw(17) << right << "3. Whole Grain" << setw(13) << "2.50" << endl;
			cout << setw(11) << right << "4. Wheat" << setw(19) << "2.50" << endl;
			cout << setw(18) << right << "5. Hot Dog Buns" << setw(12) << "1.50" << endl;
			cout << setw(20) << right << "6. Hamburger Buns" << setw(10) << "1.50" << endl;
			cout << setw(10) << right << "0. Back" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[0] Done" << endl;
			cin >> sfour;
			if (sfour = 1){
				Items.push_back("White");
			}
			if (sfour = 2){
				Items.push_back("Whole Wheat");
			}
			if (sfour = 3){
				Items.push_back("Whole Grain");
			}
			if (sfour = 4){
				Items.push_back("Wheat");
			}
			if (sfour = 5){
				Items.push_back("Hot Dog Buns");
			}
			if (sfour = 6){
				Items.push_back("Hamburger Buns");
			}
			if (sfour = 0){
				break;
			}
			break;
		case 4:
			system("cls");
			int sfive;
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << setw(12) << right << "1. Apples" << setw(18) << "1.25" << endl;
			cout << setw(13) << right << "2. Bananas" << setw(17) << "1.05" << endl;
			cout << setw(16) << right << "3. Watermelon" << setw(14) << "4.89" << endl;
			cout << setw(17) << right << "4. Strawberrys" << setw(13) << "4.76" << endl;
			cout << setw(12) << right << "5. Grapes" << setw(18) << "3.34" << endl;
			cout << setw(13) << right << "6. Oranges" << setw(17) << "1.40" << endl;
			cout << setw(11) << right << "7. Kiwis" << setw(19) << "2.99" << endl;
			cout << setw(14) << right << "8. Catolope" << setw(16) << "4.31" << endl;
			cout << setw(10) << right << "0. back" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[0] Done" << endl;
			cin >> sfive;
			if (sfive = 1){
				Items.push_back("Apples");
			}
			if (sfive = 2){
				Items.push_back("Bananas");
			}
			if (sfive = 3){
				Items.push_back("Watermelon");
			}
			if (sfive = 4){
				Items.push_back("Strawberrys");
			}
			if (sfive = 5){
				Items.push_back("Grapes");
			}
			if (sfive = 6){
				Items.push_back("Oranges");
			}
			if (sfive = 7){
				Items.push_back("Kiwis");
			}
			if (sfive = 8){
				Items.push_back("Catolope");
			}
			if (sfive = 0){
				break;
			}
			break;
		case 5:
			int ssix;
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << setw(12) << right << "1. Lettus" << setw(18) << "1.10" << endl;
			cout << setw(13) << right << "2. Carrots" << setw(17) << "1.10" << endl;
			cout << setw(13) << right << "3. Pickles" << setw(17) << "1.10" << endl;
			cout << setw(15) << right << "4. Cucumbers" << setw(15) << "1.10" << endl;
			cout << setw(10) << right << "5. Corn" << setw(20) << "1.10" << endl;
			cout << setw(13) << right << "6. Potatos" << setw(17) << "1.10" << endl;
			cout << setw(17) << right << "7. Green Beans" << setw(13) << "1.10" << endl;
			cout << setw(10) << right << "8. Peas" << setw(20) << "1.10" << endl;
			cout << setw(10) << right << "0. back" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[0] Done" << endl;
			cin >> ssix;
			if (ssix = 1){
				Items.push_back("Lettus");
			}
			if (ssix = 2){
				Items.push_back("Carrots");
			}
			if (ssix = 3){
				Items.push_back("Pickles");
			}
			if (ssix = 4){
				Items.push_back("Cucumbers");
			}
			if (ssix = 5){
				Items.push_back("Corn");
			}
			if (ssix = 6){
				Items.push_back("Potatos");
			}
			if (ssix = 7){
				Items.push_back("Green Beans");
			}
			if (ssix = 8){
				Items.push_back("Peas");
			}
			if (ssix = 0){
				break;
			}
			break;
		case 6:
			system("cls");
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << setw(12) << right << "1. Candy Bar" << setw(18) << "1.10" << endl;
			cout << setw(12) << right << "2. Soup" << setw(18) << "1.10" << endl;
			cout << setw(12) << right << "3. Toilet Paper" << setw(18) << "1.10" << endl;
			cout << setw(12) << right << "4. Paper Towel" << setw(18) << "1.10" << endl;
			cout << setw(12) << right << "5. Gum" << setw(18) << "1.10" << endl;
			cout << setw(10) << right << "0. back" << endl;
			cout << setw(10) << right << "0. back" << endl;
			cout << "[0] Done" << endl;
			break;
		}
	} while (selection != 0);


		system("pause");
		return 0;
	}