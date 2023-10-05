#include <stdio.h>

struct Car
{
    int speed;
    int hp;
    char name[256];
    char color[256];
    int weight;
};

int main(){
    struct Car GTR = {350, 3000, "GTR R35", "black", 1752};
    struct Car BMW = {250, 1500, "BMW M5", "BLUE", 2300};
    
    printf("1. Полное название машины - %s.\n2. Кол-во л.с - %d.\n3. Скорость машины - %d km/h.\n4. Цвет машины - %s.\n5. Вес машины - %d kg.\n",GTR.name, GTR.hp, GTR.speed, GTR.color, GTR.weight);
    printf("\n");
    printf("1. Полное название машины - %s.\n2. Кол-во л.с - %d.\n3. Скорость машины - %d km/h.\n4. Цвет машины - %s.\n5. Вес машины - %d kg.\n",BMW.name, BMW.hp, BMW.speed, BMW.color, BMW.weight);
}
