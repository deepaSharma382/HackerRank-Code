#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int result();
int main()
{
    int q,x,y,z,i;
    scanf("%d",&q);
    int *at = malloc(sizeof(int) * q);
    if(q>=1||q<=100)
    {
        for(i = 0; i < q; i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            at[i] = result(x,y,z);
        }
    }
    for(i=0;i<q;i++)
    {
        if(at[i]==1)
            printf("Cat A\n");
        else if(at[i]==2)
            printf("Cat B\n");
        else if(at[i]==3)
            printf("Mouse C\n");
    }
    return 0;
}
int result(int x, int y, int z)
{
    int d1,d2,temp=0;
    if(1<=x,y<=100)
    {
        if(z>x && z>y)
        {
            d1 = z - x;
            d2 = z - y;
        }
        else if(z>x && z<y)
        {
            d1 = z - x;
            d2 = y - z;
        }
        else if(z<x && z>y)
        {
            d1 = x - z;
            d2 = z - y;
        }
        else if(z<x && z<y)
        {
            d1 = x - z;
            d2 = y - z;
        }
        else if(x==y&&y==z&&z==x)
        {
            d1 = x - z;
            d2 = y - z;
        }
    }
    if(d1<d2)
        temp=1;
    else if(d2<d1)
        temp=2;
    else if(d1==d2)
        temp=3;
        return(temp);
}
