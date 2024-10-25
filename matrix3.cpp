#include <iostream>
#include <stdio.h>

int i,j;

void addition_3_by_3(float  a1[3][3],float a2[3][3])
{
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a1[i][j]=a1[i][j]+a2[i][j];
        }
    }

}

void subtraction_3_by_3(float  a1[3][3],float a2[3][3])
{
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            a1[i][j]=a1[i][j]-a2[i][j];
        }
    }
}

void fill_3_by_3(float  a1[3][3])
{
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the element at index (%d,%d)",i,j);
            std::cin>>a1[i][j];
        }
    }
}

void display_3_by_3(float  a1[3][3])
{
      for(i=0;i<3;i++)
    {
        printf("|");
        for(j=0;j<3;j++)
        {
        printf(" %.1f",a1[i][j]);
        }
        printf(" |");
        std::cout<<"\n";
    }

}

float  determinant_3_by_3(float  a1[3][3])
{
    float a;
    a=(a1[0][0]*(a1[1][1]*a1[2][2]-a1[1][2]*a1[2][1]))-(a1[0][1]*(a1[1][0]*a1[2][2]-a1[1][2]*a1[2][0]))+(a1[0][2]*(a1[1][0]*a1[2][1]-a1[1][1]*a1[2][0]));
    return a;
}

void multiplication_3_by_3(float a1[3][3],float a2[3][3])
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a1[i][j]=(a1[i][0]*a2[i][j])+(a1[i][1]*a2[1][j])+(a1[i][2]*a2[2][j]);
        }
    }

}

void transpose_3_by_3(float a1[3][3])
{
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            a1[i][j]=a1[j][i];
        }
    }
}

void invers_3_by_3(float  a1[3][3])
{
    float det=determinant_3_by_3(a1);
float a,b,c,d,e,f,g,h,k;
    if(det!=0){
    float A=1/det;

    a=a1[0][0];
    b=a1[0][1];
    c=a1[0][2];
    d=a1[1][0];
    e=a1[1][1];
    f=a1[1][2];
    g=a1[2][0];
    h=a1[2][1];
    k=a1[2][2];

    
    a1[0][0]=(e*k-f*h);
    a1[0][1]=-(d*k-f*g);
    a1[0][2]=(d*h-e*g);
    a1[1][0]=-(b*k-c*h);
    a1[1][1]=(a*k-c*g);
    a1[1][2]=-(a*h-b*g);
    a1[2][0]=(b*f-c*e);
    a1[2][1]=-(a*f-c*d);
    a1[2][2]=(a*e-b*d);

    transpose_3_by_3(a1);

     for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
            a1[i][j]=A*a1[i][j];
        }
        }
    }
    else
    {
        std::cout<<"its a singular matrix we cant get the inverse";
    }

}

void trace_3_by_3(float a1[3][3])
{
   float a;
    a=a1[0][0]+a1[1][1]+a1[2][2];
    printf("the trace is %.2f",a);
}