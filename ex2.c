#include <stdio.h>
#include <string.h>
#define WORD_SIZE 26
int main (void)
{
	char word[WORD_SIZE];
    int i;
	printf("Input a word:/n");
	scanf("%s",word);
	i = strlen(word);
	for(;i >= 0; i--)
		printf("%c",word[i]);
	system("pause");
	return 0;
}
