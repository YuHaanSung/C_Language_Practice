#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int korean, math, english, science;
	int everage_score;
	scanf("%d %d %d %d", &korean, &math, &english, &science);
	everage_score = (korean + math + english + science) / 4;
	if (korean>=0 && korean <=100 && math>=0 && math<=100 && english>=0 && english<=100 && science>=0 && science <=100)
	{
		if (everage_score >= 85)
		{
			printf("합격");
		}
		else 
		{
			printf("불합격");
		}
	}
	else
	{
		printf("잘못된 점수");
	}
}