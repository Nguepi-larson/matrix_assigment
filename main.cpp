#include <iostream>

#include "matrix2.h"
#include "matrix3.h"

int main(int argc,char** argv)
{
    int option;
    float arr[2][2],arr1[2][2];
    float ar[3][3],ar1[3][3];
    float a;

    std::cout<<"chose a matrix\n";
    std::cout<<"0.2 by 2 matrix\n1.3 by 3 matrix\n";
    std::cin>>option;

// for 2 by 2 matrix
    if(option==0)
    {
        std::cout<<"chose operation\n";
        std::cout<<"1.addition\n2.subtraction\n3.multiplication\n4.deteminant\n5.transpose\n6.inverse\n7.trace\n";
        std::cin>>option;
        switch(option)
        {
            //additon
            case 1:
            {
                std::cout<<"enter the element of the first matrix\n";
                fill_2_by_2(arr);
                std::cout<<"enter the element of the second matrix\n";
                fill_2_by_2(arr1);
                addition_2_by_2(arr,arr1);
                std::cout<<"the sum of the two matrix is :\n";
                display_2_by_2(arr);
            }break;

            //subtraction
            case 2:
            {
                std::cout<<"enter the element of the first matrix\n";
                fill_2_by_2(arr);
                std::cout<<"enter the element of the second matrix\n";
                fill_2_by_2(arr1);
                subtraction_2_by_2(arr,arr1);
                std::cout<<"the diffrences of the two matrix is :\n";
                display_2_by_2(arr);
            }break;
            
            //multiplication
            case 3:
            {
                std::cout<<"enter the element of the first matrix\n";
                fill_2_by_2(arr);
                std::cout<<"enter the element of the second matrix\n";
                fill_2_by_2(arr1);
                multiplication_2_by_2(arr,arr1);
                std::cout<<"the product of the two matrix is :\n";
                display_2_by_2(arr);
            }break;
            
            //determinant
            case 4:
            {
                  std::cout<<"enter the element of the first matrix\n";
                fill_2_by_2(arr);
               a= determinant_2_by_2(arr);
              printf(" det :%.2f",a);
            }break;
            
            //transpose
            case 5:
            {
                  std::cout<<"enter the element of the  matrix\n";
                fill_2_by_2(arr);
                transpose_2_by_2(arr);
                display_2_by_2(arr);
            }break;
            
            //invers
            case 6:
            {
                 std::cout<<"enter the element of the  matrix\n";
                fill_2_by_2(arr);
                invers_2_by_2(arr);
                display_2_by_2(arr);
            }break;
            
            //trace
            case 7:
            {
                std::cout<<"enter the element of the first matrix\n";
                fill_2_by_2(arr);
                trace_2_by_2(arr);

            }break;
           
           //default value .....
           default :
           {
            std::cout<<"wrong input\n";
           }break;
        }

    }
// for 3 by 3 matrix
    else if(option==1)
    {
        std::cout<<"chose operation\n";
        std::cout<<"1.addition\n2.subtraction\n3.multiplication\n4.deteminant\n5.transpose\n6.inverse\n7.trace\n";
        std::cin>>option;
        switch(option)
        {
            //additon
            case 1:
            {
                std::cout<<"enter the element of the first matrix\n";
                fill_3_by_3(ar);
                std::cout<<"enter the element of the second matrix\n";
                fill_3_by_3(ar1);
                addition_3_by_3(ar,ar1);
                std::cout<<"the sum of the two matrix is :\n";
                display_3_by_3(ar);
            }break;

            //subtraction
            case 2:
            {
                std::cout<<"enter the element of the first matrix\n";
                fill_3_by_3(ar);
                std::cout<<"enter the element of the second matrix\n";
                fill_3_by_3(ar1);
                subtraction_3_by_3(ar,ar1);
                std::cout<<"the diffrences of the two matrix is :\n";
                display_3_by_3(ar);
            }break;
            
            //multiplication
            case 3:
            {
                std::cout<<"enter the element of the first matrix\n";
                fill_3_by_3(ar);
                std::cout<<"enter the element of the second matrix\n";
                fill_3_by_3(ar1);
                multiplication_3_by_3(ar,ar1);
                std::cout<<"the sum of the two matrix is :\n";
                display_3_by_3(ar);
            }break;
            
            //determinant
            case 4:
            {
                  std::cout<<"enter the element of the first matrix\n";
                fill_3_by_3(ar);
                 a =determinant_3_by_3(ar);
                  printf(" det :%.2f",a);
            }break;
            
            //transpose
            case 5:
            {
                  std::cout<<"enter the element of the  matrix\n";
                fill_3_by_3(ar);
                transpose_3_by_3(ar);
                display_3_by_3(ar);
            }break;
            
            //invers
            case 6:
            {
                 std::cout<<"enter the element of the  matrix\n";
                fill_3_by_3(ar);
                invers_3_by_3(ar);
                display_3_by_3(ar);
            }break;
            
            //trace
            case 7:
            {
                std::cout<<"enter the element of the first matrix\n";
                fill_3_by_3(ar);
                trace_3_by_3(ar);

            }break;
           
           //default value .....
           default :
           {
            std::cout<<"wrong input\n";
           }break;
        }
    }

    else
    {
        std::cout<<"wrong input";
    }
return 0;
}