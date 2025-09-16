#include <iostream>//标准头文件 
using namespace std;//创建空间 
int main(){//主函数 
//控制输出 
	//进制  8->oct  10->dec   16->hex 
	int a=28,b=30;
	cout<<oct<<a<<endl;//8进制		a   34
	cout<<dec<<a<<endl;//10进制		a   28
	cout<<hex<<a<<endl;//16进制     a   1c 
	/*
		为什么先cout<<oct<<a  而不是cout<<a<<oct 呢？ 
		因为oct <<a 是先  设置 八进制  再 以八进制格式输出a
		而a << oct  是先  输出（默认十进制）的a  再设置oct  此时oct对后面一个数有作用 
	*/ 
	cout <<a<<oct;//奇怪的是  输出    1c 
	cout <<" "<<a<<endl; // 这个输出  34 
	cout  <<a<<endl;//输出 34 
	cout  <<a<<endl;//输出 34
	//总结也就是说 
	return 0;//主函数返回值为0 
}
