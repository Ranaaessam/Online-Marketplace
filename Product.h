#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Product
{
public:

    int P_ID = 0;
    float Price = 0.0;
    string Name;
    string Category;
    int Amount = 0;
    float rate;
    int C_ID;



public:
    vector<Product> Info(int x);
};
