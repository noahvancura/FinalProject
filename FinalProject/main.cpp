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

	items t;
	vector<string>Items;
	vector<string>::iterator itr;

	cout << "Welcome To Noah's Grocery Store" << endl;
	int selection, stwo, sthree, sfour, sfive, ssix, sseven;
	float tempTotal = 0;
	t.setTotal(tempTotal);

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
				tempTotal + 2.48;
			}
			if (stwo = 2){
				Items.push_back("Chocolate Milk");
				tempTotal + 2.48;
			}
			if (stwo = 3){
				Items.push_back("Yogart");
				tempTotal + 0.89;
			}
			if (stwo = 4){
				Items.push_back("Cheese");
				tempTotal + 1.20;
			}
			if (stwo = 5){
				Items.push_back("Cottage Cheese");
				tempTotal + 1.99;
			}
			if (stwo = 6){
				Items.push_back("Cream Cheese");
				tempTotal + 1.85;
			}
			if (stwo = 7){
				Items.push_back("Butter");
				tempTotal + 2.00;
			}
			if (stwo = 8){
				Items.push_back("Ice Cream");
				tempTotal + 4.50;
			}
			if (stwo = 0){
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << setw(10) << right << "1. Ribs" << setw(21) << "7.89" << endl;
			cout << setw(11) << right << "2. Bacon" << setw(20) << "2.67" << endl;
			cout << setw(14) << right << "3. Hot Dogs" << setw(17) << "2.06" << endl;
			cout << setw(9) << right << "4. Ham" << setw(22) << "5.99" << endl;
			cout << setw(15) << right << "5. Hamburger" << setw(16) << "3.58" << endl;
			cout << setw(11) << right << "6. Steak" << setw(20) << "4.23" << endl;
			cout << setw(15) << right << "7. RoastBeef" << setw(16) << "5.00" << endl;
			cout << setw(12) << right << "8. Turkey" << setw(19) << "9.79" << endl;
			cout << setw(13) << right << "9. Chicken" << setw(18) << "8.79" << endl;
			cout << setw(12) << right << "10. Salmon" << setw(19) << "6.59" << endl;
			cout << setw(10) << right << "11. Tuna" << setw(21) << "7.19" << endl;
			cout << setw(13) << right << "12. CatFish" << setw(18) << "6.22" << endl;
			cout << setw(10) << right << "0. Back" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[0] Done" << endl;
			cin >> sthree;
			if (sthree = 1){
				Items.push_back("Ribs");
				tempTotal + 7.89;
			}
			if (sthree = 2){
				Items.push_back("Bacon");
				tempTotal + 2.67;
			}
			if (sthree = 3){
				Items.push_back("Hot Dogs");
				tempTotal + 2.06;
			}
			if (sthree = 4){
				Items.push_back("Ham");
				tempTotal + 5.99;
			}
			if (sthree = 5){
				Items.push_back("Hamburger");
				tempTotal + 3.58;
			}
			if (sthree = 6){
				Items.push_back("Steak");
				tempTotal + 4.23;
			}
			if (sthree = 7){
				Items.push_back("RoastBeef");
				tempTotal + 5.00;
			}
			if (sthree = 8){
				Items.push_back("Turkey");
				tempTotal + 9.79;
			}
			if (sthree = 9){
				Items.push_back("Chicken");
				tempTotal + 8.79;
			}
			if (sthree = 10){
				Items.push_back("Salmon");
				tempTotal + 6.59;
			}
			if (sthree = 11){
				Items.push_back("Tuna");
				tempTotal + 7.19;
			}
			if (sthree = 12){
				Items.push_back("CatFish");
				tempTotal + 6.22;
			}
			break;
		case 3:
			system("cls");
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
				tempTotal + 2.50;
			}
			if (sfour = 2){
				Items.push_back("Whole Wheat");
				tempTotal + 2.50;
			}
			if (sfour = 3){
				Items.push_back("Whole Grain");
				tempTotal + 2.50;
			}
			if (sfour = 4){
				Items.push_back("Wheat");
				tempTotal + 2.50;
			}
			if (sfour = 5){
				Items.push_back("Hot Dog Buns");
				tempTotal + 1.50;
			}
			if (sfour = 6){
				Items.push_back("Hamburger Buns");
				tempTotal + 1.50;
			}
			if (sfour = 0){
				break;
			}
			break;
		case 4:
			system("cls");
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
				tempTotal + 1.25;
			}
			if (sfive = 2){
				Items.push_back("Bananas");
				tempTotal + 1.05;
			}
			if (sfive = 3){
				Items.push_back("Watermelon");
				tempTotal + 4.89;
			}
			if (sfive = 4){
				Items.push_back("Strawberrys");
				tempTotal + 4.76;
			}
			if (sfive = 5){
				Items.push_back("Grapes");
				tempTotal + 3.34;
			}
			if (sfive = 6){
				Items.push_back("Oranges");
				tempTotal + 1.40;
			}
			if (sfive = 7){
				Items.push_back("Kiwis");
				tempTotal + 2.99;
			}
			if (sfive = 8){
				Items.push_back("Catolope");
				tempTotal + 4.31;
			}
			if (sfive = 0){
				break;
			}
			break;
		case 5:
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
			cout << setw(12) << right << "1. Candy Bar" << setw(18) << "1.00" << endl;
			cout << setw(12) << right << "2. Soup" << setw(18) << "1.49" << endl;
			cout << setw(12) << right << "3. Toilet Paper" << setw(18) << "1.00" << endl;
			cout << setw(12) << right << "4. Paper Towel" << setw(18) << "1.00" << endl;
			cout << setw(12) << right << "5. Gum" << setw(18) << "1.50" << endl;
			cout << setw(10) << right << "0. back" << endl;
			cout << "[0] Done" << endl;
			cin >> sseven;
			if (sseven = 1){
				Items.push_back("Candy Bar");
				tempTotal + 1.00;
			}
			if (sseven = 2){
				Items.push_back("Soup");
				tempTotal + 1.49;
			}
			if (sseven = 3){
				Items.push_back("Toilet Paper");
				tempTotal + 1.00;
			}
			if (sseven = 4){
				Items.push_back("Paper Towel");
				tempTotal + 1.00;
			}
			if (sseven = 5){
				Items.push_back("Gum");
				tempTotal + 1.50;
			}
			if (sseven = 0){
				break;
			}
			break;
		}
	} while (selection != 0);
		system("pause");
		return 0;
	}