#pragma once
#include"Product.h"
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
class Customer
{
private:
	struct cust {
		int c_ID = -1;
		string c_name;
		string c_address;
		string c_email;
		int c_phonenum = -1;
	};
	int count = 0;

public:

	float Calculate_price(vector<Product> p, int Max);
	void customer_signin();
	void Browse_Category(vector<Product> p, int size);
	float Redeem_code(float sum);
	void Show_Menu( vector<Product> arr, int size);
	vector<Product> Show_mostrated(vector<Product> p, int x);
	



};

