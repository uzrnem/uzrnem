/* Im Bhagyesh,My First Graphics Project In C ,My Teacher is Yash */
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
 {
  int gd = DETECT,gm,x,y;
  initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
  setbkcolor(RED);


  rectangle(36,24,576,384);       //rectangle of indian flag

  moveto(36,144);                 //first line seprated in orange and white
  lineto(576,144);

  moveto(36,264);                 //second line seprated in white and green
  lineto(576,264);

				    //filling colour in orange box
  setfillstyle(INTERLEAVE_FILL,YELLOW);
  floodfill(306,84,WHITE);


  setfillstyle(1,15);             //filling colour in white box
  floodfill(306,204,WHITE);

  setfillstyle(1,2);              //filling colour in green box
  floodfill(306,324,WHITE);

  setcolor(1);                    //lets go on circle
  circle(306,204,50);             //single line circle
  circle(306,204,51);             //double
  circle(306,204,52);             //triple


  moveto(306,204);                 // angle  360 / 0
  lineto(356,204);

  moveto(306,204);                 // angle  15
  lineto(354.2962,191.0591);

  moveto(306,204); 		   // angle  30
  lineto(349.3012,179);

  moveto(306,204); 		   // angle  45
  lineto(341.3553,168.6446);

  moveto(306,204); 		   // angle  60
  lineto(331,160.6987);

  moveto(306,204); 		   // angle  75
  lineto(318.9409,155.7037);

  moveto(306,204); 		   // angle  90
  lineto(306,154);

  moveto(306,204); 		   // angle  105
  lineto(293.0590,155.7037);

  moveto(306,204); 		   // angle  120
  lineto(281,160.6987);

  moveto(306,204); 		   // angle  135
  lineto(270.6446,168.6446);

  moveto(306,204); 		   // angle  150
  lineto(262.6987,179);

  moveto(306,204); 		   // angle  165
  lineto(257.7037,191.0591);

  moveto(306,204); 		   // angle  180
  lineto(256,204);


  moveto(306,204); 		   // angle  195
  lineto(257.7037,216.9609);

  moveto(306,204); 		   // angle  210
  lineto(262.6987,229);

  moveto(306,204); 		   // angle  225
  lineto(270.6446,239.3553);

  moveto(306,204); 		   // angle  240
  lineto(281,247.3012);

  moveto(306,204); 		   // angle  255
  lineto(293.0590,252.2962);

  moveto(306,204); 		   // angle  270
  lineto(306,254);

  moveto(306,204); 		   // angle  285
  lineto(318.9409,252.2962);

  moveto(306,204); 		   // angle  300
  lineto(331,247.3012);

  moveto(306,204); 		   // angle  315
  lineto(341.3553,239.3553);

  moveto(306,204); 		   // angle  330
  lineto(349.2962,229);

  moveto(306,204); 		   // angle  345
  lineto(354.2962,216.9409);

  setcolor(YELLOW);
  settextstyle(7,0,4);
  outtextxy(50,385,"By YASH(Sky-аб/96-0440-0880)");


  getch();
}
