PShape gumdam;
void setup()
{
  size(500, 500, P3D);
  gumdam = loadShape("Gumdam.obj");
}
void draw()
{
  background(#C37DFC);
  translate(250, 500);
  scale(20, 20, 20);
  rotateY(radians(frameCount));
  shape(gumdam);
}
