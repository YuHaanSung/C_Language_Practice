#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t num1 = INT8_MIN;
    uint16_t num2 = UINT16_MAX;
    uint32_t num3 = 0;
    int64_t num4 = INT64_MAX;

    printf("%d %u %u %lld\n", num1, num2, num3, num4);

    return 0;
}

/*
부동소수점은
부호 가수x기수(2)^지수입니다.

부동소수점 저장에 대한 규약은 IEEE754라는 표준으로 정해져있습니다.
단정밀도 부동소수점 float (유효자릿수 7)(9.123456)
배정밀도 부동소수점 double(유효자릿수16)(실수를 일정 자릿수만큼판 표현)

*/