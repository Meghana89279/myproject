#include<stdio.h>

void main()
{
        int days;
        int total = 0;
        int avg;
        int num;
        int water_perday;

        printf("Enter the Number of Days: ");
        scanf("%d",&days);

        for(num=1;num<=days;num++)
        {
                printf("Enter the water consumption day%d: ",num);
                scanf("%d",&water_perday);
        	
		total = total + water_perday;
	}

        printf("Total Water Consumption in a Month:%d\n",total);

        avg = total/days;
	
        printf("Average Water Consumption in a Month:%d\n",avg);
}

