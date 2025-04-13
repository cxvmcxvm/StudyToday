#include <iostream>
using namespace std;

int solution(int age) {
    return 2022 - age + 1;
}

int main() {
    cout << solution(40) << endl;  
    cout << solution(23) << endl;  
    return 0;
}