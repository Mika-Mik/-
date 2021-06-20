#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "file.h"

/*
void func8(struct bar* lib)
{
    printf("Enter the name of file:");
    char finam[50];
    fgets(finam, 50, stdin);
    printf("\n");

    FILE *filk = fopen(finam, "r");

    for(int i=0; i<10; i++)
    {
        //if(((lib+i)->title)[0]=='\0')
        //{
          //  continue;
        //}

        fputs(filk,((lib+i)->title));
        fputs(filk,((lib+i)->value));
        //fputs("\n", fil);
    }
    fclose(filk);
    //free(lib);
}

*/
int main(void)
{
  int h=1;
    struct bar *lib;

    lib = (struct bar*)malloc((h+10) * sizeof(struct bar));

   
void func8(struct bar* lib)
{
    printf("Enter the name of file:");
    char finam[50];
    fgets(finam, 50, stdin);
    printf("\n");
    int g=2;

    FILE *filk = fopen(finam, "r");

    while(!feof(filk)){
     
      fscanf(filk, "%s", ((lib+g)->title));
      g++;
      h++;

    }

}

    //---------------------------------------------------------

    strcpy(lib[0].title, "Vodka");
    strcpy(lib[0].value, "50");

    strcpy(lib[1].title, "Pivo");
    strcpy(lib[1].value, "40");

    

    printf("1: List\n");
    printf("2: Find by name\n");
    printf("3: Delete\n");
    printf("4: New drink\n");
    printf("5: Edit\n");
    printf("6: Exit\n");
    printf("7: Create file\n");
    printf("8: Open file\n");
    
    int z;

    
    while(z!=6)
    {
        printf("What do it?: \n");
        scanf("%d", &z);
        printf("\n");

        
        if(z==1){ func5(lib); }
        else if(z==2){ func4(lib); }
        else if(z==3){ func2(lib); }
        else if(z==4){ func1(lib); }
        else if(z==5){ func3(lib); }
        else if(z==6){ break; }
        else if(z==7){ func7(lib); }
        else if(z==8){ func8(lib); }
    }



}


