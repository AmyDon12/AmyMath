#include <cmath>
#include <iostream>

struct {

  static double opposite(double Hypotenuse, double Adjacent) {  
  return sqrt(pow(Hypotenuse, 2) - pow(Adjacent, 2));
  }

  static double hypotenuse(double Opposite, double Adjacent) {
  return sqrt(pow(Opposite, 2) + pow(Adjacent, 2));
  }
  
  static double adjacent(double Hypotenuse, double Opposite) {
  return sqrt(pow(Hypotenuse, 2) - pow(Opposite, 2));
  }    

} pythagoras; 

struct {

  static int ml_L(double ml) {
  return ml / 1000; 
  }

  static int l_ML(double l) {
  return l * 1000;
  }

} convertVolume;

struct {

  static int g_KG(double g) {
  return g / 1000; 
  }

  static int kg_G(double kg) {
  return kg * 1000; 
  }

} convertMass;

struct {

  static int cot(double x) {
  return 1/tan(x);
  }

  static int sec(double x) {
  return 1/cos(x);
  }

  static int csc(double x) {
  return 1/sin(x);
  }

  static int acot(double x) {
  return 1/atan(x);
  }

  static int asec(double x) {
  return 1/acos(x);
  }

  static int acsc(double x) {
  return 1/asin(x);
  }

} trigonometry;

struct {

  static int volume(double radius) {
  return (4/3) * M_PI * pow(radius, 3);
  }

  static int totalSURFACEAREA(double radius) {
  return (4 * M_PI * pow(radius, 2));
  }

} sphere;

struct {
  
  static int volume(double edge) {
  return pow(edge, 3);   
  }

  static int totalSURFACEAREA(double edge) { 
  return pow(6*edge, 2);
  }
}  cube;

struct {

  static int totalSURFACEAREA(double edge) {
  return pow(6*edge, 2);
  }

  static int volume(double length, double breadth, double height) {
  return (length * breadth * height);
  }
}  cuboid;

struct {

  static int volume(double radius, double height) {
  return (M_PI * (pow(radius, 2)) * (height/3));
  }

  static int curvedSURFACEAREA(double radius, double height)  {
  return (M_PI * radius * height); 
  }

  static int totalSURFACEAREA(double radius, double height) {
  return (M_PI * radius * height) + (2 * pow(radius, 2)));
  
  } 
} cone;

struct {

  static int cylVOL(double radius, double height) {
  return (M_PI * pow(radius, 2) * height);
  }

  static int cylCSA(double radius, double height) {
  return (2 * M_PI * radius * height);
  }

  static int cylTSA(double radius, double height) {
  return 2 * M_PI * radius * (height + radius);
  }

} cylinder;

struct {

  static int prismVOL (double sides, double sidelength, double height) { 
  return (sides/4)*height*(pow(sidelength, 2)*(1/tan(M_PI/sides)));
  }

  static int prismTSA(double sides, double sidelength, double height) {
  return (sides/2)*(pow(sidelength, 2)*(1/tan(M_PI/sides))+(sides*sidelength*height));  
  }

  static int sideAREA(double sides, double sidelength, double height) {
  return ((sides/2)*(pow(sidelength, 2)*(1/tan(M_PI/sides))+(sides*sidelength*height)/2));
  }
} prism; 
