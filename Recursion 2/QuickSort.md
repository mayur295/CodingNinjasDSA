**Sort an array A using Quick Sort.**
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
1 5 2 7 3</br>
`Sample Output 2 :`</br>
1 2 3 5 7 </br>

**`SOLUTION`**
```cpp
int sort(int input[],int start,int end)
{
    int x=input[start];
    int count=0;
    for(int k=start+1;k<=end;k++)
    {
        if(input[k]<=x)
        {
            count++;
        }
    }
    int xindex=start+count;
    int temp = input[start]; 
    input[start] = input[xindex];
    input[xindex] = temp;
    int i = start,j = end;
    while(i <= xindex && j >= xindex) {
        while(input[i] <= x) {
            i++;
        }
        while(input[j] > x) {
            j--;
        }
        if(i < xindex && j > xindex) {
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            i++;
            j--;
        }
    }
    return xindex;
    
}


void quickSort(int input[], int start, int end)
{
    if(start>=end){
        return;
    }		
    int c=sort(input,start,end);
    quickSort(input,start,c-1);
    quickSort(input,c+1,end);
}

void quickSort(int input[], int size) 
{
    
    quickSort(input,0,size-1);
}

```
>
>MAIN Code</br>
/*</br>
#include<iostream> </br>
#include "Solution.h"</br>
using namespace std;</br>
int main(){</br>
    int n;</br>
    cin >> n;</br>
    int *input = new int[n];</br>
    for(int i = 0; i < n; i++) {</br>
        cin >> input[i];</br></br>
    }</br>
    quickSort(input, n);</br>
    for(int i = 0; i < n; i++) {</br>
        cout << input[i] << " ";</br>
    }
    delete [] input;</br>
}*/
