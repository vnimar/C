#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
    double sm;

    printf("Quantos funcionarios voce vai digitar? ");
    scanf("%d", &n);
    double vetor[n];

    for (i=0; i<n; i++) {
        printf("Digite a venda: ");
        scanf("%lf", &vetor[i]);
    }

	printf("VALORES = ");

    for (i=0; i<n; i++) {
        printf("%.1lf  ", vetor[i]);
    }

    sm = 0;
    for (i=0; i<n; i++) {
        sm+=vetor[i];
    }
    
    printf("\nSOMA = %.2lf\n", sm);
    return 0;
}
	
	return 0;
}
