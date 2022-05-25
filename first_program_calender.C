void main()
{
 int n,b=1,p,z;
 char month[10];
 loop:
 clrscr();

 gotoxy(20,3);
 printf("       ^Welcome^\n        ^This Software is Made By Bhagyesh Patel^");

 gotoxy(10,7);
 printf("Enter No. of blank block before 1 :- ____\n\n         Enter of Days in 1month   :-         ____\n\n");
 printf("         Enter Name of Month       :-         ____\n\n         Enter Name of Year        :-         ____");
 gotoxy(47,7); scanf("%d",&n);

 gotoxy(47,9); scanf("%d",&z);

 gotoxy(47,11); scanf("%s",&month);

 gotoxy(47,13); scanf("%d",&p);

 printf("\n\n\n                     <%9s %4d>",month,p);

 printf("\n\n       |-----------------------------------------|");
 printf("\n       |  SUN|  MON|  TUE|  WEN|  THU|  FRI|  SAT|");
 printf("\n       |-----------------------------------------|\n       |");

 if(z<28||z>31)
 z=31;

 while(n>=7)
  {
   n=0;
  }
 p=7-n;

while(n>0)
  {
   printf("     |");
   n--;
  }


 for(n=1;n<7;n++)/*3456*/
  {
   b=bhagyesh(b,z,p);
   printf("\n       |");p=7;
  }

 printf("-----------------------------------------|\n\n");


 printf("\n        Do You Like To See Calender for Next Month");
 printf("\n\n            press 1 for Yes n press 2 for Exit:- ");
 scanf("%d",&p);
 switch(p)
  {
   case 1: b=1; goto loop;
   default:printf("\n\n\n\n   *Thank   You   For   Visit   from   Bhagyesh   Patel\n\n\n      facebook.com/uzrnem   You   Can   contact   me");
  }
 getch();
}

bhagyesh(int b,int z,int p)
{
 for(;b<=z&&p>0;p--)
  {
   printf("%5d|",b);
   b++;
  }
 for(;p>0;p--)
  {
   printf("     |");
  }
  return(b);
}