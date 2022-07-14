#include <stdio.h>
#include <stdlib.h>

int main(){
    double a, b, c, d, root1, root2, real, img;
    printf("\t\tFinding the root of a quadratic equation...\n");
    printf("\n\t\tEnter coefficient a, b and c : \n");
    scanf("%f%f%F", &a, &b, &c);

d = b * b - 4 * a * c;
if(d > 0){
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    printf("\n\t root1 = %.2f and root2 = %.2f", root1, root2);
}
else if(d == 0){
    root1 = root2 = -b / (2 * a);
    printf("root1 = root2 = %.2f;", root1);
}
else{
    real = -b / (2 * a);
    img = sqrt(-d) / (2 * a);
    printf("root1 = %.2f+%2fi and root2 = %.2f-%.2fi", real, img,real, img);
}
    return 0;
}
