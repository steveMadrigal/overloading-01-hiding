/*
 * =====================================================================================
 *
 *       Filename:  Overloading01Hiding.cpp
 *
 *    Description:  Basic example hiding not overloading
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mike@guzmanalan.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

struct Base {
  void doSomething(int num) {
    std::cout << "INT - Base::doSomething(" << num << ")\n" << std::endl;
  }
};

struct Derived : Base {
  void doSomething(double num) {
    std::cout << "DOUBLE - Base::doSomething(" << num << ")\n" << std::endl;
  }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
  std::cout << "Welcome to the UNA!" << std::endl;

  Derived derived;

  derived.doSomething(1.2);
  
}  // end function main