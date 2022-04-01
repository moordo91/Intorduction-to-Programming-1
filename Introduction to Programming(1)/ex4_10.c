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
    printf("ù��° ����� ���� �Է��ϼ���. ==> ");
    scanf_s("%f", &a);
    printf("�ι�° ����� ���� �Է��ϼ���. ==> ");
    scanf_s("%f", &b);
    printf("%5.2f + %5.2f = %5.2f\n", a, b, a + b);
    printf("%5.2f - %5.2f = %5.2f\n", a, b, a - b);
    printf("%5.2f * %5.2f = %5.2f\n", a, b, a * b);
    printf("%5.2f / %5.2f = %5.2f\n", a, b, a / b);
    printf("%d + %d = %d\n", (int)a, (int)b, (int)a % (int)b);
}


void leaf_year() {
    int year;
    printf("�⵵�� �Է��ϼ���. : ");
    scanf_s("%d", &year);

    int y = 0;

    y = (year % 4 == 0) ?
        ((year % 100 == 0) ?
            ((year % 400 == 0) ? 1 : 0)
            : 1)
        : 0;

    (y == 1) ? printf("%d ���� �����Դϴ�.", year) : printf("%d ���� ������ �ƴմϴ�.", year);
}

void calculator() {
    char ch;
    int a, b;

    printf("ù��° ���� �Է��ϼ��� : ");
    scanf_s("%d", &a);
    printf("����� �����ڸ� �Է��ϼ��� : ");
    scanf_s(" %c", &ch, 1);
    printf("�ι�° ���� �Է��ϼ��� : ");
    scanf_s("%d", &b);

    if (ch == '+')
        printf("%d %c %d = %d �Դϴ�.", a, ch, b, a + b);
    else if (ch == '-')
        printf("%d %c %d = %d �Դϴ�.", a, ch, b, a - b);
    else if (ch == '*')
        printf("%d %c %d = %d �Դϴ�.", a, ch, b, a * b);
    else if (ch == '/')
        printf("%d %c %d = %f �Դϴ�.", a, ch, b, (float)a / (float)b);
    else if (ch == '%')
        printf("%d %c %d = %d �Դϴ�.", a, ch, b, a % b);
    else
        printf("�����ڸ� �߸� �Է��߽��ϴ�.");
}

void changer() {
    int money;
    printf(" ## ��ȯ�� ���� ? ");
    scanf_s("%d", &money);
    printf("\n");

    printf(" �����¥�� ==> %d ��\n", money / 500);
    money %= 500;
    printf(" ���¥��   ==> %d ��\n", money / 100);
    money %= 100;
    printf(" ���ʿ�¥�� ==> %d ��\n", money / 50);
    money %= 50;
    printf(" �ʿ�¥��   ==> %d ��\n", money / 10);
    money %= 10;
    printf(" �ٲ��� ���� �ܵ� ==> %d ��\n", money);
}
