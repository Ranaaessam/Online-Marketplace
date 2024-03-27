#include "Product.h"
#include<assert.h>
#include<iostream>
using namespace std;
vector<Product> Product::Info(int x)
{
	vector<Product> v(x);
	int id_check;
	int cat_check;

	for (int i = 0; i < x; i++)
	{
		cout << "Enter ID of product" << endl;
		cin >> id_check;
		assert(id_check > 0);
		v[i].P_ID = id_check;
		cout << "Enter Name of product" << endl;
		cin >> v[i].Name;
		cout << "Enter price of product" << endl;
		cin >> v[i].Price;
		cout << "1-grocery\t\t" << "2-electronics" << endl;
		cout << "3-clothes\t\t" << "4-personal care" << endl;
		cout << "Enter the category of product" << endl;
		cin >> cat_check;
		if (cat_check < 1 || cat_check >4)
		{
			cout << "wrong choice please choose again" << endl;
			cout << "1-grocery\t\t" << "2-electronics" << endl;
			cout << "3-clothes\t\t" << "4-personal care" << endl;
			cout << "Enter the category of product" << endl;
			cin >> cat_check;
		}
			switch (cat_check) {
			case 1: {
				v[i].Category = "grocecry";

				break;
			}
			case 2: {
				v[i].Category = "electronics";
				break;
			}
			case 3: {
				v[i].Category = "clothes";
				break;
			}
			case 4: {
				v[i].Category = "personal Care";
				break;
			}default:
				break;
			}

			cout << "Enter the amount of product" << endl;
			cin >> v[i].Amount;
		
	}

	return v;
}
