`const Stock & topval(const Stock & s) const;`
试着说明上述两个Stock和三个const分别指代什么  

`const Stock & Stock::topval(const Stock & s) const{`  
    `if(s.m_val>this->m_val)`  //这行的‘this—>’可以省略  
        `return s;`  
    `else`  
        `return *this;}`  
this是一个指针  
