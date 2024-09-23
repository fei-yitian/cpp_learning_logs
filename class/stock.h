#pragma once
#include<iostream>
#include<string>
using namespace std;
class Stock{
    private:
        string m_name;
        double m_val;
    public:
        Stock(const string & co,double pr);
        const Stock & topval(const Stock & s) const;
        void show()const;
};