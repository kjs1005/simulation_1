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
	
	printf("�п��1.���~����N�~�O�I,2.�ӤH�N�~�O�I:");
	scanf("%d",&choice);
	if(choice==1)
	{
	printf("�п�J���~�W��");
	scanf("%s",c.comp.name);
	printf("�п�J���u�m�W");
	scanf("%s",c.comp.employee);
	printf("�п�J��O���B");
	scanf("%d",&(c.comp.quota));
	printf("���~�W��:%s\n",c.comp.name);
	printf("���u�m�W:%s\n",c.comp.employee);
	printf("��O���B:%d\n",c.comp.quota);
	}
	else if(choice==2)
	{
		printf("�п�J�m�W:");
		scanf("%s",c.indiv.name);
		printf("�п�J�ӤH�q��:");
		scanf("%s",c.indiv.tel); 
		printf("�п�J��O���B:"); 
		scanf("%s",&(c.indiv.quota));
		printf("�ӤH�m�W:%s\n",c.indiv.name);
		printf("�ӤH�q��:%s\n",c.indiv.tel);
		printf("��O���B:%d\n",c.indiv.quota);
	}
	else printf("��J���~\n");
	
	system("pause");
	return 0;
}
