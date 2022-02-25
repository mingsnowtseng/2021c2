# 2021c2

## practise 迴文 1
```C

#include <stdio.h>
#include <string.h>
char line[1000];
char mirror(char c){
    if(c=='A') return 'A';
    if(c=='E') return '3';
    if(c=='H') return 'H';
    if(c=='I') return 'I';
    if(c=='J') return 'L';
    if(c=='L') return 'J';

    if(c=='M') return 'M';
    if(c=='O') return 'O';
    if(c=='S') return '2';
    if(c=='T') return 'T';
    if(c=='U') return 'U';
    if(c=='V') return 'V';
    if(c=='W') return 'W';
    if(c=='X') return 'X';

    if(c=='Y') return 'Y';
    if(c=='Z') return '5';
    if(c=='1') return '1';
    if(c=='2') return 'S';
    if(c=='3') return 'E';
    if(c=='5') return 'Z';
    if(c=='8') return '8';


    return ' ';
}
int isE3(){
    int N = strlen(line);
    for(int i=0; i<N; i++)
    {
        char mirrored =  mirror( line[i] ) ;
        if(mirrored != line[N-1-i]) return 0;///bad++;
    }
    return 1;///good
}
int isABA(){
    ///int bad=0;
    int N = strlen(line);
    for(int i=0; i<N; i++)
    {
        if(line[i] != line[N-1-i]) return 0;///bad++;
    }
    return 1;///good
}
int main()
{
    while(scanf("%s",line)==1)
    {
	
	    int m=isE3();
	    int p=isABA();
	    if( p==1 && m==0 ) printf("%s -- is a regular palindrome.\n\n", line);
	    if( p==1 && m==1 ) printf("%s -- is a mirrored palindrome.\n\n", line);
	    if( p==0 && m==1 ) printf("%s -- is a mirrored string.\n\n", line);
	    if( p==0 && m==0 ) printf("%s -- is not a palindrome.\n\n", line);
	}
}
```
