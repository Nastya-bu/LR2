#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <malloc.h>

int main ()

{
	setlocale(LC_ALL,"Russian");
  
   int i=0,n=2; //���������� ����������� ����������
   
 char *str = (char*) malloc (n*sizeof(char));
   printf ("������� ����� ��� ����������: ");
   
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
   

   char *key = (char*) malloc (n*sizeof(char));  //������ ��� �����

   char *sh = (char*) malloc (n*sizeof(char));  //������ �������������� ������
   
   char *dec = (char*) malloc (n*sizeof(char)); //������ �������������� ������


// ���������� ���� ��������� �������

   for(i = 0; i < n; i++)

      key[i]=(char)rand()%255;

// ����������

   for(i = 0; i < n; i++)

      sh[i]=str[i]^key[i];
      
// ������������
      
    for(i = 0; i < n; i++)

      dec[i]=sh[i]^key[i];



    printf("\n�������� �����: %s", str);
   
    printf("\n����: %s", key);

    printf("\n������������� �����: %s", sh);
   
	printf("\n������������� �����: %s \n", dec);
    
   system("pause");
   
}

