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
	// 파일에 출력하기
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

	printf("어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
	scanf("%d", &coffee);

	printf("\n# 1.뜨거운 물을 준비한다.\n");
	printf("# 2.종이컵을 준비한다.\n");

	switch (coffee)
	{
	case 1:
		printf("# 3. 보통커피를 탄다.\n");
		break;
	case 2:
		printf("# 3. 설탕커피를 탄다.\n");
		break;

	case 3:
		printf("# 3. 블랙커피를 탄다.\n");
		break;
	default:
		printf("# 3. 아무거나 탄다.\n");
		break;
	}

	printf("# 4. 물을 붓는다.\n");
	printf("# 5. 스푼으로 저어서 녹인다.\n");


	printf(" 커피가 준비 되었습니다.\n");
}

int autocoffeemachine(int button)
{
	printf("\n# 1. (자동으로) 뜨거운 물을 준비한다.\n");
	printf("# 2. (자동으로) 종이컵을 준비한다.\n");

	switch (button)
	{
	case 1:
		printf("# 3. (자동으로) 보통커피를 탄다.\n");
		break;
	case 2:
		printf("# 3. (자동으로) 설탕커피를 탄다.\n");
		break;

	case 3:
		printf("# 3. (자동으로) 블랙커피를 탄다.\n");
		break;
	default:
		printf("# 3. (자동으로) 아무거나 탄다.\n");
		break;
	}

	printf("# 4. (자동으로) 물을 붓는다.\n");
	printf("# 5. (자동으로) 스푼으로 저어서 녹인다.\n");

	return 0;

	//void main() 들어갈 것
	//int coffee;
	//int ret;

	//printf("A님 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
	//scanf("%d", &coffee);

	//ret = autocoffeemachine(coffee);

	//printf("A님. 커피가 준비 되었습니다.\n");

	//printf("B님 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
	//scanf("%d", &coffee);

	//ret = autocoffeemachine(coffee);

	//printf("B님. 커피가 준비 되었습니다.\n");

	//printf("C님 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
	//scanf("%d", &coffee);

	//ret = autocoffeemachine(coffee);

	//printf("C님. 커피가 준비 되었습니다.\n");
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
	printf("void형 함수는 돌려줄 게 없음\n");

}
int func2()
{
	return 100;

}

void function1(int a)
{
	a = a + 1;
	printf("전달받은 a --> %d\n", a);
}

void functionjuso(int* a)
{
	*a = *a + 1;
	printf("전달받은 a ==> %d\n", *a);
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
		//printf("출력하고 싶은 단을 입력 : ");
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
			str[i] = toupper(str[i]);  // 소문자 → 대문자
		}
		else if (isupper(str[i])) {
			str[i] = tolower(str[i]);  // 대문자 → 소문자
		}
		// 공백, 숫자 등은 그대로 둠
	}
}

//int lotto[6];
//int i, j, num;
//int isDuplicate;
//
//srand((unsigned int)time(NULL));  // 시드 초기화
//
//printf("로또 추첨을 시작합니다.\n");
//printf("추첨된 로또 번호 -> ");
//
//i = 0;
//while (i < 6) {
//	num = rand() % 45 + 1;  // 1~45 사이 난수
//	isDuplicate = 0;
//
//	// 중복 검사
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
//// 출력
//for (i = 0; i < 6; i++) {
//	printf("%d ", lotto[i]);
//}
//printf("\n");
//
//return 0;