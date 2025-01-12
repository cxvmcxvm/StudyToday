#include <iostream>
using namespace std;

int solution(int num1, int num2) {
  
    double divisionResult = static_cast<double>(num1) / num2; 
    int result = static_cast<int>(divisionResult * 1000);     
    return result; 
}

int main() {
   
    cout << "입출력 예 #1 (num1=3, num2=2): " << solution(3, 2) << endl; 
    cout << "입출력 예 #2 (num1=7, num2=3): " << solution(7, 3) << endl;  
    cout << "입출력 예 #3 (num1=1, num2=16): " << solution(1, 16) << endl; 

    return 0;
}
