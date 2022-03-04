#include <stdio.h>
char tableA[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tableB[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror_char(c)
{
    for(int i=0; tableA[i]!=0; i++)
    {
        if( c==tableA[i] ) return tableB[i];
    }
    return ' ';
}
int main()
{
    char c;
    scanf("%c", &c);
    char ans = mirror_char(c);
    printf("他的鏡像字是:%c",ans);
}
