#pragma once
#include"Customer.h"
#include"Product.h"
class Receipt
{
public:
	int ID;
	int customerID;
	int totalprice;
	const int shipmentprice = 30;
	vector<Product> p;
	Customer C;

public:
	void receipt(vector <Product> p, float &sum);

};
