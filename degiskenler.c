/* yazan: E.aldemir
    versiyon: v1.1
*/
// örnek:  tanımlayıcı ve değişkenler 
#include <stdio.h> // temel giriş/çıkış kütüphanesi  

int main() {
    // Write C code here
    int degisken1 = 3, degisken2=5;
    float degiskenf1 = 3.0, degiskenf2=5.0; 
    printf("====================== matematiksel işlemler ===================");
    printf("|\t Toplama : %2d + %d = %d \t\t\t\t\t | \n ", degisken1, degisken2, degisken1+degisken2);
    printf("|\t Çıkarma : %2d - %d = %d \t\t\t\t\t | \n ", degisken1, degisken2, degisken1-degisken2);
    printf("|\t Çarpma : %2d * %d = %d \t\t\t\t\t  | \n ", degisken1, degisken2, degisken1*degisken2);
    printf("|\t Bölme : %d / %d = %d \t\t\t\t\t  | \n ", degisken1, degisken2, degisken1/degisken2);
    printf("|\t Bölme (float) : %f / %f = %f |\n ", degiskenf1, degiskenf2, degiskenf1/degiskenf2);
    printf("| \t Bölme (float) : %f / %f = %d \t\t | \n ", degiskenf1, degiskenf2, degiskenf1/degiskenf2);

    return 0;
}
