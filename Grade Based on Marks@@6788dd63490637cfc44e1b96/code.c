#include <stdio.h>
int main(){
    int grade;
    scanf("%d", &grade);
    if (grade >= 90){
        printf("A\n");
    }
    else if (grade >= 80 && grade < 90){
        printf("B");
    }
    else if (grade >= 70 && grade < 80){
        printf("C");
    }
    else if (grade >= 60 && grade < 70){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}