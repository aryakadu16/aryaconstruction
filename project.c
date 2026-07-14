#include <stdio.h>
int main(){ 
    int i=0;
    for(int i=0; i<5 ; i++)
    {
        if (i==2)
        continue;
        printf("%d\n",i);
    }
    return 0;
}
