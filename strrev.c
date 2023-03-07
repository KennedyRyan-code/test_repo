#include <stdio.h>

void reversChar(char *str);

int main(void) {

  char *str = "Hello";
  reversChar(str);
  return 0;
}

void reversChar(char *str)
{
	int i, len = 0;

	while (str[len++] != '\0'){
	len++;
	}
	for (i = len; i >= 0; i--){
	printf("%c", str[i]);
	}
	printf("\n");
}
