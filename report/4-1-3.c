#include <stdio.h>

int main(void)
{
    float kor = 3, eng = 4, mat = 5;
    float credits;
    float res;
    float kscore = 3.8, escore = 4.4, mscore = 3.9;
    float grade;

    credits = kor + eng + mat
    grade = (kscore + escore + mscore) / 3;
    credits >= 10 && grade > 4.0 ? res = 1 : res = 0;

    return 0;

}