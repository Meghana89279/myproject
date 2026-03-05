/*
 * File Name : event_tickets.c
 * Date :
 * Author : Meghana
 * Description : Implement an event ticketing system where users can buy tickets for different events. Each event has a limited number of tickets, and the system should track ticket sales and availability. */

#include<stdio.h>

void main()
{
        int events;
        int ticket;
	int dance;
	int singing;
	int comedy;
        int dance_ticket = 5;
        int singing_ticket = 5;
        int comedy_ticket = 5;
        int total_amount;
	int dance_event_price = 100;
	int singing_event_price = 75;
	int comedy_event_price = 100;
	int num1;
	int num2;
	int num3;

        while(1)
        {
                printf("\n****** Welcome to Entertainment World! ******\n");
		printf("\n**Events** \t **Available Tikets**\t\t**Price**\n");
                printf("1. Dance Event\t"); printf("\t%d\t",dance_ticket); printf("\t\t   100\n");
		printf("2. Singing Event\t"); printf("%d\t",singing_ticket); printf("\t\t   75\n");
		printf("3. Comedy Event\t"); printf("\t%d\t",comedy_ticket); printf("\t\t   75\n");
		printf("4. Total Amount\n\v");

                printf("Enter the events: ");
                scanf("%d",&events);

                switch(events)
                {
                        case 1:
                        {
                                printf("\n***** Tickets of Dance Event *****\n");
                                printf("Enter the number 1 of tickets: ");
                                scanf("%d",&num1);          
				printf("\n--- Tickets Availability Check ---\n\v");

                                if(num1 <= dance_ticket)
                                {
                                        printf("Tickets are Available and Booked\n");
                                        printf("Remaining Tickets are:%d\n\v",dance_ticket - num1);
                                	
					dance_ticket = dance_ticket - num1;
					dance = dance_event_price * num1;
					printf("Amount of dacnce ticket is:%d\n",dance);
				}
                                else
                                {
                                        printf("Tickets are not Available\n\v");
                                }
				break;
                        }

                        case 2:
                        {
                                printf("\n*****Tickets of Singing Event *****\n");
                                printf("Enter the number of tickets: ");
                                scanf("%d",&num2);
				printf("\n--- Tickets Availability Check ---\n\v");

                                if(num2 <= singing_ticket)
                                {
                                        printf("Tickets are Available and Booked\n");
                                        printf("Remaining Tickets are:%d\n\v",singing_ticket - num2);
                                	
					singing_ticket = singing_ticket - num2;
					singing = singing_event_price * num2;
                                        printf("Amount of singing ticket is:%d\n",singing);
				}
                                else                                                                        
				{
                                        printf("Tickets are not Available\n\v");
                                }
				break;
                        }

			case 3:
                        {
                                printf("\n***** Tickets of Comedy Event *****\n");
                                printf("Enter the number3 of tickets: ");
                                scanf("%d",&num3);                           
				printf("\n--- Tickets Availability Check ---\n\v");

                                if(num3 <= comedy_ticket)
                                {
                                        printf("Tickets are Available and Booked\n");
                                        printf("Remaining Tickets are:%d\n\v",comedy_ticket - num3);
                                
					comedy_ticket = comedy_ticket - num3;
					comedy = comedy_event_price * num3;
                                        printf("Amount of comedy ticket is:%d\n",comedy);
				}
                                else 
				{
                                        printf("Tickets are not Available\n\v");
                                }
				break;
                        }
			
			case 4:
			{
				total_amount = dance + singing + comedy;
				printf("Total amount:%d\n",total_amount);
				break;
			}

			default:
			{
				printf("Invalid Choice\n");
			}
                }
        }
}

