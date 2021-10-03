**Given a string S, remove consecutive duplicates from it recursively.**
</br>
`Input Format :` </br>
String S </br>
`Output Format :` </br>
Output string </br>
`Constraints :` </br>
1 <= |S| <= 10^3 </br>
where |S| represents the length of string </br>
`Sample Input 1 :` </br>
aabccba </br>
`Sample Output 1 :` </br>
abcba </br>
`Sample Input 2 :` </br>
xxxyyyzwwzzz </br>
`Sample Output 2 :` </br>
xyzwz </br>
</br>
**`SOLUTION`** </br>
`Code CPP`
```cpp
void removeConsecutiveDuplicates(char *input) {
if(input[0]=='\0'){
        return;
    }
    
    if(input[0]!=input[1]){
        removeConsecutiveDuplicates(input+1);
    }
    else{
        int i=1;
        for(;input[i]!='\0';i++){
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        removeConsecutiveDuplicates(input);
    }
}
```
//Main Code
/* </br>
#include <iostream> </br>
using namespace std; </br>
#include "solution.h" </br>

int main() {</br>
    char s[100000];</br>
    cin >> s;</br>
    removeConsecutiveDuplicates(s);</br>
    cout << s << endl;</br>
}</br>
*/
  ```
