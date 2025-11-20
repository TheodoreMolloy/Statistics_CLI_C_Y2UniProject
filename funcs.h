#ifndef FUNCS_H
#define FUNCS_H

// template from module
static void main_menu(void);            /* runs in the main loop */
static void print_main_menu(void);      /* output the main menu description */
static int  get_user_input(void);       /* get a valid integer menu choice */
static void select_menu_item(int input);/* run code based on user's choice */
static void go_back_to_main(void);      /* wait for 'b'/'B' to continue */
static int  is_integer(const char *s);  /* validate integer string */

#endif
