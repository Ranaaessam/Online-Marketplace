#include "Receipt.h"
#include<vector>
#include"Product.h"
#include<iostream>
#include"Customer.h"
using namespace std;

void Receipt::receipt(vector<Product> p, float &sum)
{

	cout << "\t\t\t\t\t\t Your Receipt" << endl;
	for (int i = 0; i < p.size(); i++)
	{
		cout << "Your ID:" << p[i].C_ID << endl;
		cout << "Name of product:" << p[i].Name << endl;
		cout << "ID of product is:" << p[i].P_ID << endl;
		cout << "The amount is :" << p[i].Amount << endl;
	}
	cout << "Total price is :" << sum << endl;
	cout << "Shipment price is :" << shipmentprice << endl;
}

