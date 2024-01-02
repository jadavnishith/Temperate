#include <stdio.h>

int main() 
{
    // q1
    char alphabet = 'a';
      printf("Output\n");
    do {
        printf("%c ",alphabet);
        alphabet+=4;
    } while (alphabet<='z');
    
    // q2

    int num=500;
    int k=100;
    int sum;
    for(int i=1; i<num; i++)
    {
        if(i%k==0){
            sum+=i;
        }    
    }
    printf("%d\n",sum);
    
    return 0;
}
