#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. 1/2 = 0, 0 ������Ϊ����
// 2. ����һλ��ʾ *2,����һλ�൱�� /2;������ಹ0���ǲ�1������λ
// 3. ��λ������λỹԭ
// 4. ��Ŀ����sizeof�����ڼ����ֵ(�� \0 ��β,�� strlen ��һ)
int one(){
	// ��ϵ����ķ��ؽ��ֻ������,1 Ϊ��, 0 Ϊ��
	int n = 10;
	if(5 < n < 20){
		// ����5 < n,���ж� n < 20;
		// ��Ҫ�����ѧ�ϵıȽϹ�ϵ,��ӦΪ 5 < n && n <20
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
// ��λ�����: &  (�Ѳ��������ն�����λ���м���)
// �߼������: && (�Ѳ������������ֵ�����м���, ��� 0 / 1)
// �߼������: || (�Ѳ������������ֵ�����м���, ��� 0 / 1)
//int two(){
	//int a = 1;
	//int b = 2;
	//// 1 => 0001
	//// 2 => 0010
	//printf("%d\n", a & b);// ��� 0
	//printf("%d\n", a && b);// ��Ϊ�� 0, ȫΪ��, ��� 1
	//int i = 0, a = 0, b = 2, d = 4;
	// i = a++ && ++b && d++;
	// a++ �ķ���ֵΪ 0,Ϊ��
	// �����߼���������˵,������Ϊ��,�Ҳ���ʽ��������ֵ
	// printf("a = %d\nb = %d\nd = %d\n", a, b, d);
	// ��� 1, 2, 4
	// i = a++||++b||d++;
	// �����߼���������˵,��������ʽֵΪ��
	// ��ô�������ʽ��ֵ��ȷ����,������ʽ��ֵ�Ͳ���Ҫ�ټ�����
	//printf("a = %d\nb = %d\nd = %d\n", a, b, d);
	// ��� 1, 3, 4
	// system("pause"); 
	//return 0;
//}

// ����������
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

// �ҳ� x , y �д��ֵ, �� + 100
int MAX(int x,int y){
	//return x > y ? x : y + 100; 
	// ��� 20
	// ��λ������������ȼ����, ���������� y + 100,
	// �������ʽ��ʾ�Ƚ�x,y˭��, ��� x > y ����,���� x
	// ���� �� x < y, �򷵻� y + 100(������ȷ)
	 return (x > y ? x : y) + 100;
	// ��� 120
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
