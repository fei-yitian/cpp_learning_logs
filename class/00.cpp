#include "stock.h"
int main(){
    Stock stocks[3]={
        Stock("jack",1.5),
        Stock("rose",3.3),
        Stock("fyt",2.7)
    };
    int st;
    for (st=0;st<3;st++)
        stocks[st].show();
    const Stock * top=&stocks[0];
    for(st=1;st<3;st++)
        top=&top->topval(stocks[st]);//看懂这行
        cout<<"man!\n";
        top->show();
        return 0;
}