/*
ScreenSaver
by: Taiyo Endo 	  
 */

#include <MeggyJrSimple.h>  

int color;
void setup()
{
  MeggyJrSimpleSetup();
  color = 1;
}

void loop()
{
 draw1();
 draw2();
 draw3();
 draw4();
 color1();
 DisplaySlate();
 delay(200);
 ClearSlate();
}



void color1()
{
 color++;
 if (color > 12)
 {
  color=1; 
 }
}


void draw1()
{
  for (int a=0; a<4; a++)
  for (int b=0; b<4; b++)
  DrawPx(a,b,color);
}

void draw2()
{
  for (int c=4; c<8; c++)
  for (int d=0; d<4; d++)
  DrawPx(c,d,color+1);
}

void draw3()
{
  for (int e=0; e<4; e++)
  for (int f=4; f<8; f++)
  DrawPx(e,f,color+2);
}

void draw4()
{
  for (int g=4; g<8; g++)
  for (int h=4; h<8; h++)
  DrawPx(g,h,color+3);
}




/*
int color;
void setup()                   
{
  MeggyJrSimpleSetup();  
  color = 1;    
}
void loop()                     
{ 
 for (int i=0; i < 8; i++)
 {
  for (int j=0; j < 8; j++)
  {
    DrawPx(i,j,color);    
    DisplaySlate();
    delay(50);  
  }
 color ++;
 }
 color = 1;
 ClearSlate();
}
*/
