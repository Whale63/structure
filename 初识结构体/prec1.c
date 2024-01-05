#include<stdio.h>
////创建学生类型
struct stu
{
	char name[20];
	int age;
	double score;
};
////创建一本书
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};

int main()
{
	struct stu s = { "张三",20,85.5 };//结构体的创建和初始化
	
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
    struct stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);//结构体变量.成员变量
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}