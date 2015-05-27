#include <MeggyJrSimple.h> 

int x=0;          //player x coordinate
int y=7;          //player y coordinate
int portalx=0;    
int portaly=0; 
int direction=180; 
int counter=0;
int level=1;
int start=0;


void setup() {
  // put your setup code here, to run once:
  MeggyJrSimpleSetup();

}

void loop() 
{
  if (counter>9999) //allows one to press the directional buttons whenever they wont instead of pushing it at a set time
  {
    counter=0;
  }
  else counter++;
  if(level==1)
  {
    drawPortal1();
    Maze1();
    drawDot();
  if (counter %250 == 0)  //makes the dot move at that speed
  {
    UpdateDot();
  }  
  if (ReadPx(x,y) == Red)      //returns true if there's a match
    {
      x=0;
      y=7;  
    }
  if (ReadPx(x,y) == Green)      //returns true if there's a match
    {
       level++;
       x=0;
       y=7;
    }

  DisplaySlate(); 
  ClearSlate();
  CheckButtonsPress();
    if (Button_Right)
    {
      direction = 90;
    }    
                      
    if (Button_Left)
    {
      direction = 270;
    }
      
    if (Button_Down)
    {   
      direction = 180;  
    }
      
    if (Button_Up) 
    {
      direction = 0;
    }
   
}
  if(level==2)
  {
  drawPortal1();
  Maze2();
  drawDot();
  if (counter %250 == 0)  //makes the dot move at that speed
  {
    UpdateDot();
  }  
    if (ReadPx(x,y) == Red)      //returns true if there's a match
    {
      x=0;
      y=7; 
    }
  if (ReadPx(x,y) == Green)      //returns true if there's a match
    {
       level++;
       x=0;
       y=7;
    }

  DisplaySlate(); 
  ClearSlate();
  CheckButtonsPress();
    if (Button_Right)
    {
      direction = 90;
    }    
                      
    if (Button_Left)
    {
      direction = 270;
    }
      
    if (Button_Down)
    {   
      direction = 180;  
    }
      
    if (Button_Up) 
    {
      direction = 0;
    }
  }
  
  
    if(level==3)
  {
  drawPortal1();
  Maze3();
  drawDot();
  if (counter %250 == 0)    //makes the dot move at that speed
  {
    UpdateDot();
  }  
  if (ReadPx(x,y) == Red)      //returns true if there's a match
    {
      x=0;
      y=7;    
    }
    
  
  DisplaySlate(); 
  ClearSlate();
  CheckButtonsPress();
    if (Button_Right)
    {
      direction = 90;
    }    
                      
    if (Button_Left)
    {
      direction = 270;
    }
      
    if (Button_Down)
    {   
      direction = 180;  
    }
      
    if (Button_Up) 
    {
      direction = 0;
    }
    if (x==1&&y==0)  //coordinate that is the end of the game and when it is touched the game win scrren show
{
  for (int i=0; i<8; i++)        //if the i is less than 8 then don't add another row of color
    for (int y=0; y<8; y++)      //if the y is less than 8 then don't add another row of color
  {  
    DrawPx(i,y,1);             //draw the color red one by one from bottom to top and left to right to fill up the whole meggy starting from (0,0)
    DisplaySlate();            //shows colored dots
    delay(100);                //delays the showing of dots 
  }
  for (int i=0; i<7; i++)      //if the i is less than 7 then don't add another row of color
    for (int y=0; y<7; y++)    //if the y is less than 7 then don't add another row of color
  {
    DrawPx(i,y,2);             //draw the color orange one by one from bottom to top and left to right filling in the square with the points (0,0), (0,6), (6,0), (6,6)
    DisplaySlate();            //shows colored dots
    delay(100);                //delays the showing of dots 
  }
   for (int i=0; i<6; i++)      //if the i is less than 6 then don't add another row of color
    for (int y=0; y<6; y++)    //if the y is less than 6 then don't add another row of color 
  {
    DrawPx(i,y,3);             //draw the green orange one by one from bottom to top and left to right filling in the square with the points (0,0), (0,5), (5,0), (5,5)
    DisplaySlate();            //shows colored dots
    delay(100);                //delays the showing of dots 
  }
   for (int i=0; i<5; i++)      //if the i is less than 5 then don't add another row of color
    for (int y=0; y<5; y++)    //if the y is less than 5 then don't add another row of color
  {
    DrawPx(i,y,10);             //draw the color swamp green one by one from bottom to top and left to right filling in the square with the points (0,0), (0,4), (4,0), (4,4)
    DisplaySlate();            //shows colored dots
    delay(150);                //delays the showing of dots 
  }
   for (int i=0; i<4; i++)      //if the i is less than 4 then don't add another row of color
    for (int y=0; y<4; y++)     //if the y is less than 4 then don't add another row of color
  {
    DrawPx(i,y,5);             //draw the color blue one by one from bottom to top and left to right filling in the square with the points (0,0), (0,3), (3,0), (3,3)
    DisplaySlate();            //shows colored dots
    delay(200);                //delays the showing of dots 
  }
   for (int i=0; i<3; i++)      //if the i is less than 3 then don't add another row of color
    for (int y=0; y<3; y++)     //if the y is less than 3 then don't add another row of color
  {
    DrawPx(i,y,6);             //draw the color purple one by one from bottom to top and left to right filling in the square with the points (0,0), (0,2), (2,0), (2,2)
    DisplaySlate();            //shows colored dots
    delay(300);                //delays the showing of dots 
  }
   for (int i=0; i<2; i++)      //if the i is less than 2 then don't add another row of color
    for (int y=0; y<2; y++)     //if the y is less than 2 then don't add another row of color
  {
    DrawPx(i,y,7);             //draw the color light blue one by one from bottom to top and left to right filling in the square with the points (0,0), (0,1), (1,0), (1,1)
    DisplaySlate();            //shows colored dots
    delay(400);                //delays the showing of dots 
  }
   for (int i=0; i<1; i++)      //if the i is less than 1 then don't add another row of color
    for (int y=0; y<1; y++)     //if the y is less than 1 then don't add another row of color
  {
    DrawPx(i,y,8);             //draw the color brown one by one from bottom to top and left to right filling in the square with the points (0,0), 
    DisplaySlate();            //shows colored dots
    delay(500);                //delays the showing of dots 
  }
 
                 
}
   }
 if (Button_A) 
  {
    level=1;
  }
   
}  

