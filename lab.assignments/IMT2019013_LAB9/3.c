//INPUT : Integer 'n' for the number of students' details to be taken as input
//OUTPUT: Details of the students line-wise
#include <stdio.h>
struct details					//Structure of details of a student
{
	char name[100];
	char roll[10];
	int age;
	int marks;
};
int main()
{
	int n;					//INPUT
	scanf("%d", &n);
	struct details p[n];
	//INPUT:
	for (int i=0; i<n; i++)
	{
		scanf("%s", p[i].name);		//Name of the student
		scanf("%s", p[i].roll);		//Roll-number of the student
		scanf("%d", &p[i].age);		//Age of the student
		scanf("%d", &p[i].marks);	//Marks of the student
	}
	//OUTPUT:Prints the details of each student line-wise
	for (int i=0; i<n; i++)	
	{
		printf("%s\n", p[i].name);	//Name of the student
		printf("%s\n", p[i].roll);	//Roll-number of the student
		printf("%d\n", p[i].age);	//Age of the student
		printf("%d\n", p[i].marks);	//Marks of the student
	}
	return 0;
}
