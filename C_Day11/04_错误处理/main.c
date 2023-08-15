#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>

int main(void) {
	FILE* fp = fopen("test.txt", "r");
	if (fp == NULL) {
		perror("File open fail");
	}
	else {
		fclose(fp);
	}

	return 0;
}