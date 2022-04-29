#include <stdio.h>
#include <string.h>
class Record
{
public:
    char name[30];
    int grade;
}
Record student[100];
int main()
{
    FILE * fin = fopen("input.txt", "r");
    int N;
    fscanf(fin, "%d", &N);
    for(int i=0; i<N; i++)
    {
        fscanf(fin, "%s %d", student[i].name, &student[i].grade);
    }
    for(int k=0; k<N-1; k++)
	{
		for(int i=0; i<N-1; i++)
		{
			if(student[i].grade[i] < student[i].grade[i+1])
			{
				Record temp = student[i];
				student[i] = student[i+1];
				student[i+1] = temp;
			}
		}
	}
    for(int i=0; i<N; i++)
    {
        printf("%s %d\n",student.name[i], student.grade[i]);
    }
}
