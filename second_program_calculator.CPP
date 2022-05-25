#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
int main()
{
 int a[3],i=0,o; a[0]=0; a[1]=0;
 char sky[20];
 float b=0;
 clrscr();
 gotoxy(6,6);
 cout<<"\n\t1\t2\t3\t+\n\n\t4\t5\t6\t-\n\n\t7\t8\t9\t*\n\n\t%\t0\t/\tEnter";
 gotoxy(1,1);
 cout<<"\n UZRNEM Corporation Presents Calculator\n\t";
 cin>>sky;
 for(int s=0;s<strlen(sky);++s)
  {
   switch(sky[s])
    {
     case '1':a[i]=a[i]*10+1;break;
     case '2':a[i]=a[i]*10+2;break;
     case '3':a[i]=a[i]*10+3;break;
     case '4':a[i]=a[i]*10+4;break;
     case '5':a[i]=a[i]*10+5;break;
     case '6':a[i]=a[i]*10+6;break;
     case '7':a[i]=a[i]*10+7;break;
     case '8':a[i]=a[i]*10+8;break;
     case '9':a[i]=a[i]*10+9;break;
     case '0':a[i]=a[i]*10+0;break;
     case '+':o=1;i=i+1;break;
     case '/':o=4;i=i+1;break;
     case '*':o=2;i=i+1;break;
     case '-':o=3;i=i+1;break;
     case '%':o=5;i=i+1;break;
     defaulf: goto exit;
    }
 }
  switch(o)
 {

   case 1:b=(float)a[0]+a[1];cout<<"\n\t\t="<<b;break;
   case 2:b=(float)a[0]*a[1];cout<<"\n\t\t="<<b;break;
   case 3:b=(float)a[0]-a[1];cout<<"\n\t\t="<<b;break;
   case 4:b=(float)a[0]/a[1];cout<<"\n\t\t="<<b;break;
   case 5:b=a[0]%a[1];cout<<"\n\t\t="<<b;break;
 }
 exit:
 getch();
 getch();
   return 0;
}

