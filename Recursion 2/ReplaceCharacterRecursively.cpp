Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.


Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)
Output format :
Array elements in increasing order (separated by space)
Constraints :
1 <= n <= 10^3
Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
Sample Input 2 :
5
1 5 2 7 3
Sample Output 2 :
1 2 3 5 7 
  
/*************************************************SOLUTION****************************************************************/
  
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
  
//Main File
/*
#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}
*/
