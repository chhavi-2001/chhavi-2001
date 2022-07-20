#include <stdio.h>


	// your co#include <stdio.h>

int main(void) {
    long t,a,b;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld %ld\n",&a,&b);
        if(a*10==b*5)
        printf("any\n");
        if(a*10>b*5)
        printf("first\n");
        if(a*10<b*5)
        printf("second\n");
    }
    
	return 0;
}

