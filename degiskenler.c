/* Online C Compiler and Editor */
// örnek:  tanımlayıcı ve değişkenler 
#include <stdio.h> // temel giriş/çıkış kütüphanesi  

int main() {
    // Write C code here
    int degisken1 = 3, degisken2=5;
    float degiskenf1 = 3.0, degiskenf2=5.0; 
    printf("Toplama : %d + %d = %d \n ", degisken1, degisken2, degisken1+degisken2);
    printf("Çarpma : %d * %d = %d \n ", degisken1, degisken2, degisken1*degisken2);
    printf("Bölme : %d / %d = %d \n ", degisken1, degisken2, degisken1/degisken2);
    printf("Bölme (float) : %f / %f = %f \n ", degiskenf1, degiskenf2, degiskenf1/degiskenf2);
    printf("Bölme (float) : %f / %f = %d \n ", degiskenf1, degiskenf2, degiskenf1/degiskenf2);

    return 0;
}
