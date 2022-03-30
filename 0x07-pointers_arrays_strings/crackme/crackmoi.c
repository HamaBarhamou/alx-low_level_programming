#include<stdio.h>
#include<string.h>

int main()
{
	char mot[100], secret[] = "barhamou07111989";
	printf("donner le mot de passe\n");
	scanf("%s",mot);
	printf("mo=%s\n",mot);
	if(strcmp(mot,secret))
		printf("Desolé mauvait mot de passe\n");
	else
		printf("Felicitation, vous avez acces au programme\n");
	return(0);
}
