#include <stdio.h>
#include <stdlib.h>

char* my_strcat(const char* s1, const char* s2);

int main(void) {
	char* s1 = "Hello ";
	char* s2 = "world.";
	char* s = my_strcat(s1, s2);
	puts(s1);
	puts(s2);
	puts(s);

	return 0;
}

char* my_strcat(const char* s1, const char* s2) {
	char* s = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (s == NULL) {
		// ��������
		return NULL;
	}
	strcpy(s, s1);
	strcat(s, s2);
	return s;
}