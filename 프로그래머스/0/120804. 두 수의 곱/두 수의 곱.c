#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = num1 * num2; // num1과 num2를 곱한 값을 answer에 저장
    return answer;           // 결과 반환
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b); // 사용자로부터 두 정수를 입력받음
    printf("Result: %d\n", solution(a, b)); // solution 함수 호출 및 결과 출력
    return 0;
}
