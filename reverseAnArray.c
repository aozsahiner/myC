//Dizideki elemanlari terse ceviren program
#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int dizi[10]={5,6,4,1,3,9,8,7,11,17}, i, boyut=10, gecici;
    int dizininyarisi = boyut/2;

    //Diziyi terse cevirir
    int x=boyut-1;//x dizinin son indexi
    for(i=0;i<dizininyarisi;i++)//for(i=0;say<boyut/2;i++)
    {
        gecici = dizi[i];
        dizi[i] = dizi[x];
        dizi[x] = gecici;
        x--;
    }
    //Bu dizi icin
    //0. eleman 9. elemanla, 1. eleman 8. elemanla, 2. eleman, 7. elemanla, 
    //3. eleman 6. elemanla, 4. eleman 5. elemanla
    // yer değiştirir.

    printf("Dizinin elemanlarinin terse cevrilmis hali:\n");	
    for(i=0;i<boyut;i++)//Diziyi ekrana yazdirir.
    {
        printf("dizi[%d]:%d\n",i,dizi[i]);
    }
 
    return 0;
}
