
#include <stdio.h>

int main()
{

  int a, b, c, aux, cont = 0;
  printf("Incirra um numero a: ");
  scanf("%d", &a);

  printf("Incirra um numero b: ");
  scanf("%d", &b);
  if (b < a)
  {
    aux = a;
    a = b;
    b = aux;
  }

  printf("Incirra um numero X: ");
  scanf("%d", &c);

  for (int i = a + 1; i < b; i++)
  {
    if (i % c == 0)
    {
      printf("\n %d, e multiplo %d", i, c);
    }

    cont = cont + i;
  }
  printf("\n Soma de todos numeros ente a e b: %d", cont);
}