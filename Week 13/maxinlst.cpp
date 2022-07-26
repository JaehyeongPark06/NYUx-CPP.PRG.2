#include <iostream>
using namespace std;

int maxinlst(int lst[], int size)
{
    int i;
     
    int max = lst[0];
 
    for (i = 1; i < size; i++)
        if (lst[i] > max)
            max = lst[i];
 
    return max;
}
 
int main()
{
  int lst[] = {-19, -3, 20, -1, 5, -25};
  int size = sizeof(lst) / sizeof(lst[0]);    
  printf("%i", maxinlst(lst,6));
  return 0;
}