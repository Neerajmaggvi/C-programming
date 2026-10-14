#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int secounds;
};

int main() {

    struct time T[2];

    for(int i = 0; i < 2; i++)
        {
            scanf("%d %d %d",&T[i].hours, &T[i].minutes,&T[i].secounds);
        }
    
    for(int i = 0; i < 2; i++)
        {
            printf("Timing for %d entry: %d:%d:%d\n",i+1,T[i].hours, T[i].minutes,T[i].secounds);
        }

    int total_hours = T[0].hours + T[1].hours;
    int total_minutes = T[0].minutes + T[1].minutes;
    int total_secounds = T[0].secounds + T[1].secounds;

    
    total_minutes = total_minutes + (total_secounds / 60);
    total_secounds = total_secounds % 60;

    
    total_hours = total_hours + (total_minutes / 60);
    total_minutes = total_minutes % 60;

    printf("Total time is: %02d:%02d:%02d\n",
           total_hours,
           total_minutes,
           total_secounds);
    

    return 0;
}