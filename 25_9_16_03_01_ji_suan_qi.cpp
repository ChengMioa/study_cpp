//简单计算器分别输入两个数 和运算符(+-*/)来输出 结果 
#include <iostream>//标准头文件 
using namespace std;//创建空间 
int main(){//主函数
	//cin 输入控制流
	int a,b;

	char c;
	cin >>a>>c>>b;
	//cout 输出流
	while(1){
		switch(c){
			case '+':cout<<a<<c<<b<<"="<<a+b;break;
			case '-':cout<<a<<c<<b<<"="<<a-b;break;
			case '/':if(a==0||b==0){
					cout<<"除数与被除数不能小于等于等于0，请重新输入"<<endl;
					break;
				}else{
					cout<<a<<c<<b<<"="<<a/b;break;
				}
			case '*':cout<<a<<c<<b<<"="<<a*b;break;
		}		
		cout <<endl;
		cin >>a>>c>>b;
	}
	return 0;//主函数返回值 
 } 
