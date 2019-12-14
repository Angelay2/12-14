#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. 1/2 = 0, 0 不能作为除数
// 2. 左移一位表示 *2,右移一位相当于 /2;右移左侧补0还是补1看符号位
// 3. 按位异或两次会还原
// 4. 单目操作sizeof编译期间的求值(以 \0 结尾,比 strlen 大一)
int one(){
	// 关系运算的返回结果只有两个,1 为真, 0 为假
	int n = 10;
	if(5 < n < 20){
		// 先算5 < n,再判断 n < 20;
		// 若要表达数学上的比较关系,则应为 5 < n && n <20
		printf("hehe\n");
	}else{
		printf("haha\n");
	}

	system("pause");
	return 0;

}

//#define and &&
//#define or ||

//int two{
// 按位与操作: &  (把操作数按照二进制位进行计算)
// 逻辑与操作: && (把操作数当成真假值来进行计算, 结果 0 / 1)
// 逻辑或操作: || (把操作数当成真假值来进行计算, 结果 0 / 1)
//int two(){
	//int a = 1;
	//int b = 2;
	//// 1 => 0001
	//// 2 => 0010
	//printf("%d\n", a & b);// 输出 0
	//printf("%d\n", a && b);// 都为非 0, 全为真, 输出 1
	//int i = 0, a = 0, b = 2, d = 4;
	// i = a++ && ++b && d++;
	// a++ 的返回值为 0,为假
	// 对于逻辑与运算来说,如果左边为假,右侧表达式不用再求值
	// printf("a = %d\nb = %d\nd = %d\n", a, b, d);
	// 输出 1, 2, 4
	// i = a++||++b||d++;
	// 对于逻辑或运算来说,如果左侧表达式值为真
	// 那么整个表达式的值就确定了,后面表达式的值就不需要再计算了
	//printf("a = %d\nb = %d\nd = %d\n", a, b, d);
	// 输出 1, 3, 4
	// system("pause"); 
	//return 0;
//}

// 条件操作符
int Max(int x, int y){
	/*if (x > y){
		return x;
	}
	return y;*/
	return x > y ? x : y;
}

int three(){
	int x = 1;
	int y = 2;
	printf("%d\n", Max(x, y));
	system("pause");
	return 0;
}

// 找出 x , y 中大的值, 再 + 100
int MAX(int x,int y){
	//return x > y ? x : y + 100; 
	// 输出 20
	// 三位运算符它的优先级最低, 所以先算了 y + 100,
	// 上述表达式表示比较x,y谁大, 如果 x > y 成立,返回 x
	// 否则 若 x < y, 则返回 y + 100(看似正确)
	 return (x > y ? x : y) + 100;
	// 输出 120
}
int four(){
	printf("%d\n", MAX(20, 10));
	system("pause");
	return 0;
}

int five(){
	char arr[] = "i like beijng";
	printf("%d\n", strlen(arr));
	printf("%d\n", sizeof(arr));
	system("pause");
	return 0;
}


int main(){
	char a = 10;
	char b = 20;
	// a char -> int
	// b char -> int 
	// int + int -> int 
	// int -> char -> c
	char c = a + b;
	system("pause");
	return 0;
}
