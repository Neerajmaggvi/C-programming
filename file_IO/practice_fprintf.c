#include<stdio.h>

int main()
{
    int num = 25;
    
    // fprintf :
    FILE *fp = fopen("data.txt","w+");
    fprintf(fp, "num = %d\n",num); // This writes the data into the file 
    fclose(fp);

    // fscanf :
    fp = fopen("data.txt","r");
    fscanf(fp, "%d",&num); // This reads the data from the file
    fclose(fp);

    printf("%d\n",num);

    return 0;
}