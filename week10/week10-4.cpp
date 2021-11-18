#include <stdio.h>
int a[100]={0,0,0,0};
int main()
{
    for( int i=2; i<100; i++){
        if( a[i]==0 )
            printf("%d ", i);
            for( int k=i+i; k<100; k=k+i) a[k]=1;
    }
}
