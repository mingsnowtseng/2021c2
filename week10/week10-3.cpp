#include <stdio.h>
class Record
{
public:
    char name[30];
    int grade;
};
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
			if(student[i].grade < student[i+1].grade)
			{
				Record temp = student[i];
				student[i] = student[i+1];
				student[i+1] = temp;
			}
		}
	}
    for(int i=0; i<N; i++)
    {
        printf("%s %d\n",student[i].name, student[i].grade);
    }
}
