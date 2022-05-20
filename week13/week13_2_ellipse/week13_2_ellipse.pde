void setup()
{
  size(400, 300);
  textSize(40);
}
int choice = -1;
void draw()
{
  background(#FC7D7D);
  fill(#C37DFC);
  if(choice==0) ellipse(25, 25,  40, 40);
  if(choice==1) ellipse(25, 75,  40, 40);
  if(choice==2) ellipse(25, 125, 40, 40);
  text("Choice 1", 50, 50);
  text("Choice 2", 50, 100);
  text("Choice 3", 50, 150);
}
void mousePressed()
{
  choice = int (random(3));
}
