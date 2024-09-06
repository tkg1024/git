#include <stdio.h>

int main(void) {
    int i, distance, average_speed, times;
    float duration;

    printf("計算する回数を入力してください:");
    scanf("%d", &times);


    for(i = 1; i <=times; i++){

        printf("隔離(km)入力してください:");
        scanf("%d", &distance);

        printf("平均速度(km/h)を入力してください:");
        scanf("%d", &average_speed);

        duration = (float)distance / average_speed;

        printf("所要時間は%3.1f時間です.\n", duration);
    }
       

       return 0;
}