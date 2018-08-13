#include<stdio.h>
int main()
{
    int cd,cm,cy,bd,bm,by,d,m,y;
    printf("Enter Current year, month & day : ");
    scanf("%d %d %d",&cy,&cm,&cd);
    printf("Enter Birth year, month & day : ");
    scanf("%d %d %d",&by,&bm,&bd);

    if(bd>cd++)
    {
        cd = cd + 30;
        cm--;
    }
    if(bm>cm)
    {
        cm = cm + 12;
        cy--;
    }
    d = cd-bd;
    m = cm-bm;
    y = cy-by;

    if(d >= 30)
    {
        d = d%30;
        m++;
    }
    if(m>=12)
    {
        m = m%12;
        y++;
    }

    printf("Age : %d years %d months %d days",y,m,d);

    return 0;
}
