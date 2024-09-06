#include <stdio.h>

int main(void) {

    int i,j;
//乗算処理
    for (i = 1; i < 10; i ++){
        for(j = 1; j < 10; j++){
            if(i >j){
                continue;
            }
            printf("%d * %d = %d\n", i, j, i * j);
        }
        
        printf("---------\n");
    }
    return 0;
}