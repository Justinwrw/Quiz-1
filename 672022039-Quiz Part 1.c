#include<stdio.h>

int main () {
int i, j, k, r, n, menu;
menu:
printf("=====================\n");
printf("Quiz Part 1\n");
printf("=====================\n");
printf("Menu:\n");
printf("1. Menu 1\n");
printf("2. Menu 2\n");
printf("3. Menu 3\n");
printf("4. Exit\n");
printf("Pilihlah menu:");
scanf("%d", &n);

switch (n) {
case 1:
system("cls");
printf("Masukkan jumlah baris: ");
scanf("%d", &r);
  for (i = 0; i < r; i++) {
    k = i;
    for (j = 0; j <= i; j++) {
      printf("%d ", k);
      k++;
    }
    printf("\n");
  }
system("pause");
system("cls");
goto menu;
case 2 :
 {
int i, j, n;
system("cls");
printf("Masukkan jumlah baris: ");
scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i*j);
        }
        printf("\n");
    }
system("pause");
system("cls");
goto menu;
case 3:
{
int n, i, j, s;
system("cls");
    printf ("Masukan jumlah Bilangan = ");
    scanf ("%d",&n);

    for (i = 1; i <= n; i++)

    {
        for (j = 1; j <= n - i; j++)
        {
            printf (" ");
        }
            for (s = 1; s <= i; s++)
            {
                printf ("%d",s);
            }
                for (s = i - 1; s >= 1; s--)
                {
                    printf ("%d",s);
                }
                printf ("\n");
    }
    n = n - 1;
        for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf (" ");
        }
            for (s = 1; s <= n - i + 1; s++)
            {
                printf ("%d",s);
            }
                for (s = n - i; s >= 1; s--)
                {
                    printf ("%d",s);
                }
                printf ("\n");
    }
system("pause");
system("cls");
goto menu;
}

default:
  break;

}

}


}




