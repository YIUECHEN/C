#include <stdio.h>
#include<string.h>

#if 0
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1) 10*4  40
	printf("%d\n", sizeof(ch));//(3)  10*1  10
	
	test1(arr);//指针大小 4
	test2(ch);//指针大小 4
	return 0;
}

int main(){
	int a = 10;
	int x = ++a;
	printf("%d\n", x);//11 先对a自增，再赋值给x

	int y = --a;

	printf("%d\n", y);//10 先对a自减，再赋值给y
	return 0;
}
int main(){
	int a = 10;
	int x = a++;
	printf("%d\n", x);//10 先赋值给x 在增加为11

	int y = a--;

	printf("%d\n", y);//11 先赋值给y 再减小为10
	return 0;
}

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	i = a++||++b||d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
    return 0;
}
#endif
