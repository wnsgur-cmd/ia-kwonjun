#include <stdio.h>
#include <stdlib.h>

#define MAX_CANDIDATES 6

typedef struct {
    char name[20];
    int id;
    char brth[30];
    char gen;
    char mail[50];
    char contry[50];
    float bmi;
    char main[50];
    char sub[50];
    int kor;
    char mbti[4];
    char nic[50];
    char education[50];
    float high;     //키
    float kg;       //몸무게
    char blood[4];
    char allergy[50];
    char hobby[50];
    char sns[50];
    int passed;
}Candidate;

Candidate Candidate_arr[MAX_CANDIDATES] = {
    {"박지연", 100001, "20010429", 'F', "jiyeon@naver.com", "한국", 19.5, "국어", "듣기", 1, "ENFP", "Ariel", "고1중퇴", 168, 48, "A", "유제품", "댄스 연습, 작곡", "Instagram - @Ariel_Jiyeon", 1},
    {"Ethan Smith", 100002, "20010311", 'M', "ethan@naver.com", "미국", 23.6, "체육", "축구", 2, "ESTJ", "Simba", "중3중퇴", 178, 70, "O", "땅콩", "노래 작곡, 헬스 트레이닝", "Twitter - @Simba_Ethan", 1},
    {"Helena Silva", 100003, "19980719", 'F', "helena@naver.com", "이탈리아", 19.6, "음악", "작사", 3, "ISFP", "Belle", "중졸", 163, 52, "B", "생선", "노래 부르기, 그림 그리기", "Instagram - @Belle_Helena", 1},
    {"Liam Wilson", 100004, "20021019", 'M', "liam@naver.com", "호주", 24.3, "수학", "미적분", 4, "ENFJ", "Aladdin", "중2중퇴", 175, 80, "AB", "갑각류", "춤추기, 음악 프로듀싱", "Instagram - @Aladdin_Liam", 0},
    {"권준혁", 100005, "20021001", 'M', "juncar1304@naver.com", "한국", 21.0, "한국사", "석기시대", 5, "ENTP", "Nuts", "대2재학", 175, 69, "O", "없음", "헬스, 잠자기", "Instagram - @kkang_se", 1},
    {"김지선", 100006, "20010805", 'F', "jisun@naver.com", "중국", 18.5, "언어", "일본어", 6, "ISFP", "Jjajang", "고3중퇴", 164, 47, "A", "계란", "책보기, 게임", "Instagram - @Ariel_Jisun", 0}
};

Candidate milliways_arr[MAX_CANDIDATES];

int main() {
    for (int i = 0; i < MAX_CANDIDATES; i++) {
        if (Candidate_arr[i].passed) {
            // 합격한 후보자의 정보를 milliways_arr에 복사
            milliways_arr[i] = Candidate_arr[i];

            // 추가 데이터 수집
            printf("합격자 %s의 추가 정보를 입력하세요:\n", Candidate_arr[i].name);
            printf("키를 입력하세요 (cm): ");
            scanf("%f", &milliways_arr[i].high);
            printf("BMI를 입력하세요: ");
            scanf("%f", &milliways_arr[i].bmi);

            // 몸무게 계산
            milliways_arr[i].kg = milliways_arr[i].bmi * (milliways_arr[i].high / 100.0) * (milliways_arr[i].high / 100.0);
        }
    }

    // milliways_arr 내용 출력
    printf("\n합격자 리스트:\n");
    for (int i = 0; i < MAX_CANDIDATES; i++) {
        if (milliways_arr[i].passed) {
            printf("이름: %s, ID: %d, 생일: %s, 성별: %c, 이메일: %s, 국가: %s, BMI: %.2f, 키: %.2f cm, 몸무게: %.2f kg, MBTI: %s\n",
                   milliways_arr[i].name, milliways_arr[i].id, milliways_arr[i].brth, milliways_arr[i].gen,
                   milliways_arr[i].mail, milliways_arr[i].contry, milliways_arr[i].bmi, milliways_arr[i].high,
                   milliways_arr[i].kg, milliways_arr[i].mbti);
        }
    }

    return 0;
}
