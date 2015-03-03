#include <stdio.h>
#include "fun_lib.h"



int main()
{
  //int *my_nums;
  int user_choice = 0;
  char rerun = ' ';
  
  printf("\n I know what you did last Halloween... \n");
  
  do 
  {
    
    // display the menu & get the user's option.
    print_menu();
    scanf("%d", &user_choice);
  
    // Run a process depending on what the user picks.
    rerun = process_options(user_choice);
  
  }while (rerun == 'y');

  
  
  printf("\n Bye Bye... \n");
  

  return 0;
}







