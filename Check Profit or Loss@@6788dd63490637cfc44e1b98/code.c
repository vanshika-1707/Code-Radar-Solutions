#include <stdio.h>
int main(){
    int cp, sp;
    scanf("%d %d", &cp, &sp);
    if (cp > sp){
        printf("Loss\n");
    }
    else if (cp < sp){
        printf("Profit\n");
    }
    else{
        printf("no Profit no Loss");
    }
    return 0;
}