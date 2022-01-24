#include <stdio.h>
#include <stdlib.h>
#include<string.h>

 char s[25];
 char tab[500][500];
    int initialisation1()
        {
            int n;
            do
                {   system("cls");
                    printf("\t\t bonjour\n");
                    printf("\t Enter the size: \n\n\t ");
                    scanf("%d",&n);
                }
            while (n<=0 || n>9);
            return n;
        }
//----------------------------------------

    void initialisation2(int a)
        {
            printf("\n\t Enter the Number : \n\n\t");
            scanf("%s",s);
            int i,j;
            for (i=0;i<=2*a+2;i++)
               for(j=0;j<500;j++)
                {
                    tab[i][j]=' ';
                }
        }
//-----------------------------------------

    int deux(int a,int b)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            tab[i][b+a+2]='|';
            tab[i+a+1][b+1]='|';
        }
        for(i=2+b;i<=1+b+a;i++)
        {
            tab[0][i]='_';
            tab[a+1][i]='_';
            tab[2*a+2][i]='_';
        }
        return b+2+a;
    }
//----------------------------------------

     int un(int a,int b)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            tab[i][a+2+b]='|';
            tab[i+a+1][a+2+b]='|';
        }
        return b+2+a;
    }
//--------------------------------------

     int trois(int a,int b)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            tab[i][b+a+2]='|';
            tab[i+a+1][b+a+2]='|';
        }
        for(i=2+b;i<=1+b+a;i++)
        {
            tab[0][i]='_';
            tab[a+1][i]='_';
            tab[2*a+2][i]='_';
        }
        return b+2+a;
    }
//-------------------------------------

     int quatre(int a,int b)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            tab[i][b+1]='|';
            tab[i][b+a+2]='|';
            tab[i+a+1][b+a+2]='|';
        }
        for(i=2+b;i<=1+b+a;i++)
        {
            tab[a+1][i]='_';
        }
        return b+2+a;
    }
//------------------------------------

    int cinq(int a,int b)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            tab[i][b+1]='|';
            tab[i+a+1][b+a+2]='|';
        }
        for(i=2+b;i<=1+b+a;i++)
        {
            tab[0][i]='_';
            tab[a+1][i]='_';
            tab[2*a+2][i]='_';
        }
        return b+2+a;
    }
//------------------------------------

      int six(int a,int b)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            tab[i][b+1]='|';
            tab[i+a+1][b+1]='|';
            tab[i+a+1][b+a+2]='|';
        }
        for(i=2+b;i<=1+b+a;i++)
        {
            tab[0][i]='_';
            tab[a+1][i]='_';
            tab[2*a+2][i]='_';
        }
        return b+2+a;
    }
//------------------------------------

    int sept(int a,int b)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            tab[i][b+a+2]='|';
            tab[i+a+1][b+a+2]='|';
        }
        for(i=2+b;i<=1+b+a;i++)
        {
            tab[0][i]='_';
        }
        return b+2+a;
    }
//------------------------------------

    int huit(int a,int b)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            tab[i][b+1]='|';
            tab[i][b+a+2]='|';
            tab[i+a+1][b+1]='|';
            tab[i+a+1][b+a+2]='|';
        }
        for(i=2+b;i<=1+b+a;i++)
        {
            tab[0][i]='_';
            tab[a+1][i]='_';
            tab[2*a+2][i]='_';
        }
        return b+2+a;
    }
//------------------------------------

    int neuf(int a,int b)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            tab[i][b+1]='|';
            tab[i][b+a+2]='|';
            tab[i+a+1][b+a+2]='|';
        }
        for(i=2+b;i<=1+b+a;i++)
        {
            tab[0][i]='_';
            tab[a+1][i]='_';
            tab[2*a+2][i]='_';
        }
        return b+2+a;
    }
//------------------------------------

    int zero(int a,int b)
    {
        int i;
        for(i=1;i<=a;i++)
        {
            tab[i][b+1]='|';
            tab[i][b+a+2]='|';
            tab[i+a+1][b+1]='|';
            tab[i+a+1][b+a+2]='|';
        }
        for(i=2+b;i<=1+b+a;i++)
        {
            tab[0][i]='_';
            tab[2*a+2][i]='_';
        }
        return b+2+a;
    }
//------------------------------------

    void affichag(int a,int b)
    {
        int i,j;
        for (i=0;i<=2*a+2;i++)
           {
               for(j=0;j<=b;j++)
                {
                    printf("%c",tab[i][j]);
                }
                printf("\n");
           }
    }
//---------------------------------------------
int main()
{
    int a;
    a=initialisation1();
    initialisation2(a);
    int i,b;

    for(i=0,b=0;i<strlen(s);i++)
    {
       // b=(s[i]=='0')?zero(a,b):(s[i]=='1')?un(a,b):(s[i]=='2')?deux(a,b):(s[i]=='3')?trois(a,b):(s[i]=='4')?quatre(a,b):(s[i]=='5')?cinq(a,b):(s[i]=='6')?six(a,b):(s[i]=='7')?sept(a,b):(s[i]=='8')?huit(a,b):(s[i]=='9')?neuf(a,b):b;
        /*if (s[i]=='0')
            b=zero(a,b);
        else if (s[i]=='1')
            b=un(a,b);
        else if (s[i]=='2')
            b=deux(a,b);
        else if (s[i]=='3')
            b=trois(a,b);
        else if (s[i]=='4')
            b=quatre(a,b);
        else if (s[i]=='5')
            b=cinq(a,b);
        else if (s[i]=='6')
            b=six(a,b);
        else if (s[i]=='7')
             b=sept(a,b);
        else if (s[i]=='8')
             b=huit(a,b);
        else if (s[i]=='9')
            b=neuf(a,b);*/

switch (s[i])
        {
        case '0':
            b=zero(a,b);
            break;
        case '1':
            b=un(a,b);
            break;
        case '2':
            b=deux(a,b);
            break;
        case '3':
            b=trois(a,b);
            break;
        case '4':
            b=quatre(a,b);
            break;
        case '5':
            b=cinq(a,b);
            break;
        case '6':
            b=six(a,b);
            break;
        case '7':
            b=sept(a,b);
            break;
        case '8':
            b=huit(a,b);
            break;
        case '9':
            b=neuf(a,b);
            break;
        default:break;
        }

    }

    affichag(a,b);

    return 0;
}
