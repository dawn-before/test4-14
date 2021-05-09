#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//double Pow(int n, int k){
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	
//	else
//		return n*Pow(n, k - 1);
//}
//int main(){
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//int main(){
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//}
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp){
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void Print2(Stu* ps){
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main(){
	Stu s = { "李四", 40, "123568787", "男" };
	Print1(s);
	Print2(&s);
	return 0;
}