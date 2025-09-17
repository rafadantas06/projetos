#include <stdio.h>

int main() 
{
    float raio;
	float area;
    const float PI = 3.141592653589793;

    // Solicita o raio do c�rculo
    printf("Digite o raio do c�rculo: ");
    scanf("%f", &raio);

    // Calcula a �rea usando a f�rmula �rea = p * raio�
    area = PI * raio * raio;

    // Imprime o resultado formatado
    printf("Um c�rculo com raio %.2f tem �rea igual a %.2f.\n", raio, area);

    return 0;
}
