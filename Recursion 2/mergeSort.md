**Sort an array A using Merge Sort.**</br>
Change in the input array itself. So no need to return or print anything.</br>
`Input format :`</br>
Line 1 : Integer n i.e. Array size</br>
Line 2 : Array elements (separated by space)</br>
`Output format :`</br>
Array elements in increasing order (separated by space)</br>
`Constraints :`</br>
1 <= n <= 10^3</br>
`Sample Input 1 :`</br>
6 </br>
2 6 8 5 4 3</br>
`Sample Output 1 :`</br>
2 3 4 5 6 8</br>
`Sample Input 2 :`</br>
5</br>
2 1 5 2 3</br>
`Sample Output 2 :`</br>
1 2 2 3 5 </br>

**`SOLUTIONS`**
```cpp
void merge(int input1[], int size1, int input2[], int size2, int output[]){
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2){ 
        if(input1[i] < input2[j]){
            output[k] = input1[i]; 
            k++;
            i++;
        }
        else{
            output[k] = input2[j]; 
            j++; 
            k++;
        }
    }
    while( i < size1){ 
        output[k] = input1[i];
        k++;
        i++;
    }
    while(j < size2){ 
        output[k] = input2[j];
        j++;
        k++;
    }
}
void mergeSort(int input[], int size){ 
    if(size <= 1){
        return;
    }
    int mid = size / 2; 
    int part1[500], part2[500];
    int size1 = mid, size2 = size - mid;
    for(int i = 0; i < mid; i++){ 
        part1[i] = input[i];
    }
    int k = 0;
    for(int i = mid ; i < size; i++){ 
        part2[k] = input[i];
        k++;
    }
    mergeSort(part1, size1);
    mergeSort(part2, size2); 
    merge(part1, size1, part2, size2, input); 
}
```

>//Main code</br>
/*</br>
#include <iostream></br>
#include "solution.h"</br>
using namespace std;</br>
int main() {</br>
  int length;</br>
  cin >> length;</br>
  int* input = new int[length];</br>
  for(int i=0; i < length; i++)</br>
    cin >> input[i];</br>
  mergeSort(input, length);</br>
  for(int i = 0; i < length; i++) {</br>
    cout << input[i] << " ";</br>
  }</br>
}</br>
*/</br>
