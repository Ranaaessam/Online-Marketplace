#include "ShoppingCart.h"
#include <iostream>
#include<assert.h>
using namespace std;

vector<Product> ShoppingCart::AddToCart(vector<Product> item, int x)
{
	vector < Product> products(x);
	int id;
	int num;
	string choice;

	for (int i = 0; i < item.size(); i++)
	{
		cout << "Do you want to add item ?" << endl;
		cin >> choice;


		if (choice == "Yes" || choice == "yes")
		{
			cout << "Enter prodcut id " << endl;
			cin >> id;
			products[i].P_ID = id;
			cout << "Enter your id \n";
			cin >> products[i].C_ID;
			cout << " how many items you want to add ?" << endl;
			cin >> num;

			if (item[i].Amount >= num)
			{
				cout << "Added to cart " << endl;
				item[i].Amount = item[i].Amount - num;
			}
			else
			{
				cout << "sorry ! this amount not available " << endl;
				continue;
			}
			cout << "Please rate the product from 1 to 5" << endl;
			cin >> products[i].rate;
			if (products[i].rate < 0 && products[i].rate> 5)
			{
				cout << "Please rate the product from 1 to 5" << endl;
				cin >> products[i].rate;
			}
			if (id == item[i].P_ID)
			{

				products[i].P_ID = item[i].P_ID;
				products[i].Name = item[i].Name;
				products[i].Category = item[i].Category;
				products[i].Amount = num;
			}
		}

		else
		{
			break;
		}



	}
	return products;
}