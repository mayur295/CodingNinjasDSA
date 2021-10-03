Write a recursive function that returns the sum of the digits of a given integer.
Input format :
Integer N
Output format :
Sum of digits of N
Constraints :
0 <= N <= 10^9
Sample Input 1 :
12345
Sample Output 1 :
15
Sample Input 2 :
9
Sample Output 2 :
9
  
/***********************************************************SOLUTION********************************************************/
  
int sumOfDigits(int n) {
    if(n == 0)
       return 0;
    int smallOut=(n%10);
    return smallOut+sumOfDigits(n/10);
}

//Main Code
/*
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}

*/