void drawDot()
{
 DrawPx(x,y,Blue);
}

void UpdateDot()
{
  if (direction == 90)      
   {
     if (x < 7)
       x+=1; 
   }
  if (direction == 270)
   {      
     if (x > 0)
       x-=1;   
   }             
  if (direction == 180)
   {
     if (y > 0)
       y-=1;
   }
  
  if (direction == 0)
   {
     if (y < 7)
       y+=1;
   }
    
}


void drawPortal1()
{
  DrawPx(1,0,Green);
}


void Maze1()
{
  DrawPx(0,0,1);
  DrawPx(0,1,1);
  DrawPx(0,2,1);
  DrawPx(0,3,1);
  DrawPx(1,2,1);
  DrawPx(1,3,1);
  DrawPx(1,5,1);
  DrawPx(1,6,1);
  DrawPx(1,7,1);
  DrawPx(2,0,1);
  DrawPx(2,2,1);
  DrawPx(2,3,1);
  DrawPx(2,5,1);
  DrawPx(2,6,1);
  DrawPx(2,7,1);
  DrawPx(3,0,1);
  DrawPx(3,2,1);
  DrawPx(3,3,1);
  DrawPx(3,7,1);
  DrawPx(4,0,1);
  DrawPx(4,2,1);
  DrawPx(4,3,1);
  DrawPx(4,4,1);
  DrawPx(4,5,1);
  DrawPx(4,7,1);
  DrawPx(5,0,1);
  DrawPx(5,2,1);
  DrawPx(5,3,1);
  DrawPx(5,4,1);
  DrawPx(5,5,1);
  DrawPx(5,7,1);
  DrawPx(6,0,1);
  DrawPx(6,7,1);
  DrawPx(7,0,1);
  DrawPx(7,1,1);
  DrawPx(7,2,1);
  DrawPx(7,3,1);
  DrawPx(7,4,1);
  DrawPx(7,5,1);
  DrawPx(7,6,1);
  DrawPx(7,7,1);
}

void Maze2()
{
  DrawPx(0,0,1);
  DrawPx(0,1,1);
  DrawPx(0,2,1);
  DrawPx(3,6,1);
  DrawPx(1,2,1);
  DrawPx(1,4,1);
  DrawPx(1,5,1);
  DrawPx(1,7,1);
  DrawPx(2,0,1);
  DrawPx(2,2,1);
  DrawPx(2,4,1);
  DrawPx(2,5,1);
  DrawPx(2,7,1);
  DrawPx(3,0,1);
  DrawPx(3,2,1);
  DrawPx(3,4,1);
  DrawPx(3,5,1); 
  DrawPx(3,7,1);
  DrawPx(4,0,1);
  DrawPx(4,2,1);
  DrawPx(4,7,1);
  DrawPx(5,5,1);
  DrawPx(5,0,1);  
  DrawPx(5,2,1);
  DrawPx(5,3,1);
  DrawPx(5,4,1);
  DrawPx(5,5,1);
  DrawPx(5,7,1);
  DrawPx(6,0,1);
  DrawPx(6,7,1);
  DrawPx(7,0,1);
  DrawPx(7,1,1);
  DrawPx(7,2,1);
  DrawPx(7,3,1);
  DrawPx(7,4,1);
  DrawPx(7,5,1);
  DrawPx(7,6,1);
  DrawPx(7,7,1);
}

void Maze3()
{
 DrawPx(0,0,1);
 DrawPx(0,1,1);
 DrawPx(0,5,1);
 DrawPx(1,1,1);
 DrawPx(1,3,1);
 DrawPx(1,5,1);
 DrawPx(1,7,1);
 DrawPx(2,1,1);
 DrawPx(2,3,1);
 DrawPx(2,5,1);
 DrawPx(2,7,1);
 DrawPx(3,1,1);
 DrawPx(3,5,1);
 DrawPx(3,3,1);
 DrawPx(4,1,1);
 DrawPx(4,3,1);
 DrawPx(4,5,1);
 DrawPx(4,6,1);
 DrawPx(5,1,1);
 DrawPx(5,3,1);
 DrawPx(5,5,1);
 DrawPx(5,6,1);
 DrawPx(6,1,1);
 DrawPx(6,3,1);
 DrawPx(6,5,1);
 DrawPx(6,6,1);
 DrawPx(7,3,1);
}

  
  
  
  
  
  
