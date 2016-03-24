#pragma once
#include <vector>
#include <string>

using namespace std;

class items{
private:
	int TotalItems;
	double total;
	vector<string>item;

public:
	void setTotalItems(int a);
	int getTotalItems();
	void setTotal(int b);
	double getTotal();
	string setItem(vector<string>c);
	string getItem();

};