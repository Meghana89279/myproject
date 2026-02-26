#include <stdio.h>

#define MAX_VOTE 10

int main() 
{
	int candidates = 3;
	int vote; 
	int choice;
    	int candidate_A = 0;
       	int candidate_B = 0;
       	int candidate_C = 0;
    	int total_votes = 0;
    	int voters[MAX_VOTE] = {101,102,103,104,105,106,107,108,109,110};
    	int voted[MAX_VOTE] = {0};
    	int voter_id; 
	int num; 
	int authority;
    	int valid;

    	while (1) 
	{
        	printf("\n****** Voting System ******\n");
        	printf("1. Candidates\n2. Results\n3. Exit\n");
        	printf("Enter your choice: ");
        	scanf("%d", &choice);

        	switch (choice) 
		{
        		case 1: 
			{
                		if (total_votes >= MAX_VOTE) 
				{
                    			printf("Voting limit reached\n");
                    			break;
                		}

                		printf("Enter your voter ID: ");
                		scanf("%d", &voter_id);
                		valid = 0;

                		for (num = 0; num < MAX_VOTE; num++) 
				{
                    			if (voters[num] == voter_id) 
					{
                        			valid = 1;
                        			if (voted[num]) 
						{
                            				printf("You have already voted\n");
                            				break;
                        			}

                        			printf("\n--- List of Candidates ---\n");
                        			printf("1. Candidate A\n2. Candidate B\n3. Candidate C\n");
                        			printf("Enter your vote: ");
                        			scanf("%d", &vote);

                        			switch (vote) 
						{
                            				case 1:
                                			{
								candidate_A++;
                                				printf("Vote recorded for Candidate A\n");
								break;
							}
						
							case 2:
							{
                                				candidate_B++;
                                				printf("Vote recorded for Candidate B\n");
                                				break;
							}
							
							case 3:
							{
								candidate_C++;
                                				printf("Vote recorded for Candidate C\n");
                                				break;
							}
							
							default:
							{
                                				printf("Invalid candidate choice!\n");
                                				break;
                        				}
						}

                        			voted[num] = 1;  
                        			total_votes++;
                        			break;
                			}
                
				}

                		if (!valid) 
				{
                	    		printf("Invalid voter ID\n");
                		}
                		break;
            		}

            		case 2: 
			{
                		printf("Enter the authority ID: ");
                		scanf("%d", &authority);

                		if (authority == 123) 
				{
                    			printf("\n--- Results ---\n");
                    			printf("Candidate A: %d votes\n", candidate_A);
                    			printf("Candidate B: %d votes\n", candidate_B);
                    			printf("Candidate C: %d votes\n", candidate_C);

                    			if (candidate_A > candidate_B && candidate_A > candidate_C) 
					{
                        			printf("Candidate A is the winner with %d votes\n", candidate_A-1);
                    			} 
					else if (candidate_B > candidate_A && candidate_B > candidate_C) 
					{
                        			printf("Candidate B is the winner with %d votes\n", candidate_B-1);
                    			}
				       	else if (candidate_C > candidate_A && candidate_C > candidate_B) 
					{
                        			printf("Candidate C is the winner with %d votes\n", candidate_C-1);
                    			} 
					else 
					{
                        			printf("It is a tie between candidates\n");
                    			}
                		}
			       	else 
				{
                    			printf("Invalid authority ID\n");
                		}
                		break;
            		}

            		case 3:
			{
                		printf("\n--- Exiting system ---\n");
                		return 0;
			}
			
        		default:
			{
                		printf("Invalid choice\n");
			}
        	}
    	}
}

