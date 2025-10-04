#include<graphics.h>
#include<stdio.h>
main()
{
   int gd = DETECT, gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   midx = getmaxx()/2;
   midy = getmaxy()/2;
  setbkcolor(GREEN);




 
  setviewport(midx - 50, midy - 50, midx + 50, midy + 50, 1);
  circle(100,100,50);          /* drawn in white color */ 
   setcolor(RED);
   circle(200,200,50);          /* drawn in red color   */
 
   getch();
   closegraph();
   return 0;
}
