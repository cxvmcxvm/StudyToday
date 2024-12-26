#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = num1 - num2; // num1에서 num2를 뺀 값을 계산
    return answer;           // 결과 반환
}

int main() {
    // 사용 예시
    printf("%d\n", solution(10, 3)); // 출력: 7
    printf("%d\n", solution(5, 8));  // 출력: -3
    return 0;
}
