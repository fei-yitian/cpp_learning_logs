#include<iostream>
using namespace std;
int main(){
    double t,c,d;
    while((cin>>t>>c)&&c<=t){
        cout<<t<<endl<<c<<endl;
    }
    cin>>d;
    cout<<d;
    return 0;
}
//该code可以看出以下真理：
//1.当cin两个变量时，可以通过" "切换，也可以通过"/n"切换；
//2.当cin的类型与设置类型不匹配时,cin无效，原参数保持默认值；
//3.如果cin期望用户输入数字，但是用户输入了字母，该字母会留在队列中，并返回一个false，使得循环结束

//cin.get(input,size)方法将一直读取输入，直到到达行尾或读取了size-1个字符为止，读到行尾的时候，他会把换行符留在输入队列中，所以需要在后面代码中再使用cin.get()来把换行符'\n'给读掉。
