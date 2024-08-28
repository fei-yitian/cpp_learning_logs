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
