#define MAX 10000
#include <stdio.h>
//常量
//字面常量
//const修饰的常变量
//#define定义的标识符常量
//枚举常量

int main()
{
	//字面常量举例
	3.14;
	10;       //浮点型常量
	'a';      //字符常量
	"abcdef"; //字符串常量
	
	//const修饰的常变量
	/*const*/int num = 10;//变量 若句前使用const函数固定，则下句num不可改变，否则报错
	                      //若使用const函数，此刻num就是常变量 - 具有常属性（不能被改变的属性）
	                      //但本质上还是变量
	                      //举例：int arr[10] = {0};//10个元素
	                      //const int n = 10；
	                      //int arr2[n] = {0};//n是变量，此处需使用常量，上句需使用常量而非coust修饰的变量，否则报错
	num = 20;
	printf("num = %d\n", num);//显示值为20

	//#define定义的标识符常量
	int n = MAX;//被#define定义，MAX不能改变
	printf("%d\n", n);

	//枚举常量
	//可以一一列举的常量
	//性别
	enum /*枚举关键字*/ Sex
	{
		//这种枚举类型的变量的未来可能取值：男 女 保密
		//这三个值即枚举常量
		MALE,//赋初值，赋上一个最开始的值，若MALE = 3，即结果为 3 4 5
		FEMALE,
		SECRET
	};
//int main()            此处使用，但不应与上文的main同时出现，故隔开
	enum Sex s = MALE;//这种变量取值只会是上述三种常量的值
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);//打印结果为 0 1 2，枚举常量的值默认从0开始

	return 0;
}

