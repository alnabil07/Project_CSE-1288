#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NUM_SPACES 10
int  noc=0,nob=0,nok=0,amount=0,count=0,num_occupied = 0;
int spaces[NUM_SPACES] = {0};

int main()
{
    while(1)
    {
    printf("\nParking Management System\n");
    printf("_________________________\n");
    switch(menu())
    {
        case 1:
            park_a_vehicle();
            break;
        case 2:
            show_data();
            break;
        case 3:
            remove_a_vehicle();
            break;
        case 4:
            Delete();
            break;
        case 5:
            exit(0);
        default :
            printf("\nInvalid Choice");
    }
    getch();
    system("cls");
    }
}

int menu()
{
    int choice;
    printf("\n1. Park a Vehicle.");
    printf("\n2. Show Status.");
    printf("\n3. Remove a Vehicle.");
    printf("\n4. Delete All Data.");
    printf("\n5. Exit.");
    printf("\n\nEnter your choice:");
    scanf("%d",&choice);
    return choice;
}


void park_a_vehicle()
{
    if (num_occupied == NUM_SPACES)
        {
          printf("Sorry, the parking lot is full.\n");
        }
    else
    {
    int cho;
    printf("1.  Enter Bus.\n2.  Enter Car.\n3.  Enter Bike.\n");
    printf("\nEnter your choice:");

    scanf("%d", &cho);

        switch(cho)
        {
        case 1:
            bus();
            break;
        case 2:
            car();
            break;
        case 3:
            bike();
            break;
        default:
            printf("\nInvalid Choice");
        }
    }
}

void show_data()
{
    printf("Space\tOccupied\n");
        int i;

        for (i = 0; i < NUM_SPACES; i++)
        {
          printf("%d\t%s\n", i + 1, spaces[i] ? "Yes" : "No");

        }
    printf("\nNumber of Bus=%d", nob);
    printf("\nNumber of Car=%d", noc);
    printf("\nNumber of Bike=%d", nok);
    printf("\nTotal Number of Vehicle=%d", count);
    printf("\nTotal Earnings=%d",amount);
}

void remove_a_vehicle()
{
     if (num_occupied == 0) {
          printf("The parking lot is empty.\n");
        } else {
          int space_num;
          printf("Enter the space number: ");
          scanf("%d", &space_num);
          if (space_num < 1 || space_num > NUM_SPACES) {
            printf("Invalid space number.\n");
          } else if (!spaces[space_num - 1]) {
            printf("This space is already empty.\n");
          } else {
            spaces[space_num - 1] = 0;
            num_occupied--;
            printf("Your car has been removed from space %d.\n", space_num);
          }
        }
}

void Delete()
{
    noc=0;
    nob=0;
    nok=0;
    amount=0;
    count=0;
    num_occupied=0;
}

void car()
{
  noc++;
  amount=amount+50;  //fee for Car parking is 50
  count++;
  if (num_occupied == NUM_SPACES)
        {
          printf("Sorry, the parking lot is full.\n");
        }
  else
        {
          int i;
          for (i = 0; i < NUM_SPACES; i++)
          {
            if (!spaces[i])
            {
              spaces[i] = 1;
              num_occupied++;
              printf("Your car has been parked in space %d.\n", i + 1);
              break;
            }
          }
        }
}

void bike()
{
  nok++;
  amount=amount+20;  //fee for Bike parking is 20
  count++;
  if (num_occupied == NUM_SPACES)
        {
          printf("Sorry, the parking lot is full.\n");
        }
  else
        {
          int i;
          for (i = 0; i < NUM_SPACES; i++)
          {
            if (!spaces[i])
            {
              spaces[i] = 1;
              num_occupied++;
              printf("Your bike has been parked in space %d.\n", i + 1);
              break;
            }
          }
        }
}

void bus()
{
  nob++;
  amount=amount+100;  //fee for Bus parking is 100
  count++;
  if (num_occupied == NUM_SPACES)
        {
          printf("Sorry, the parking lot is full.\n");
        }
  else
        {
          int i;
          for (i = 0; i < NUM_SPACES; i++)
          {
            if (!spaces[i])
            {
              spaces[i] = 1;
              num_occupied++;
              printf("Your bus has been parked in space %d.\n", i + 1);
              break;
            }
          }
        }
}
