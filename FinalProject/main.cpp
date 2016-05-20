#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main(){
	cout << "Noah VanCura 3rd hour" << endl;
	cout << endl;
	
	vector<string>Items;
	vector<string>::iterator itr;

	cout << "Welcome To Noah's Grocery Store" << endl;
	int selection, stwo, sthree, sfour, sfive, ssix, sseven;
	double total=0;
	int Titems = 0;
	
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


		if(selection == 1){

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
			if (stwo == 1){
				Items.push_back("Milk");
				total += 2.48;
				Titems++;
				continue;
			}
			if (stwo == 2){
				Items.push_back("Chocolate Milk");
				total += 2.48;
				Titems++;
				continue;
			}
			if (stwo == 3){
				Items.push_back("Yogart");
				total += 0.89;
				Titems++;
				continue;
			}
			if (stwo = 4){
				Items.push_back("Cheese");
				total += 1.20;
				Titems++;
				continue;
			}
			if (stwo = 5){
				Items.push_back("Cottage Cheese");
				total += 1.99;
				Titems++;
				continue;
			}
			if (stwo = 6){
				Items.push_back("Cream Cheese");
				total += 1.85;
				Titems++;
				continue;
			}
			if (stwo = 7){
				Items.push_back("Butter");
				total += 2.00;
				Titems++;
				continue;
			}
			if (stwo = 8){
				Items.push_back("Ice Cream");
				total += 4.50;
				Titems++;
				continue;
			}
			if (stwo = 0){
				continue;
			}
			break;
		}
		if (selection == 2){
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
			if (sthree == 1){
				Items.push_back("Ribs");
				total += 7.89;
				Titems++;
				continue;
			}
			if (sthree == 2){
				Items.push_back("Bacon");
				total += 2.67;
				Titems++;
				continue;
			}
			if (sthree == 3){
				Items.push_back("Hot Dogs");
				total += 2.06;
				Titems++;
				continue;
			}
			if (sthree == 4){
				Items.push_back("Ham");
				total += 5.99;
				Titems++;
				continue;
			}
			if (sthree == 5){
				Items.push_back("Hamburger");
				total += 3.58;
				Titems++;
				continue;
			}
			if (sthree == 6){
				Items.push_back("Steak");
				total += 4.23;
				Titems++;
				continue;
			}
			if (sthree == 7){
				Items.push_back("RoastBeef");
				total += 5.00;
				Titems++;
				continue;
			}
			if (sthree == 8){
				Items.push_back("Turkey");
				total += 9.79;
				Titems++;
				continue;
			}
			if (sthree == 9){
				Items.push_back("Chicken");
				total += 8.79;
				Titems++;
				continue;
			}
			if (sthree == 10){
				Items.push_back("Salmon");
				total += 6.59;
				Titems++;
				continue;
			}
			if (sthree == 11){
				Items.push_back("Tuna");
				total += 7.19;
				Titems++;
				continue;
			}
			if (sthree == 12){
				Items.push_back("CatFish");
				total += 6.22;
				Titems++;
				continue;
			}
			if (sthree == 0){
				continue;
			}
			break;
		}
		if (selection == 3){
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
			if (sfour == 1){
				Items.push_back("White");
				total += 2.50;
				Titems++;
				continue;
			}
			if (sfour == 2){
				Items.push_back("Whole Wheat");
				total += 2.50;
				Titems++;
				continue;
			}
			if (sfour == 3){
				Items.push_back("Whole Grain");
				total += 2.50;
				Titems++;
				continue;
			}
			if (sfour == 4){
				Items.push_back("Wheat");
				total += 2.50;
				Titems++;
				continue;
			}
			if (sfour == 5){
				Items.push_back("Hot Dog Buns");
				1.50;
				Titems++;
				continue;
			}
			if (sfour == 6){
				Items.push_back("Hamburger Buns");
				total += 1.50;
				Titems++;
				continue;
			}
			if (sfour == 0){
				continue;
			}
			break;
		}
		if (selection == 4){
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
			if (sfive == 1){
				Items.push_back("Apples");
				total += 1.25;
				Titems++;
				continue;
			}
			if (sfive == 2){
				Items.push_back("Bananas");
				total += 1.05;
				Titems++;
				continue;
			}
			if (sfive == 3){
				Items.push_back("Watermelon");
				total += 4.85;
				Titems++;
				continue;
			}
			if (sfive == 4){
				Items.push_back("Strawberrys");
				total += 4.76;
				Titems++;
				continue;
			}
			if (sfive == 5){
				Items.push_back("Grapes");
				total += 3.34;
				Titems++;
				continue;
			}
			if (sfive == 6){
				Items.push_back("Oranges");
				total += 1.40;
				Titems++;
				continue;
			}
			if (sfive == 7){
				Items.push_back("Kiwis");
				total += 2.99;
				Titems++;
				continue;
			}
			if (sfive == 8){
				Items.push_back("Catolope");
				total += 4.31;
				Titems++;
				continue;
			}
			if (sfive == 0){
				continue;
			}
			break;
		}
		if (selection == 5){
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << setw(12) << right << "1. Lettus" << setw(18) << "1.90" << endl;
			cout << setw(13) << right << "2. Carrots" << setw(17) << "1.40" << endl;
			cout << setw(13) << right << "3. Pickles" << setw(17) << "1.00" << endl;
			cout << setw(15) << right << "4. Cucumbers" << setw(15) << "1.00" << endl;
			cout << setw(10) << right << "5. Corn" << setw(20) << "2.21" << endl;
			cout << setw(13) << right << "6. Potatos" << setw(17) << "2.09" << endl;
			cout << setw(17) << right << "7. Green Beans" << setw(13) << "1.06" << endl;
			cout << setw(10) << right << "8. Peas" << setw(20) << "1.23" << endl;
			cout << setw(10) << right << "0. back" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << "[0] Done" << endl;
			cin >> ssix;
			if (ssix == 1){
				Items.push_back("Lettus");
				total += 1.90;
				Titems++;
				continue;
			}
			if (ssix == 2){
				Items.push_back("Carrots");
				total += 1.40;
				Titems++;
				continue;
			}
			if (ssix == 3){
				Items.push_back("Pickles");
				total += 1.00;
				Titems++;
				continue;
			}
			if (ssix == 4){
				Items.push_back("Cucumbers");
				total += 1.00;
				Titems++;
				continue;
			}
			if (ssix == 5){
				Items.push_back("Corn");
				total += 2.21;
				Titems++;
				continue;
			}
			if (ssix == 6){
				Items.push_back("Potatos");
				total += 2.09;
				Titems++;
				continue;
			}
			if (ssix == 7){
				Items.push_back("Green Beans");
				total += 1.06;
				Titems++;
				continue;
			}
			if (ssix == 8){
				Items.push_back("Peas");
				total += 1.23;
				Titems++;
				continue;
			}
			if (ssix = 0){
				continue;
			}
			break;
		}
		if (selection == 6){
			system("cls");
			cout << "[1] Dairy" << endl;
			cout << "[2] Meats" << endl;
			cout << "[3] Bread" << endl;
			cout << "[4] Fruit" << endl;
			cout << "[5] Vegetables" << endl;
			cout << "[6] Other/Extra" << endl;
			cout << setw(15) << right << "1. Candy Bar" << setw(15) << "1.00" << endl;
			cout << setw(10) << right << "2. Soup" << setw(20) << "1.49" << endl;
			cout << setw(18) << right << "3. Toilet Paper" << setw(12) << "1.00" << endl;
			cout << setw(17) << right << "4. Paper Towel" << setw(13) << "1.00" << endl;
			cout << setw(9) << right << "5. Gum" << setw(21) << "1.50" << endl;
			cout << setw(10) << right << "0. back" << endl;
			cout << "[0] Done" << endl;
			cin >> sseven;
			if (sseven == 1){
				Items.push_back("Candy Bar");
				total += 1.00;
				Titems++;
				continue;
			}
			if (sseven == 2){
				Items.push_back("Soup");
				total += 1.49;
				Titems++;
				continue;
			}
			if (sseven == 3){
				Items.push_back("Toilet Paper");
				total += 1.00;
				Titems++;
				continue;
			}
			if (sseven == 4){
				Items.push_back("Paper Towel");
				total += 1.00;
				Titems++;
				continue;
			}
			if (sseven == 5){
				Items.push_back("Gum");
				total += 1.50;
				Titems++;
				continue;
			}
			if (sseven == 0){
				continue;;
			}
			break;
		}
	} while (selection != 0);
	int fselection;
	ofstream out;
	string file;
	do {
		system("cls");
		cout << "[1] See Total" << endl;
		cout << "[2] List of Items" << endl;
		cout << "[0] exit program" << endl;
		cin >> fselection;

		switch (fselection){
		case 1:
			system("cls");
			cout << "Your Final Price: $" << total << endl;
			cout << "Your Total Items: " << Titems << endl;
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "Grocery List:" << endl;
			for (int i = 0; i < Items.size(); i++) {
				cout << i + 1 << ". " << Items[i] << " " << endl;

			}
			system("pause");


			break;

		}
	} while (fselection != 0);
		return 0;
	}