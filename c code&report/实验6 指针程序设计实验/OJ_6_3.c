#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n, m = 0, cnt = 0;
char* p;
char s[100], tmp[100];
void del(char n[100]) 
{
	int i = 0, j = 0, k = 0;
	while (s[i] == ' '||s[i] == '\t')i++;
	for (j = i; j < strlen(s); j++) {
		while (s[j] == ' ')j++;
		if (s[j - 1] == ' ' && j != i) {
			tmp[k++] = ' ';
		}

		tmp[k++] = s[j];
	}
	cnt = strlen(tmp);
	for (i = 0; i < cnt; i++)
		s[i] = tmp[i];
	for (i = 0; i < 100; i++) tmp[i] = '\0';
}
int main() {
	scanf("%d", &n);
	getchar();
	for (m = 0; m < n; m++) {
		fgets(s, 100, stdin);
		del(s);
		int i = 0;
		for (i = 0; i < cnt - 1; i++)
			printf("%c", s[i]);
		if (m != (n - 1)) printf("\n");
		for (i = 0; i < 100; i++) s[i] = '\0';
		cnt = 0;
	}

}

