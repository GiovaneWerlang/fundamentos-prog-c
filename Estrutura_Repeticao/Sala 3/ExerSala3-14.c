/*14) Implemente um cronômetro, apresentando dados de horas, minutos e segundos da
seguinte forma: 00:00:00. O cronômetro inicia com  00:00:00 e quando chegar a23:59:59, deverá ir para  00:00:00.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int h, m, s;
    h = 0;
    m = 0;
    s = 0;

    for(s=0;s<=86400;s++)
    {
        printf("%d:%d:%d\n",h,m,s);
        if(s%59==0)
        {
            s=0;
            m = m + 1;
            if(m==60)
            {
                m=0;
                h = h + 1;
                if(h==24)
                {
                    h=0;
                }

            }
        }
    }



    system("pause");
    return(0);
}
