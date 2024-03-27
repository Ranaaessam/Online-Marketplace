#pragma once
#include"Product.h"

class ShoppingCart
{
public:
	vector<Product> products;
public:
	vector<Product> AddToCart(vector<Product> item, int x);
	
};

