#include <stdio.h>

int main(void)
{
    int kor = 70, eng = 80, mat = 90;
    int total;

    total = kor + eng + mat;
    printf("국어 : %d, 영어 : %d, 수학 : %d\n");
    printf("총점 : %d", total);

    return 0;
}