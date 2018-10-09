#include <stdio.h>

double media_frente(double vet[], double *m){
  double ma = 0, md = 0;

  for(int i = 0; i < 5; i++){
    ma+= vet[i];
    vet[i] = (vet[i] + vet[i+1])/2.0;
    md += vet[i];
  }
  ma = ma / 5.0;
  *m = md / 5.0;
  return ma;
}


int main(void) {
  double v[5];
  double mediad, mediaa;

  for(int i = 0; i< 5; i++){
    scanf("%lf", &v[i]);
  }

  mediaa = media_frente(v, &mediad);

  printf("Media antes: %lf\n", mediaa);
  printf("Media depois: %lf\n", mediad);

  return 0;
}
