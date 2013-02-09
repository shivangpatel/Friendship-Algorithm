//  Algoritmo Dell'Amicizia - Sheldon Cooper


#include <stdio.h>
#include <string.h>

void chiamata();
void pranzo();
void bevandafunz();
void interessefunz();
void amicizia();


int main()
{
    printf("Chiamalo...\n");
    chiamata();
    
}

void chiamata()
{
    char call[2];
    printf("È a casa o risponde al cellulare? (Si o No)\n");
   scanf("%s", call);
    if (call[0]=='S')
    {
        pranzo();
    }
    else if (call[0]=='N'){
        while(call[0]=='N')
        {
            printf("Lascia un messaggio e riprova più tardi o aspetta una sua chiamata...\n");
            printf("Ha risposto o hai ricevuto la sua chiamata? (Si o No)\n");
            scanf("%s", call);
            
        }
        pranzo();
    }
    else
        chiamata();
    
   
}

void pranzo()
{
    char pranz[2];
    printf("Vogliamo pranzare insieme? (Si o No)\n");
    scanf("%s", pranz);
    if (pranz[0]=='S')
    {
        printf("Ok, pranziamo insieme...\n");
        amicizia();
    }
    else if (pranz[0]=='N'){
        bevandafunz();
    }
    else
        pranzo();

}

void bevandafunz()
{
    char hotbev[2];
    char bevanda[2];
    
    printf("Ti va una bevanda calda? (Si o No)\n");
    scanf("%s", hotbev);
    if (hotbev[0]=='S')
    {
        printf("Ok, quale bevanda scegli?\nLe scelte più comuni includono Caffè (Caffè), Tè (Tè) e Cioccolata Calda (Cioccolata Calda), quale scegli?\n");
         scanf("%s", bevanda);
        if (bevanda[1]=='a') {
            printf("Ok, andiamo a prendere un caffè...\n");
            amicizia();
        }
        else if (bevanda[0]=='T') {
            printf("Ok, andiamo a prendere un Tè...\n");
            amicizia();
        }
        else if (bevanda[1]=='i') {
            printf("Ok, andiamo a prendere una cioccolata calda...\n");
            amicizia();
        }
        else
            bevandafunz();
    }
    else if (hotbev[0]=='N')
    {
        interessefunz();
    }
    else
        bevandafunz();

}

void interessefunz()
{
    char interesse[2];
    int n;
    printf("Ti va un'attività ricreativa?\nDimmi uno dei tuoi interessi...");
    n=0;
    
    while(n<6)
    {
        printf("\nCondividi l'interesse? (S o N)");
        scanf("%s", interesse);
        if(interesse[0]=='N')
        {
            n++;
            printf("\nDimmi un altro dei tuoi interessi...");

        }
        else if(interesse[0]=='S')
        {
            n = 7;
            printf("Ok, va bene, facciamolo insieme!\n");
            amicizia();
        }
        else
            interessefunz();
            
        }
    
    if(n==6)
    {
        printf("Ok, l'ultimo interesse mi sembra il meno discutibile, facciamolo insieme!\n");
        amicizia();
    }

}

void amicizia()
{
    printf("....siamo amici!");
}