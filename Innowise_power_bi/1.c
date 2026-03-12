#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
typedef struct  davlat
{
        char nomi[100],poytaxt[100];
        int axolisi;
        int maydoni;
}country;
void show_info(country k, int i)
{
        printf("|\t|%-4d|%-18s|%-18s|%-5d|%-5d\n",
                i, k.nomi,k.poytaxt,k.axolisi,k.maydoni);
}
int main()
{
        country k[] = {{"Ozbekiston","Toshkent",40000000,120000},
                    {"Amerika","NewYork",500000000,500000},
                    {"India","Samarqand",1300000000,1000000},
                    {"India","Samarqand",1300000000,1000000},
                    {"India","Samarqand",1300000000,1000000},
                    {"India","Samarqand",1300000000,1000000},
                    {"India","Samarqand",1300000000,1000000},
                    {"India","Samarqand",1300000000,1000000},
                    {"India","Samarqand",1300000000,1000000},
                    {"India","Samarqand",1300000000,1000000}};
        int cnt = 10, op = 1;
        printf("\t|------------------------------------------------------------------|\n");
        printf("\t| TR |       DAVLAT      |        POYTAXT      |AXOLISI  | MAYDONI |\n");
        printf("\t|------------------------------------------------------------------|\n");
        for (int i = 0; i < cnt; i ++)
        {
                show_info(k[i],i + 1);
                printf("\t|------------------------------------------------------------------|\n");
        }
        int pnt = 0,pnt2 = 0;
        for (int i = 0; i <= cnt; i++)
                if (k[i].axolisi >= 35000000)
                        pnt++;
        if (pnt == 0)
        {
                printf("35 milliondan oshiq davlat yo'q!\n");
                return 0;
        }

}