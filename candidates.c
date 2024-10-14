#include<stdio.h>
#include<stdlib.h>

struct personal
{
    char name[5];
    char brth[30];
    char sex;
    char mail[50];
    char contry[10];
    float BMI;
    char main[10];
    char sub[10];
    int kor;
    char MBTI[4];
    char intro[100];
};

int main()
{
    struct personal p[6];
    int i = 0;

    while(i < 6)
    {
        printf("####################################\n");
        printf("    오디션 후보자 데이터 입력\n");
        printf("####################################\n");
        printf("%d 번 째 후보자의 정보를 입력합니다.\n", i + 1);

        printf("성명: ");
        scanf("%4s", p[i].name);

        printf("생일(YYYY/MM/DD 형식): ");
        scanf("%11s", p[i].brth);

        printf("성별(여성이면 F 또는 남성이면 M): ");
        scanf(" %c", &p[i].sex);

        printf("메일 주소: ");
        scanf("%50s", p[i].mail);

        printf("국적: ");
        scanf("%10s", p[i].contry);

        printf("BMI: ");
        scanf("%f", &p[i].BMI);

        printf("주 스킬: ");
        scanf("%5s", p[i].main);

        printf("보조 스킬: ");
        scanf("%5s", p[i].sub);

        printf("한국어 등급(TOPIK): ");
        scanf("%d", &p[i].kor);

        printf("MBTI: ");
        scanf("%4s", p[i].MBTI);

        printf("소개: ");
        getchar();
        fgets(p[i].intro, 100, stdin);

        i++;
    }

    for(int j=0;j<6;j++)
    {   

        printf("####################################\n");
        printf("    오디션 후보자 데이터 조회\n");
        printf("####################################\n");
        printf("=============================================================================================\n");
        printf("성  명 | 생  일 | 성별 | 메           일 | 국적 | BMI | 주스킬 | 보조스킬 | TOPIK | MBTI |\n");
        printf("%s   | %s   | %c  | %s              | %s   | %.4f  | %s    | %s    |   %d | %s  |\n", p[j].name, p[j].brth, p[j].sex, p[j].mail, p[j].contry, p[j].BMI, p[j].main, p[j].sub, p[j].kor, p[j].MBTI);
        printf("%s\n", p[j].intro);
    }
    return 0;
}
