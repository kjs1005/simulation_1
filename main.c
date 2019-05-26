#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct company
{
	char name[30],employee[10];
	int quota;
};
struct individual
{
	char name[10],tel[12];
	int quota;
};
union client
{
	struct company comp;
	struct individual indiv;
};

int main(int argc, char *argv[]) {
	
	int choice;
	union client c;
	
	printf("請選擇1.企業團體意外保險,2.個人意外保險:");
	scanf("%d",&choice);
	if(choice==1)
	{
	printf("請輸入企業名稱");
	scanf("%s",c.comp.name);
	printf("請輸入員工姓名");
	scanf("%s",c.comp.employee);
	printf("請輸入投保金額");
	scanf("%d",&(c.comp.quota));
	printf("企業名稱:%s\n",c.comp.name);
	printf("員工姓名:%s\n",c.comp.employee);
	printf("投保金額:%d\n",c.comp.quota);
	}
	else if(choice==2)
	{
		printf("請輸入姓名:");
		scanf("%s",c.indiv.name);
		printf("請輸入個人電話:");
		scanf("%s",c.indiv.tel); 
		printf("請輸入投保金額:"); 
		scanf("%s",&(c.indiv.quota));
		printf("個人姓名:%s\n",c.indiv.name);
		printf("個人電話:%s\n",c.indiv.tel);
		printf("投保金額:%d\n",c.indiv.quota);
	}
	else printf("輸入錯誤\n");
	
	system("pause");
	return 0;
}
