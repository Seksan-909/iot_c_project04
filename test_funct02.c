#include <stdio.h>

#define line printf("-------------------------------------\n");

void calsquarearea(){
    double widths, longs
    double areaSquare,

    line
    printf(" SHAPE AREA\n");
    line

    printf("Pic Square.1\n");
    printf("Input widths : "); scanf("%lf", &widths);
    printf("Input longs :"); scanf("%lf",&longs);
    areaSquare = widths * longs;
    printf("Area sauare is : %.2lf\n", areaSquare);
    line

}
void calTriangleArea(){
    double bases, highs;
    double areTriangle;
    printf("Pic Square.1\n");
    printf("Input bases : "); scanf("%lf", &bases);
    printf("Input hifhs :");   scanf("%lf",&highs);
    areTriangle = bases * bases;
    printf("Area sauare is : %.2lf\n", areTriangle);
    line
}

void main(){
    line
    printf(" SHAPE AREA\n");
    line
   
   for(i=1; i<=2; i++){
    calSquareArea();
   }

   calTriangleArea();
   calTriangleArea();
}