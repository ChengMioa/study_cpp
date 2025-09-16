#include <iostream>//标准头文件 
using namespace std;//创建空间 
int main(){//主函数 
//控制输出  关于cout.write()的用法 
  			//原型为 cout.write( const * s,int n)
			cout.write("hello,world!",6);
			//意思是原封不动的输出6个字符，n是控制字符串的长度 
	return 0;//主函数返回值为0 
}
