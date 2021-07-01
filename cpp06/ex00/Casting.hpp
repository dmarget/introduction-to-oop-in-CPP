//
// Created by Duncan Marget on 6/11/21.
//

#ifndef EX00_CASTING_HPP
#define EX00_CASTING_HPP
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

void ex_char(char &c);
void ex_int(int &i, char &c);
void ex_float(float &f, char &c);
void ex_double(double &d, char &c);
void char_cast(double &d,char &c);
void int_cast(int &i, double &d, char *arg);
void float_cast(float &f, double &d);
void double_cast(double &d);

#endif //EX00_CASTING_HPP
