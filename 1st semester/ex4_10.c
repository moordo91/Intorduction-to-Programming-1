#include<stdio.h>

void leaf_year();
void operation();
void calculator();
void changer();

void main() {
    // operation();
    // leaf_year();
    // calculator();
    // changer();
}


void operation() {
    float a, b, result;
    printf("첫번째 계산할 값을 입력하세요. ==> ");
    scanf_s("%f", &a);
    printf("두번째 계산할 값을 입력하세요. ==> ");
    scanf_s("%f", &b);
    printf("%5.2f + %5.2f = %5.2f\n", a, b, a + b);
    printf("%5.2f - %5.2f = %5.2f\n", a, b, a - b);
    printf("%5.2f * %5.2f = %5.2f\n", a, b, a * b);
    printf("%5.2f / %5.2f = %5.2f\n", a, b, a / b);
    printf("%d + %d = %d\n", (int)a, (int)b, (int)a % (int)b);
}


void leaf_year() {
    int year;
    printf("년도를 입력하세요. : ");
    scanf_s("%d", &year);

    int y = 0;

    y = (year % 4 == 0) ?
        ((year % 100 == 0) ?
            ((year % 400 == 0) ? 1 : 0)
            : 1)
        : 0;

    (y == 1) ? printf("%d 년은 윤년입니다.", year) : printf("%d 년은 윤년이 아닙니다.", year);
}

void calculator() {
    char ch;
    int a, b;

    printf("첫번째 수를 입력하세요 : ");
    scanf_s("%d", &a);
    printf("계산할 연산자를 입력하세요 : ");
    scanf_s(" %c", &ch, 1);
    printf("두번째 수를 입력하세요 : ");
    scanf_s("%d", &b);

    if (ch == '+')
        printf("%d %c %d = %d 입니다.", a, ch, b, a + b);
    else if (ch == '-')
        printf("%d %c %d = %d 입니다.", a, ch, b, a - b);
    else if (ch == '*')
        printf("%d %c %d = %d 입니다.", a, ch, b, a * b);
    else if (ch == '/')
        printf("%d %c %d = %f 입니다.", a, ch, b, (float)a / (float)b);
    else if (ch == '%')
        printf("%d %c %d = %d 입니다.", a, ch, b, a % b);
    else
        printf("연산자를 잘못 입력했습니다.");
}

void changer() {
    int money;
    printf(" ## 교환할 돈은 ? ");
    scanf_s("%d", &money);
    printf("\n");

    printf(" 오백원짜리 ==> %d 개\n", money / 500);
    money %= 500;
    printf(" 백원짜리   ==> %d 개\n", money / 100);
    money %= 100;
    printf(" 오십원짜리 ==> %d 개\n", money / 50);
    money %= 50;
    printf(" 십원짜리   ==> %d 개\n", money / 10);
    money %= 10;
    printf(" 바꾸지 못한 잔돈 ==> %d 원\n", money);
}
