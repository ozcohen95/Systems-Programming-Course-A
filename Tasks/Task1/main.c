#include <stdio.h>
#include "myMath.h"

int main() {
    double realNum = 0 ;
    double res = 0.0 ;
    double thePow = 0 ;
    printf("Please enter a real number \n") ;
    scanf("%lf" , &realNum ) ;
    res = Exp((int)(realNum)) ;
    res = add(res , (Pow(realNum , 3))) ;
    res = sub(res,2) ;
    printf("i. The value of f(x) = e^x + x^3 - 2 at the point %0.4lf is %0.4lf \n" , realNum , res) ;
    thePow = (Pow (realNum , 2)) ;
    res = mul(realNum , 3) ;
    thePow = mul(thePow , 2 ) ;
    res = add(res , thePow) ;
    printf("ii. The value of f(x) = 3x + 2*x^2 at the point %0.4lf is %0.4lf \n" , realNum, res) ;
    thePow = Pow(realNum , 3) ;
    thePow = mul(thePow , 4) ;
    thePow =div(thePow , 5 ) ;
    res = sub(thePow , (mul(realNum,2))) ;
    printf("iii. The value of f(x) = ((4*x^3)/5) - 2*x at the point %0.4lf is %0.4lf \n" , realNum, res) ;
    return 0;
}
