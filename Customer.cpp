#include "Customer.h"
#include"Product.h"

float Customer::Calculate_price(vector<Product> p, int Max)
{
	float* calc = new float[100];
	float sum = 0.00;
	for (int i = 0; i <p.size(); i++) {

		calc[i] = p[i].Price * p[i].Amount;
		sum = sum + calc[i];
	}
	return sum;
}

void Customer::customer_signin()
{
	cust C;

	cout << "Please enter your ID" << endl;
	cin >> C.c_ID;
	cout << "Please enter your Name" << endl;
	cin >> C.c_name;
	cout << "Please enter your Address" << endl;
	cin >> C.c_address;
	cout << "Please enter your Phone number" << endl;
	cin >> C.c_phonenum;
	cout << "Please enter your Email" << endl;
	cin >> C.c_email;


}
void Customer::Browse_Category(vector<Product> items, int size)
{
	int choice;
	cout << "\t1- Grocery \n";
	cout << "\t2- Electronics  \n";
	cout << "\t3- Clothes \n";
	cout << "\t4- Personal Care \n";
	cout << "\t Enter the number of category \n";
	cin >> choice;
	for (int i = 0; i < 1; i++)
	{
		cout << "ID: \t \t " << "Name: \t\t " << "Price:\t \t" << "Category:\t\t " << " Amount: \t \n";
		switch (choice)
		{
		case 1:
		{
			for (int j = 0; j < size; j++)
			{
				if (items[j].Category == "Grocery" || items[j].Category == "grocery")
					cout << items[j].P_ID << "\t" << "\t" << items[j].Name << "\t" << "\t" << items[j].Price << "\t" << "\t" << items[j].Category << "\t" << "\t" << items[j].Amount << endl;
			}
		}
		break;
		case 2:
		{
			for (int j = 0; j < size; j++)
			{
				if (items[j].Category == "Electronics" || items[j].Category == "electronics")
					cout << items[j].P_ID << "\t" << "\t" << items[j].Name << "\t" << "\t" << items[j].Price << "\t" << "\t" << items[j].Category << "\t" << "\t" << items[j].Amount << endl;
			}
			break;
		}
		case 3:

			for (int j = 0; j < size; j++)
			{
				if (items[j].Category == "Clothes" || items[j].Category == "clothes")
					cout << items[j].P_ID << "\t" << "\t" << items[j].Name << "\t" << "\t" << items[j].Price << "\t" << "\t" << items[j].Category << "\t" << "\t" << items[j].Amount << endl;
			}
			break;
		case 4:

			for (int j = 0; j < size; j++)
			{
				if (items[j].Category == "Personal care" || items[j].Category == "personal care")
					cout << items[j].P_ID << "\t" << "\t" << items[j].Name << "\t" << "\t" << items[j].Price << "\t" << "\t" << items[j].Category << "\t" << "\t" << items[j].Amount << endl;
			}
			break;

		default:
			cout << " Cetegory doesn't exist \n";
			break;
		}

	}
}

float Customer::Redeem_code(float sum)
{
	string choice, R_code;
	bool Running = true;
	cout << " Do you Redeem code \n";
	cin >> choice;

	if (choice == "yes" || choice == "Yes")
	{
		cout << " Enter your code please\n";
		cin >> R_code;
		while (Running == true)
		{
			if (R_code == "wafar25")
			{
				cout << "Sum is " << sum * 0.25 << endl;
				return sum * 0.25;
				Running = false;
			}
			else if (R_code == "disc50")
			{
				cout << "Sum is " << sum * 0.5 << endl;
				return sum * 0.5;
				Running = false;
			}
			else
			{
				cout << " Invalide code please try again \n";
				cin >> R_code;
				Running = true;
			}
		}

	}
	else
	{
		return sum;
	}

}

void Customer::Show_Menu( vector<Product> arr, int size)
{

	cout << "ID: \t \t " << "Name: \t\t " << "Price:\t \t" << "Category\t\t " << " Amount: \t \n";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i].P_ID << "\t" << "\t" << arr[i].Name << "\t" << "\t" << arr[i].Price << "\t" << "\t" << arr[i].Category << "\t" << "\t" << arr[i].Amount << endl;
	}
}


vector<Product> Customer::Show_mostrated(vector<Product> p, int x)
{

	vector <Product> prod;
	for (int i = 0; i < prod.size(); i++)
	{
		if (prod[i].rate <= 5.0 && prod[i].rate >= 4.0)
		{
			cout << prod[i].P_ID << "\t" << "\t" << prod[i].Name << "\t" << "\t" << prod[i].Price << "\t" << "\t" << prod[i].Category << "\t" << "\t" << prod[i].Amount << "\t" << "\t" << prod[i].rate << endl;
		}
		else if (prod[i].rate <= 4.0 && prod[i].rate >= 3.0)
		{
			cout << prod[i].P_ID << "\t" << "\t" << prod[i].Name << "\t" << "\t" << prod[i].Price << "\t" << "\t" << prod[i].Category << "\t" << "\t" << prod[i].Amount << "\t" << "\t" << prod[i].rate << endl;
		}
		else if (prod[i].rate <= 3.0 && prod[i].rate >= 2.0)
		{
			cout << prod[i].P_ID << "\t" << "\t" << prod[i].Name << "\t" << "\t" << prod[i].Price << "\t" << "\t" << prod[i].Category << "\t" << "\t" << prod[i].Amount << "\t" << "\t" << prod[i].rate << endl;
		}
		else
			cout << prod[i].P_ID << "\t" << "\t" << prod[i].Name << "\t" << "\t" << prod[i].Price << "\t" << "\t" << prod[i].Category << "\t" << "\t" << prod[i].Amount << "\t" << "\t" << prod[i].rate << endl;
	}

	return prod;
}
