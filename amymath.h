#include <iostream>
#include <stdio.h>
#include <cmath>

//namespace mathlib {


 static int pythOPP(double Hypotenuse, double Adjacent) {  

  //finds the opposite
  static double o  = sqrt(pow(Hypotenuse, 2) - pow(Adjacent, 2));

  //returns
  return o;
  // Remember: length of Hypotenuse can not be less than Adjacent length 
  // or it will return -2.14748e+9
  
}

  static int pythHYP(double Opposite, double Adjacent) {

  //finds the opposite
  static double h  = sqrt(pow(Opposite, 2) + pow(Adjacent, 2));

  //returns
  return h;
  
}

  static int pythADJ(double Hypotenuse, double Opposite) {

  //finds the opposite
  static double a  = sqrt(pow(Hypotenuse, 2) - pow(Opposite, 2));

  //returns
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
