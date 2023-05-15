#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int toss;

    int i;
    srand(time(NULL));

    int overs;

    int target, score, balls, comp_target;
    int input;
    
    int number = (rand() % 6)+1;

    int comp_score;
    int comp_input = number;


    printf("Welcome to cricket in C. Choose\n1 - to bat first\n2 - to bowl first\n");
    scanf("%d",&toss);

    while (toss>2 || toss<1)
    {
        printf("Invalid input. Choose\n1 - to bat first\n2 - to bowl first\n");
        scanf("%d", &toss);
    }

    printf("Enter the number of overs to play : ");
    scanf("%d",&overs);

    balls = overs * 6;
    score = 0;
    comp_score = 0;



    if (toss == 1)
    {
        for (i = 1; i <= balls; i++)
        {
            comp_input = (rand() % 6)+1;

            printf("Enter a number (between 0 - 6) : ");
            scanf("%d",&input);
            
            
            while (input>6 || input < 0)
            {
                printf("Invalid input. Please enter a number between 0 - 6 : ");
                scanf("%d",&input);
            }

            printf("\n\n");

            if (comp_input != input)
            {
                printf("ball %d of %d\n", i,balls);
                printf("Computer chose %d\n\n", comp_input);
                printf("%d balls left\n\n", balls-i);

                score = input + score;
                printf("You scored %d runs\n\n", input);
                printf("Current Score = %d\n", score);
            }
            
            else
            {
                printf("Bowled!\n");
                printf("Computer chose %d\n", comp_input);
                printf("you scored %d runs\n", score);
                i = balls+1;
            }

        }

        target = score + 1;

        printf("Computer will now chase your target of %d runs\n", target);

        i=1;
        comp_score = 0;

        for (i = 1; i <= balls; i++)
        {
            comp_input = (rand() % 6)+1;
            printf("Enter a number between (0 - 6) : ");
            scanf("%d", &input);

            while (input>6 || input < 0)
            {
                printf("Please enter a number between 0 - 6 : ");
                scanf("%d",&input);
            }

            printf("\n\n");
            
            if (comp_input != input)
            {
                printf("ball %d of %d\n\n",i,balls);
                printf("target = %d\n", target);
                printf("computer chose : %d\n", comp_input);
                printf("You chose : %d\n",input);
                comp_score = comp_input + comp_score;
                printf("To win, computer needs to score %d runs in %d balls\n\n", target-comp_score,balls-i);
                
                if (target - comp_score <= 0)
                {
                    printf("computer chose : %d\n", comp_input);
                    printf("you chose %d",input);
                    printf("Computer scored %d runs\n", comp_score);
                    i = balls+1;
                }
                
            }

            else
            {
                printf("Bowled!\n");
                printf("Computer scored %d runs\n", comp_score);
                i = balls+1;
            }
        }

        if (score > comp_score)
        {
            printf("Congrats! you won");
        }
        else if (score < comp_score)
        {
            printf("computer wins. Better luck next time");
        }
        else
        {
            printf("Match drawn");
        }

    }


    else if (toss == 2)
    {
        printf("Computer will bat first\n");
        for (i = 1; i < balls; i++)
        {
            comp_input = (rand() % 6)+1;
            printf("Enter a number (between 0 - 6) : ");
            scanf("%d",&input);
            
            
            while (input>6 || input < 0)
            {
                printf("Invalid input. Please enter a number between 0 - 6 : ");
                scanf("%d",&input);
            }

            printf("\n\n");

            if (comp_input != input)
            {
                printf("ball %d of %d\n", i,balls);
                printf("Computer chose : %d\n\n", comp_input);
                printf("You chose : %d\n", input);
                printf("%d balls left\n\n", balls-i);

                comp_score = comp_input + comp_score;
                printf("computer scored %d runs\n\n", comp_input);
                printf("current Score = %d\n", comp_score);
            }
            
            else
            {
                printf("Bowled!\n");
                printf("Computer chose : %d\n", comp_input);
                printf("you chose : %d\n\n", input);
                printf("computer scored %d runs\n", comp_score);
                i = balls + 1;
                target = comp_score + 1;
                printf("To win, you need to score %d runs in %d balls\n", target, balls);
            }

            i=1;
            score = 0;

            for (i = 1; i <= balls; i++)
            {
                comp_input = (rand() % 6)+1;
                printf("Enter a number between (0 - 6) : ");
                scanf("%d", &input);

                while (input>6 || input < 0)
                {
                    printf("Please enter a number between 0 - 6 : ");
                    scanf("%d",&input);
                }

                printf("\n\n");
                
                if (comp_input != input)
                {
                    printf("ball %d of %d\n\n",i,balls);
                    printf("target = %d\n", target);
                    printf("computer chose : %d\n", comp_input);
                    printf("You chose : %d\n",input);
                    score = input + score;
                    printf("To win, you need to score %d runs in %d balls\n\n", target - score,balls - i);
                    
                    if (target - score <= 0)
                    {
                        printf("computer chose : %d\n", comp_input);
                        printf("you chose %d",input);
                        printf("you scored %d runs\n", score);
                        i = balls+1;
                    }
                    
                }

                else
                {
                    printf("Bowled!\n");
                    printf("you scored %d runs\n", score);
                    i = balls+1;
                }
            }

            if (score > comp_score)
            {
                printf("Congrats! you won");
            }
            else if (score < comp_score)
            {
                printf("computer wins. Better luck next time");
            }
            else
            {
                printf("Match drawn");
            }

        }
        
    }
    
    return 0;
}