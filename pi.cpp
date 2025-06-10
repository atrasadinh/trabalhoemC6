#include <stdio.h>

int main() {
    int n;
    const double RaizPI12 = 3.4641016151377;
    double t, valorpi = 0.0;

    do {
        printf("Digite o número de parcelas: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        int elev3 = 1;
        for (int j = 0; j < i; j++) {
            elev3 = elev3 * 3;
        }

        t = 1.0 / ((2 * i + 1) * elev3);

        if (i % 2 == 0) {
            valorpi = valorpi + t;
        } else {
            valorpi = valorpi - t;
        }
    }

    valorpi = valorpi * RaizPI12;

    printf("%.15lf\n", valorpi);
}
