/* 동양미래대학교 컴퓨터공학부
   "C애플리케이션구현" 과목
    2022학년 1학기 11주차 실습과제 제출결과

    작성자 : PB반 "양원근" (학번 : 20212189)
    - (주의) 여기서 "작성자 이름"과 "학번"은 실습과제 작성(제출)자 본인의 이름과 학번을 적을 것

   (실습과제 문제) 교재 594 페이지의 "프로그래밍 연습" 문제 1번에서 요구하는 것과 동일한 결과가 나오도록
   아래의 소스코드의 빈 부분을 채워서 완성하시오.

    작성 및 제출기한 : 2022년 5월 15일(일) 23시 25분 59초 전까지
*/


#include<stdio.h>

struct Employee
{
    char ename[10];
    int sal;
};

int main()
{
    // 여기에 정답 소스코드를 작성하세요.
    struct Employee Employee[] = { {"홍길동",2000000}, {"임걱정", 3000000}, {"김영철", 2500000} };
    int i, size;
    size = sizeof(Employee) / sizeof(Employee[0]);
    for (i = 0; i < size; i++)
    {
        printf("직원 이름: %s 월급여: %d\n", Employee[i].ename, Employee[i].sal);
    }
    return 0;
}

