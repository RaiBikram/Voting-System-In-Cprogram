#include <stdio.h>

// function to display election results
void voteResult(int c, int cpp, int java, int python)
{
    printf("\n***Vote Result***");
    printf("\nC Program         :%d Votes\n", c);
    printf("\nC++ Program       :%d Votes\n", cpp);
    printf("\nJava Program      :%d Votes\n", java);
    printf("\nPython Program    :%d Votes\n", python);

    // Determine the winer
    if (c > cpp && c > java && c > python)
    {
        printf("\n\nC Program win.\n");
    }
    else if (cpp > c && cpp > java && cpp > python)
    {
        printf("\n\nC++ program win.\n");
    }
    else if (java > c && java > cpp && java > python)
    {
        printf("\n\nJava program win.\n");
    }
    else if (python > c && python > cpp && python > java)
    {
        printf("\n\nPython program win\n");
    }
    else
    {
        printf("\n\nEqual Vote.\n\n");
    }
}

// conunting

void countVote(int vote, int *c, int *cpp, int *java, int *python)
{
    switch (vote)
    {
    case 1:
        (*c)++;
        break;
    case 2:
        (*cpp)++;
        break;
    case 3:
        (*java)++;
        break;
    case 4:
        (*python)++;
        break;
    default:
        printf("Invalid Vote !\n");
    }
}

int main()
{
    printf("\n***Welcome to the Voting System***\n\n");
    int choice;
    int c = 0, cpp = 0, java = 0, python = 0;

    printf("Press: 1 to vote for C Program.\n");
    printf("Press: 2 to vote for C++ Program.\n");
    printf("Press: 3 to vote for Java Program.\n");
    printf("Press: 4 to vote for Python Program.\n");
    printf("Press: 0 to Veiw Vote result.\n");

    while (1)
    {
        printf("Your choice:");
        scanf("%d", &choice);
        if (choice == 0)
        {
            voteResult(c, cpp, java, python);
            break;
        }
        else if (choice >= 1 && choice <= 4)
        {
            countVote(choice, &c, &cpp, &java, &python);
        }
        else
        {
            printf("Invalid Choice!, Please Vote again. \n");
        }
    }
    return 0;
}