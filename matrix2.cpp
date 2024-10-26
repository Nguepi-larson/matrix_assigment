#include <iostream>
#include <stdio.h>


void  addition_2_by_2(float a1[2][2],float a2[2][2])
{
   int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            a1[i][j]=a1[i][j]+a2[i][j];
        }
    }
    
}


void  subtraction_2_by_2(float a1[2][2],float a2[2][2])
{
   int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            a1[i][j]=a1[i][j]-a2[i][j];
        }
    }
}



void  fill_2_by_2(float a1[2][2])
{
  int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the element at index (%d,%d)",i,j);
            std::cin>>a1[i][j];
        }
    }
}

void display_2_by_2(float a1[2][2])
{
    int i,j;
     for(i=0;i<2;i++)
    {
        printf("|");
        for(j=0;j<2;j++)
        {
        printf(" %.1f",a1[i][j]);
        }
        printf(" |");
        std::cout<<"\n";
    }
}

void multiplication_2_by_2(float a1[2][2],float a2[2][2])
{
    
    int i,j;
    float a3[2][2];

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            a3[i][j]=(a1[i][0]*a2[0][j])+(a1[i][1]*a2[1][j]);
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            a1[i][j]=a3[i][j];
        }
    }


}

void transpose_2_by_2(float a1[2][2])
{
    int i,j;
  for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            a1[i][j]=a1[j][i];
        }
    }
}


float determinant_2_by_2(float a1[2][2])
{
    float a;
    a=(a1[0][0]*a1[1][1])-(a1[1][0]*a1[0][1]);
    return a;
}


void invers_2_by_2(float a1[2][2])
{
    int i,j;
    float det=determinant_2_by_2(a1);
    float a,b,c,d;
    a=a1[0][0];
    b=a1[0][1];
    c=a1[1][0];
    d=a1[1][1];

    if (det==0)
    {
        std::cout<<"this matrix cant have an  inverse \n";
    }
    else
    {
        float A=1/det;
         a1[0][0]=d;
         a1[0][1]=-1*b;
         a1[1][0]=a;
        a1[1][1]=-1*c;
        for(i=0;i<2;i++)
        {
        for(j=0;j<2;j++)
        {
            a1[i][j]=A*a1[i][j];
        }
        }
    }

}


float trace_2_by_2(float a1[2][2])
{
    float a;
    a=a1[0][0]+a1[1][1];
    return a;
}

