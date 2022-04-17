#include<stdio.h>

int snakeWaterGun(char you, char me){
    if(you == me){
        return 0;

    }
    if ((me == "s") && (you == "w"))
        {
            return 1;
        }
        else if((me == "w") && (you == "s")){
            return -1;
        }
        if ((me == "g") && (you == "s"))
        {
            return 1;
        }
        else if((me == "s") && (you == "g")){
            return -1;
        }
        if ((me == "g") && (you == "w"))
        {
            return 1;
        }
        else if((me == "w") && (you == "g")){
            return -1;
        }

}

int main(){
    char you,me;
    printf("Enter the 's' for snake 'w' for water and 'g' for gun \n");
    scanf("%c",&you);
    scanf("%c",&me);
    int ans = snakeWaterGun(you,me);
    if (ans == 0)
    {
        printf("game Draw! \n");

    }
    else if(ans == 1){
        printf("You win !\n");

    }
    else{
        printf("you lose!\n");
    }
printf("You chose %c amd me chose %c \n",you , me);
}