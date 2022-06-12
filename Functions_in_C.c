#include <stdio.h>
void max(int,int,int,int);
int main()
{
    int p,q,r,s;
    scanf("%d\n%d\n%d\n%d", &p, &q, &r, &s);
    max(p,q,r,s);
    return 0;
}
void max(int p,int q,int r,int s)
{

{
  if((p>q)&&(p>r)&&(p>s))
  {
    printf("%d",p);
  }
  else
    {
        if ((q>r) && (q>s))
        {
            printf("%d",q);
        }
        else
        {
            if (r>s)
            {
                printf("%d",r);
            }
              else
            {
                printf("%d",s);

            }
        }
    }
}
}
