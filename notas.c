#include<stdio.h>
int main () {

float n1, n2, n3,
        media;

  printf("Digite as tres notas: ");
  scanf("%f %f %f", &n1, &n2, &n3);

  media = (n1 + n2 + n3)/3;

  if (media>=8)
      {printf("Aprovado com distincao.\n");
      }
  else if (media>=6)
      {printf("Aprovado direto.\n");
      }

  else if (media>=4)
      {printf("Vai para a final.\n");
      }

  else
      {printf("Reprovado direto.\n");
      }

return 0;


}
