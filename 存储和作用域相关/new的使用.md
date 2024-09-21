`int *pi=new int;`  
`int *pi=new int (7)`  
`int *ar=new int [3] {1,3,7}`  


**定位new运算符的使用：**  
`char buffer[50];//原始内存`  
`int *p4=new (buffer) int [20];`    
如果原始内存定义在全局，那么在局部中不能delete掉new的变量，程序跑完会自动释放。  