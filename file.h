#ifndef A_H_INCLUDED
#define A_H_INCLUDED

struct bar
{
   char title[30];
   char value[10];
};

void func1(struct bar* lib);
void func2(struct bar *lib);
void func3(struct bar* lib);
void func4(struct bar* lib);
void func5(struct bar *lib);

void func7(struct bar *lib);
#endif
