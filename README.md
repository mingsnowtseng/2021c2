# 2021c2

## practise 迴文 1  2022/02/26
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


## practise 迴文 2  2022/02/26

```C
#include <stdio.h>
#include <string.h>
char line[1000];

char table1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char table2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mirror(char c){
	for(int i=0; table1[i]!=0; i++){
		if( c == table1[i]) return table2[i];
	}
	return ' ';
}

int isPalindrome()
{
	int N=strlen(line);
	for(int i=0; i<N; i++){
		if( line[i] != line[N-1-i] ) return 0;//bad
	}
	return 1;//good
}
int isMirrored()
{
	int N=strlen(line);
	for(int i=0; i<N; i++){
		if( mirror(line[i]) != line[N-1-i]) return 0;//bad
	}
	return 1;//good
}
int main()
{
	while( scanf("%s", line) == 1 ){
		int m=isMirrored();
		int p=isPalindrome();
		if( p==1 && m==1 ) printf("%s -- is a mirrored palindrome.\n\n", line);
		if( p==1 && m==0 ) printf("%s -- is a regular palindrome.\n\n", line);
		if( p==0 && m==1 ) printf("%s -- is a mirrored string.\n\n", line);
		if( p==0 && m==0 ) printf("%s -- is not a palindrome.\n\n", line);
	}

}
```

## 頻率 1 2022/03/18
```C

#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while(gets(line))
	{
		if(t>1) printf("\n");
		
		int max=0;
		int ans[256]={};
		for(int i=0; line[i]!=0; i++)
		{
			char c = line[i];
			ans[c]++;
			if(ans[c]>max) max = ans[c];
		}
		for(int f=1; f<=max; f++)
		{
			for(int c=128; c>=32; c--)
			{
				if(ans[c]==f) printf("%d %d\n",c ,ans[c]);
			}
			t++;
		}
	}	
	return 0;
}

```

## 頻率 2 2022/03/18

```C

#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while(gets(line))
	{
		if(t>1) printf("\n");
		int ans[256]={};
		for(int i=0; line[i]!=0; i++)
		{
			char c = line[i];
			ans[c]++;
		}
		for(int f=1; f<=1000; f++)
		{
			for(int c=128; c>=32; c--)
			{
				if(ans[c]==f) printf("%d %d\n",c ,ans[c]);
			}
			t++;
		}
	}	
	return 0;
}

```
