//gcc是编译器命令，后面接的是命令行选项
//-o task1 表明生成的可执行文件名叫 task1, o是output的意思
//编译：gcc -o task1 task1.c
//执行：./task1

#include<stdio.h>

int main(int argc, char** argv)
{
	printf("hello world\n");
	return 0;
}