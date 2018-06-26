#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;	//unsigned char表示无符号字符类型，取值范围是[0-255]

void show_bytes(byte_pointer start, size_t len) {
	size_t i;
	for(i = 0; i < len; i++)
		printf("%.2x ", start[i]);		//%x表示用16进制输出数据
	printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val) {
	int ival = val;
	float fval = (float) ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

int main(int argc, char const *argv[])
{
	test_show_bytes(12345);
	char *x = "abcdef";
	show_bytes((byte_pointer) x, strlen(x) + 1);
	return 0;
}