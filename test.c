

//include为包含，包含一个叫stdio.h的文件
#include <stdio.h>//与库函数呼应
//在使用输出或输入函数都需要使用此文件
//int是整型
//int在main函数前面表示：调用返回一个整型值
int main()//main为主函数：程序的入口，有且只有一个
{
	printf("hello\n");//print是打印 f(funcion)是函数=printf为打印函数，后面接（）
	//printf为库函数：是C语言本身提供使用的函数，用别人的东西，所以需要打招呼
	//“”内表示需要打印的内容，\n表示输出后换行
	return 0;//返回 0
}
