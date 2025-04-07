#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void coffeemachine();
int autocoffeemachine(int button);
int plus(int v1, int v2);
int calc(int v1, int v2, int op);
void func1();
int func2();
void function1(int a);
void functionjuso(int* a);
void function3(char a, char b);
void function4(char* a, char* b);
int gugudan(int dan);

void upperlower(char* str);


void main()
{
	// ���Ͽ� ����ϱ�
	FILE* wfp;
	int i, k;

	wfp = fopen("c:\\ClangFiletest\\gugu.txt", "w");
	for (i = 2; i <= 9; i++)
	{
		fprintf(wfp, " #The %d Dan#", i);
	}
	fprintf(wfp, "\n\n");
	for (i = 1;i <= 9;i++)
	{
		for (k = 2; k <= 9; k++)
		{
			fprintf(wfp, " %2d X %2d = %2d  ", k,i,k*i);
		}
		fprintf(wfp, "\n");
	}
	fclose(wfp);
}

void coffeemachine()
{
	int coffee;

	printf("� Ŀ�� �帱���? (1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);

	printf("\n# 1.�߰ſ� ���� �غ��Ѵ�.\n");
	printf("# 2.�������� �غ��Ѵ�.\n");

	switch (coffee)
	{
	case 1:
		printf("# 3. ����Ŀ�Ǹ� ź��.\n");
		break;
	case 2:
		printf("# 3. ����Ŀ�Ǹ� ź��.\n");
		break;

	case 3:
		printf("# 3. ��Ŀ�Ǹ� ź��.\n");
		break;
	default:
		printf("# 3. �ƹ��ų� ź��.\n");
		break;
	}

	printf("# 4. ���� �״´�.\n");
	printf("# 5. ��Ǭ���� ��� ���δ�.\n");


	printf(" Ŀ�ǰ� �غ� �Ǿ����ϴ�.\n");
}

int autocoffeemachine(int button)
{
	printf("\n# 1. (�ڵ�����) �߰ſ� ���� �غ��Ѵ�.\n");
	printf("# 2. (�ڵ�����) �������� �غ��Ѵ�.\n");

	switch (button)
	{
	case 1:
		printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��.\n");
		break;
	case 2:
		printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��.\n");
		break;

	case 3:
		printf("# 3. (�ڵ�����) ��Ŀ�Ǹ� ź��.\n");
		break;
	default:
		printf("# 3. (�ڵ�����) �ƹ��ų� ź��.\n");
		break;
	}

	printf("# 4. (�ڵ�����) ���� �״´�.\n");
	printf("# 5. (�ڵ�����) ��Ǭ���� ��� ���δ�.\n");

	return 0;

	//void main() �� ��
	//int coffee;
	//int ret;

	//printf("A�� � Ŀ�� �帱���? (1:����, 2:����, 3:��) ");
	//scanf("%d", &coffee);

	//ret = autocoffeemachine(coffee);

	//printf("A��. Ŀ�ǰ� �غ� �Ǿ����ϴ�.\n");

	//printf("B�� � Ŀ�� �帱���? (1:����, 2:����, 3:��) ");
	//scanf("%d", &coffee);

	//ret = autocoffeemachine(coffee);

	//printf("B��. Ŀ�ǰ� �غ� �Ǿ����ϴ�.\n");

	//printf("C�� � Ŀ�� �帱���? (1:����, 2:����, 3:��) ");
	//scanf("%d", &coffee);

	//ret = autocoffeemachine(coffee);

	//printf("C��. Ŀ�ǰ� �غ� �Ǿ����ϴ�.\n");
}

int plus(int v1, int v2)
{
	int result;
	result = v1 + v2;
	return result;
}

int calc(int v1, int v2, int op)
{
	int result;

	switch (op)
	{
	case 1:
		result = v1 + v2;
		break;
	case 2:
		result = v1 - v2;
		break;
	case 3:
		result = v1 * v2;
		break;
	case 4:
		result = v1 / v2;
		break;


	}

	return result;
}

void func1()
{
	printf("void�� �Լ��� ������ �� ����\n");

}
int func2()
{
	return 100;

}

void function1(int a)
{
	a = a + 1;
	printf("���޹��� a --> %d\n", a);
}

void functionjuso(int* a)
{
	*a = *a + 1;
	printf("���޹��� a ==> %d\n", *a);
}

void function3(char a, char b)
{
	int imsi;

	imsi = a;
	a = b;
	b = imsi;

}
void function4(char *a, char *b)
{
	int imsi;

	imsi = *a;
	*a = *b;
	*b = imsi;

}

int gugudan(int dan)
{
	//void main();
		//int input;
		//printf("����ϰ� ���� ���� �Է� : ");
		//scanf("%d", &input);
		//gugudan(input);
	int i;

	for (i = 1; i <= 9; i++)
	{
		printf("%2d x %2d = %2d\n", dan, i, dan * i);
	}
	return 0;
}

void upperlower(char* str) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);  // �ҹ��� �� �빮��
		}
		else if (isupper(str[i])) {
			str[i] = tolower(str[i]);  // �빮�� �� �ҹ���
		}
		// ����, ���� ���� �״�� ��
	}
}

//int lotto[6];
//int i, j, num;
//int isDuplicate;
//
//srand((unsigned int)time(NULL));  // �õ� �ʱ�ȭ
//
//printf("�ζ� ��÷�� �����մϴ�.\n");
//printf("��÷�� �ζ� ��ȣ -> ");
//
//i = 0;
//while (i < 6) {
//	num = rand() % 45 + 1;  // 1~45 ���� ����
//	isDuplicate = 0;
//
//	// �ߺ� �˻�
//	for (j = 0; j < i; j++) {
//		if (lotto[j] == num) {
//			isDuplicate = 1;
//			break;
//		}
//	}
//
//	if (!isDuplicate) {
//		lotto[i] = num;
//		i++;
//	}
//}
//
//// ���
//for (i = 0; i < 6; i++) {
//	printf("%d ", lotto[i]);
//}
//printf("\n");
//
//return 0;