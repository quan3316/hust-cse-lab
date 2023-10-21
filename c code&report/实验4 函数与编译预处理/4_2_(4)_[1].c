#include <stdio.h>
#define CHANGE 0
int main()
{
	char s[80];
	int i;
	gets(s);
	#if CHANGE 
	for (i=0;i<80;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]-'A'+'a';
		}
		else if (s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-'a'+'A';	
		}
	}
	printf("%s",s);
	#else 
	printf("%s",s);
	#endif
	return 0;}
