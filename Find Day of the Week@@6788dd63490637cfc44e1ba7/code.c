#include <stdio.h>
int main(){
    int day;
    scanf("%d", &day);
    if (day == 1){
        printf("Monday\n");
    }
    else if (day == 2){
        printf("Tuesday\n");
    }
    else if (day == 3){
        printf("Wednesday");
    }
    else if(day == 4){
        printf("Thursday");
    }
    else if (day == 5){
        printf("Friday\n";)
    }
    else if (day == 6){
        printf("Saturday\n");
    }
    else if (day == 7){
        printf("Sunday\n");
    }
    else{
        printf("Invalid\n");
    }
    return 0;
}