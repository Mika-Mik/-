#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "file.h"

void func1(struct bar *lib)
{
    int n;

    printf("Enter the count new drink:");
    scanf("%d",&n);

   for(int i=2; i<n+2; i++)
   {
      printf("Enter the title:");
      scanf("%s",(lib+i)->title);
      printf("Enter the value:");
      scanf("%s",(lib+i)->value);
   }
}

//--------------------------------------------------------

void func2(struct bar *lib)
{
    char name[30];
    int nul=0;

    printf("Enter the title drink(for deleted): ");
    scanf("%s", name);

    for(int i=0; i<10; i++)
    {
        if(strcmp(((lib+i)->title),name)==0)
        {
            memset(((lib+i)->title),0,strlen(((lib+i)->title)));
            memset(((lib+i)->value),0,strlen(((lib+i)->value)));
        }
    }
}

//----------------------------------------------------------------------

void func3(struct bar *lib)
{
    char name1[30];
    char value1[10];

    printf("Enter the title drink: ");
    scanf("%s", name1);

    for(int i=0; i<10; i++)
    {
        if(strcmp(((lib+i)->title),name1)==0)
        {
            printf("Enter the new value: ");
            scanf("%s", value1);
            strcpy((lib+i)->value , value1);
        }
    }
}

//-----------------------------------------------------

void func4(struct bar *lib)
{
    char name2[30];
    printf("Enter the title drink:");

    scanf("%s", name2);

    for(int i=0; i<10; i++)
    {
        if(strcmp(((lib+i)->title),name2)==0)
        {
            printf("%s", (lib+i)->value);
        }
    }
}

//-----------------------------------------------

void func5(struct bar *lib)
{
    for(int i=0; i<10; i++)
    {
        if(((lib+i)->title)[0]=='\0')
        {
            continue;
        }

        printf(" \n %d. Title: %s",i+1, (lib+i)->title );
        printf(" \n Value: %s", (lib+i)->value);
    }
}

//-------------------------------------------------------------------------

void func7(struct bar* lib)
{
    printf("Enter the name of file:");
    char finame[50];
    fgets(finame, 50, stdin);
    printf("\n");

    FILE *fil = fopen(finame, "w");

    for(int i=0; i<10; i++)
    {
        if(((lib+i)->title)[0]=='\0')
        {
            continue;
        }

        fputs(((lib+i)->title), fil);
        fputs(((lib+i)->value), fil);
        fputs("\n", fil);
    }
    fclose(fil);
    free(lib);
}

//-------------------------------------------------------------------------

