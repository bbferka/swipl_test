#include <iostream>
#define PL_DTOA_H_INCLUDED
#include <SWI-cpp.h>
#include <string>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int my_argc = 0;
  char *my_argv[10];
  my_argv[my_argc++] = argv[0];
  my_argv[my_argc++] = "-f";
  std::string rosPrologInit = "/home/ferenc/work/rs_ws/src/robosherlock/robosherlock/prolog/init.pl";
  my_argv[my_argc] = new char[rosPrologInit.size() + 1];
  std::copy(rosPrologInit.begin(), rosPrologInit.end(), my_argv[my_argc]);
  my_argv[my_argc++][rosPrologInit.size()] = '\0';
  my_argv[my_argc++] = "-O";
  my_argv[my_argc] = NULL;
  PL_initialise(my_argc, my_argv);

  std::string numberstr = "0.02";
  float number1;
  double number2;
  number1 =  std::stof(numberstr);
  number2 = strtod(numberstr.c_str(),NULL);
  std::cerr<<"String: " <<numberstr<<std::endl;
  std::cerr<<"stof:   "<<number1<<std::endl;
  std::cerr<<"strtod: "<<number2<<std::endl;
  
   
}
