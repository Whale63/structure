#include<stdio.h>
////����ѧ������
struct stu
{
	char name[20];
	int age;
	double score;
};
////����һ����
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};

int main()
{
	struct stu s = { "����",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	
	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
    struct stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);//�ṹ�����.��Ա����
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}