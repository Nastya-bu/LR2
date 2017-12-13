#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <malloc.h>

int main ()

{
	setlocale(LC_ALL,"Russian");
  
   int i=0,n=2; 
   
 char *str = (char*) malloc (n*sizeof(char));
   printf ("Введите текст для шифрования: ");
   
    str[i]=getchar();
   while (str[i] != '\n'){
            if (++i == n) {
            n++ ;
            str = (char*) realloc (str, sizeof(char)*n);
   }
   str[i]=getchar();
}
n--;
str = (char*) realloc (str, sizeof(char)*n);
   

   char *key = (char*) malloc (n*sizeof(char));  //массив для ключа

   char *sh = (char*) malloc (n*sizeof(char));  //массив зашифрованного текста
   
   char *dec = (char*) malloc (n*sizeof(char)); //массив дешифрованного текста


// определение ключа

   for(i = 0; i < n; i++)

      key[i]=(char)rand()%255;

// шифование

   for(i = 0; i < n; i++)

      sh[i]=str[i]^key[i];
      
// дешифрование
      
    for(i = 0; i < n; i++)

      dec[i]=sh[i]^key[i];



    printf("\nОткрытый текст: %s", str);
   
    printf("\nКлюч: %s", key);

    printf("\nЗашифрованный текст: %s", sh);
   
	printf("\nДешифрованный текст: %s \n", dec);
    
   system("pause");
   
}

