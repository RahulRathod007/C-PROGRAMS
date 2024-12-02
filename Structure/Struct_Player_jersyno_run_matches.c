//Wap program to Create a structure name as Player with using field jersyNo,run,matches.to take 5 record from user and display it.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  struct player
  {
  int jersy;
  int run ;
  int matches;
  };
  struct player p1;
  printf("\n Enter a jercy no run matches of player 1 \n");
  scanf("%d%d%d",&p1.jersy,&p1.run,&p1.matches);  
  printf("\n Player 1 ");
  printf("\n Jersy no %d",p1.jersy);
  printf("\n Runs  %d",p1.run);
  printf("\n Matches %d",p1.matches);
  printf("\n\n");

  struct player p2;
  printf("\n Enter jersy no run matches of player 2 \n");
  scanf("%d%d%d",&p2.jersy, &p2.run, &p2.matches);
  printf("\n Player 2");
  printf("\n jersy no %d",p2.jersy);
  printf("\n Runs  %d",p2.run);
  printf("\n Matches %d",p2.matches);
  printf("\n\n");
  
  struct player p3;
  printf("\n Enter a jersy no run matches of player 3 \n");
  scanf("%d%d%d",&p3.jersy,&p3.run,&p3.matches);
  printf("\n Player 3 ");
  printf("\n Jersy no %d",p3.jersy);
  printf("\n Runs %d",p3.run);
  printf("\n Matches %d",p3.matches);
  printf("\n\n");  
  
  struct player p4;
  printf("\n Enter a jersy no run matches of player 4 \n");
  scanf("%d%d%d",&p4.jersy,&p4.run,&p4.matches);
  printf("\n Player 4 ");
  printf("\n Jersy no %d",p4.jersy);
  printf("\n Runs %d",p4.run);
  printf("\n Matches %d",p4.matches);
  printf("\n\n");  
  
  struct player p5;
  printf("\n Enter a jersy no run matches of player 5 \n");
  scanf("%d%d%d",&p5.jersy,&p5.run,&p5.matches); 
  printf("\n Player 5 ");
  printf("\n Jersy no %d",p5.jersy);
  printf("\n Runs %d",p5.run);
  printf("\n Matches %d",p5.matches);
  getch();
}