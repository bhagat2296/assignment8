#include <stdio.h>
#include <stdlib.h>

/*int main()                                //Question 1
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
    {printf("*");}
    printf("\n");
    }
    return 0;
}*/

/*int main()                                  //Question 2
{
    int m=1;
    for(int i=5;i>=1;i--)
    {
        for(int k=1;k<=i-1;k++)
        {
            printf(" ");
        }

        for(int j=1;j<=m;j++)

        {
            printf("*");
        }
        printf("\n");
        m++;
    }
    return 0;
}*/

/*int main()                                  //Question 3
{
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*int main()                                  //Question 4
{

    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=i-1;k++)
        {
            printf(" ");
        }

        for(int j=i;j<=5;j++)

        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}*/



/*int main()                                  //Question 5
{
    int m=5;

    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=m-1;k++)
        {
            printf(" ");
        }

        for(int j=1;j<=2*i-1;j++)

        {
            printf("*");
        }
        printf("\n");
        m--;

    }
    return 0;
}*/



/*int main()                                  //Question 6
{
    int m=5;

    for(int i=5;i>=1;i--)
    {
        for(int k=1;k<=m-i;k++)
        {
            printf(" ");
        }

        for(int j=1;j<=2*i-1;j++)

        {
            printf("*");
        }
        printf("\n");


    }
    return 0;
}*/



/*int main()                                  //Question 7
{


    for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=10;j++)

        {
        if(j<=6-i||j>4+i)
            printf("*");

            else
                printf(" ");
        }
        printf("\n");


    }
    return 0;
}*/


/*int main()
{
    int k;
    for(int i=1;i<=5;i++)
    {
        k=1;
        for(int j=1;j<=7;j++)
    {
        if(j>=5-i&&j<=3+i)
        {
            printf("%d",k);
            j<4?k++:k--;
        }
        else
            printf(" ");
     }

    printf("\n");
    }

}*/


/*int main()                                        //Question 9
{
    int k;
    for(int i=1;i<=5;i++)
    {
        k=1;
        for(int j=1;j<=7;j++)
    {
        if(j>=i&&j<=8-i)
        {
            printf("%d",k);
            j<4?k++:k--;
        }
        else
            printf(" ");
     }

    printf("\n");
    }

}*/


/*int main()                                        //Question 10
{
    for(int i=1;i<=4;i++)
    {
        int k=1;
        for(int j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
                {
                printf("%d",k);
                j<4?k++:k--;
                }

            else
            { if(j==4)
            k--;
                printf(" ");


            }

        }

        printf("\n");
    }
}*/




/*int main()                                //Question 11
{
    for(int i=1;i<=5;i++)
    {
        int k=65;
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
                {
                printf("%c",k);
                j<5?k++:k--;
                }

            else
            {
                printf(" ");


            }

        }

        printf("\n");
    }
}*/








/*int main()                                //Question 12
{
    for(int i=5;i>=1;i--)
    {
        int k=65;
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
                {
                printf("%c",k);
                j<5?k++:k--;
                }

            else
            {
                printf(" ");


            }

        }

        printf("\n");
    }
}*/


/*int main()                                //Question 13
{
    for(int i=1;i<=7;i++)
    {
        int k=65;
        for(int j=1;j<=13;j++)
        {
            if(j<=8-i||j>=6+i)
                {
                printf("%c",k);
                j<7?k++:k--;
                }

            else
            {
             if(j==7)
                k--;
                printf(" ");


            }

        }

        printf("\n");
    }
}*/


/*int main()                                //Question 14
{
    for(int i=1;i<=5;i++)
    {
        printf("*");
        for(int j=2;j<=5;j++)
        {
            if(i<=4)
                {
                    if(i==j)
                printf("*");

            else

                printf(" ");
                }
                else
                    printf("*");


        }

        printf("\n");
    }
}*/


/*int main()                                //Question 15
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=4;j++)
        {
            if(i>=2)
                {
                    if(i==j)
                printf("*");

            else

                printf(" ");
                }
                else
                    printf("*");


        }
        printf("*");

        printf("\n");
    }
}*/


/*int main()                                //Question 16
{
    for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=9;j++)
        {
            if(j==6-i||j==4+i||i==5)
                {
                printf("*");
                }

            else

                printf(" ");

        }

        printf("\n");
    }
}*/

/*int main()                                //Question 17
{
    for(int i=5;i>=1;i--)
    {

        for(int j=1;j<=9;j++)
        {
            if(j==6-i||j==4+i||i==5)
                {
                printf("*");
                }

            else

                printf(" ");

        }

        printf("\n");
    }
}*/


/*int main()                                //Question 18
{
    for(int i=1;i<=5;i++)
    {

        for(int j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
                {
                printf("*");
                }

            else

                printf(" ");

        }

        printf("\n");
    }

    for(int i=5;i>=1;i--)
    {

        for(int j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
                {
                printf("*");
                }

            else

                printf(" ");

        }

        printf("\n");
    }
}*/


/*int main()                                //Question 19
{
        for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=19;j++)
        {
            if(j>=7+i&&j<=13-i)
                {
                printf(" ");
                }

            else

                printf("*");
        }

        printf("\n");
    }
    for(int i=10;i>=1;i--)
    {
        if(i==10)
        printf("***** MYSIRG ******");
        else

        for(int j=1;j<=19;j++)
        {
            if(j>=11-i&&j<=9+i)

                printf("*");

            else

                printf(" ");
        }

        printf("\n");
    }
}*/
