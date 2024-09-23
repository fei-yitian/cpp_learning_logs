#include"stock.h"
Stock::Stock(const string & co,double pr){
    m_name=co;
    m_val=pr;
}
const Stock & Stock::topval(const Stock & s) const{
    if(s.m_val>m_val)
        return s;
    else
        return *this;
}
void Stock::show()const{
    cout<<"name:"<<m_name<<endl;
    cout<<"val:"<<m_val<<endl;
}