#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define N 4096

int main(int argc, char *argv[]) {
	// cp src dest
	if (argc != 3) {
		fprintf(stderr, "Invalid arguments.\n");
		exit(1);
	}

	FILE* src = fopen(argv[1], "rb");
	if (src == NULL) {
		fprintf(stderr, "Error: open %s failed.\n", argv[1]);
		exit(1);
	}

	FILE* dest = fopen(argv[2], "wb");
	if (dest == NULL) {
		fprintf(stderr, "Error: open %s failed.\n", argv[2]);
		fclose(src);
		exit(1);
	}

	// 读写数据
	// 每次读一个字符
	//int ch;
	//while ((ch = fgetc(src)) != EOF) {
	//	fputc(ch, dest);
	//}
	
	//每次从src文件中读一行数据放到buf数组中，然后从buf数组中写到dest文件中
	//char buf[N];
	//while (fgets(buf, N, src) != NULL) {
	//	fputs(buf, dest);
	//}

	//二进制文件的读写操作
	char buf[N];
	int n; // 读入对象的个数
	while ((n = fread(buf, 1, N, src)) != 0) {
		fwrite(buf, 1, n, dest);
	}
	// 关闭流
	fclose(src);
	fclose(dest);

	return 0;
}