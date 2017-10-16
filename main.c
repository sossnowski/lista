/* Program dodaje elementy do listy i wyswietla jej zawartosc */
#include <stdio.h>
#include <stdlib.h>

struct element
{
    int wartosc;
    struct element* nastepny;
};
struct element* glowny;
dodaj(int x)
{
    struct element* temp = (struct element*)malloc(sizeof(struct element));
    temp->wartosc = x;
    temp->nastepny=glowny;

    glowny = temp;
}
void wypisz()
{
    struct element* temp = glowny;
    printf("lista: ");
    while (temp!=NULL)
    {
        printf(" %d | ", temp->wartosc);
        temp=temp->nastepny;

    }
    printf("\n");
}
int main()
{
    glowny = NULL;
    int ile, x, wybor;
    do
    {
        printf("-------> 1 dodaj liczbe | 2 zakoncz <-----------\n");
        scanf("%d", &wybor);

        switch (wybor)
        {
            case 1:
                printf("Podaj liczbe \n");
                scanf("%d", &x);
                dodaj(x);
                wypisz();
            break;

        }
    }while(wybor != 2);


    return 0;
}
