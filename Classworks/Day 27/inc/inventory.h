#pragma once
#include <string>
using namespace std;


struct Product {
	int prod_code;
	string prod_name;
	int prod_stock;
	float prod_price;
};

class Inventory {
private:
	Product prod;

public:
	bool addProduct(Product);
    string editProductByName(string);
	int editProductByStock(int);
	int editProductByPrice(int);
	int searchProductByName(int);
	int searchProductByCode(int);
	bool deleteProduct(int);
	int generateBill();
};