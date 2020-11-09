#include "myMath.h"
#define EXP 2.71828182846

double Exp(int x) {
    if(x==0) return 1 ;
    double res = 1.0 ;
    for (int i = 0; i < x; i++) {
        res = res * EXP ;
    }
    return res ;
}

double Pow(double x , int y) {
    if(y==0) return 1 ;
    double res = 1.0 ;
    for (int i = 0; i < y; i++) {
        res = res * x ;
    }
    return res ;

}
