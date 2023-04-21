#include <iostream>
#include <stdio.h>
#include <cmath>

 static int pythOPP(double Hypotenuse, double Adjacent) {  

  // finds the opposite
  static double o  = sqrt(pow(Hypotenuse, 2) - pow(Adjacent, 2));

  //returns
  return o;
  // Remember: length of Hypotenuse can not be less than Adjacent length 
  // or it will return -2.14748e+9
  
}

  static int pythHYP(double Opposite, double Adjacent) {

  // finds the opposite
  static double h  = sqrt(pow(Opposite, 2) + pow(Adjacent, 2));

  // returns
  return h;
  
}

  static int pythADJ(double Hypotenuse, double Opposite) {

  // finds the opposite
  static double a  = sqrt(pow(Hypotenuse, 2) - pow(Opposite, 2));

  // returns
  return a;
  // Remember: length of Hypotenuse can not be less than Opposite length 
  // or it will return -2.14748e+9
   
}

static int ml_L(double ml) {
  //  converts mL to L
  double output = ml / 1000;
  return output; 
  
}

static int l_ML(double l) {
 
    //  converts L to mL
  double output = l * 1000;
  return output; 
  
}

static int g_KG(double g) {
 
  // converts grams to kilograms

  double output = g / 1000;
  return output; 
  
}

static int kg_G(double kg) {
 
  // converts kilograms to grams
  double output = kg * 1000;
  return output; 
  
}

static int sphVOL(double radius) {
  
  // finds the volume of a sphere using the radius
  double output = ( (4/3) * M_PI * pow(radius, 3));
  return output;
  
}

static int sphTSA(double radius) {
 
  // finds the total surface area of a sphere using its radius
  double output = (4 * M_PI * pow(radius, 2));
  return radius;
  
}

static int cubeVOL(double edge) {
  
  // finds the volume of an equal sided cube, using the edge length
  double output = pow(edge, 2);
  return output; 
  
}

static int cubeTSA(double edge) {
  
  // finds the total surface area of the cube using the edges 
  double output = pow((6*edge), 2); 
  return output;

}

static int cubdVOL(double length, double breadth, double height) {
  
 // finds the volume of a cuboid using the length, breadth and height
  double output = (length * breadth * height);
  return output;

}

static int cubdTSA(double length, double breadth, double height) {
  
  // finds the total surface area of a cuboid using the length breadth and height
  double output = ((2*(length*breadth))+(2*(length*height))+ (2*(height*breadth)));
  return output;

}

static int coneVOL(double radius, double height) {
  
  // finds the volume of a cone using the base radius and height
  double output = (M_PI * (pow(radius, 2)) * (height/3));
  return output;
  
}

static int coneCSA(double radius, double height)  {
  
  // finds the curved surface area of a cone using the base radius and height
  double output = ((M_PI * radius * height);
  return output;
  
}
static int coneTSA (double radius, double height) {

  // finds the total surface area of a cone using the base radius and height
  double output = (coneCSA(radius, height) + (2 * pow(radius, 2)));
  return output;
  
}

static int cylVOL(double radius, double height) {

  // finds the volume of a cylinder by using the base radius and height
  double output = (M_PI * pow(radius, 2) * height);
  return output;
  
}
static int cylCSA(double radius, double height) {
  
  // finds the curved surface area of a cylinder by using the base radius and height
  double output = (2 * M_PI * radius * height);
  return output;
  
}

static int cylTSA(double radius, double height) {
  
  // finds the total surface area of a cylinder by using the base radius and height
  double output = 2 * M_PI * radius * (height + radius);
  return output;
  
}
