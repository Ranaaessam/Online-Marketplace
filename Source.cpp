#include <assert.h>
#include<string>
#include"Product.h"
#include"Seller.h"
#include"ShoppingCart.h"
#include"Customer.h"
#include"Receipt.h"
#include<iostream>

using namespace std;

int main()
{

    vector<Product> v;
    int amount_product;
    bool x = true, y = true;
    float total, R_total;
    int choice, c_choice;
    string yes;
    Customer c;
    Product p;
    Seller s;
    ShoppingCart sc;
    Receipt r;

    while (x) {
        cout << "\t\t\tPress 1 to be Seller\n";
        cout << "\t\t\tPress 2 to be Customer\n";
        cout << "\t\t\tPress 3 to Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            s.seller_sign();
            cout << " How Many Products do you want to add ?\n";
            cin >> amount_product;
            assert(amount_product > 0);
            v = p.Info(amount_product);
            cout << "Do you want to sign in as a customer ?\n";
            cin >> yes;
            if (yes == "yes" || yes == "Yes")
            {
                c.customer_signin();
                while (y)
                {
                    cout << "\t\t\tPress 1 to Show Menu\n";
                    cout << "\t\t\tPress 2 to Browse by category\n";
                    cout << "\t\t\tPress 3 to show most rated items \n";

                    cin >> c_choice;
                    switch (c_choice)
                    {
                    case 1:
                    {
                        c.Show_Menu(v, amount_product);
                        v = sc.AddToCart(v, amount_product);
                        total = c.Calculate_price(v, amount_product);
                        R_total = c.Redeem_code(total);
                        cout << " Do you want to check out \n";
                        cin >> yes;
                        cout << total;
                        break;
                    }
                    case 2:
                    {

                        c.Browse_Category(v, amount_product);
                        v = sc.AddToCart(v, amount_product);
                        total = c.Calculate_price(v, amount_product);
                        R_total = c.Redeem_code(total);
                        cout << " Do you want to check out \n";
                        cin >> yes;
                        if (yes == " yes" || yes == "Yes")
                        {
                            r.receipt(v,  total);
                            y = false;
                        }
                        else
                            continue;
                        break;
                    }
                    case 3:
                    {
                        v = c.Show_mostrated(v, amount_product);
                        break;
                    }
                    default:
                        break;
                    }
                }
            }
            else
                x = false;
            break;
        }
        case 2:
        {
            cout << " there is no product to show ! \n";
            break;
        }
        case 3:
        {
            x = false;
            break;
        }



        }
    }
}