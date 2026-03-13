/*
* CBR - Compilador Brasileiro Raiz
*Autor Alexandre Alessio
*Data: Março de 2026
*Direitos reservados ₢ 2026
*Uso livre para estudo pessoal
*Proibido copiar, modificar ou vender sem permissão
*GitHub: https://github.com/aledevcwb/CBR
*Contato: alexandre.alessio@hotmail.com - Instagram @alessioalexandre
*/


#include <stdio.h>

    int main() {
    printf("Bem-vindo ao CBR, seu espertão!\n");
    printf("Escolha o modo:\n");
    printf("1 - Iniciante (xingamento)\n");
    printf("2 - Intermediario (explicação de erros)\n");
    printf("3 - Avançado (traduzido)\n");
    
    int modo;
    scanf("%d", &modo);
    
    if (modo == 1) {
        printf("Modo Iniciante ligado 1 Bora sofrer e aprender, HEIN?.\n");
    } else if (modo == 2) {
        printf("Modo Intermediario: Sem drama, só explicação.\n");
    } else if (modo == 3) {
        printf("Modo Avançado: Erro em PT-BR, sem frescura.\n");
    }
            
     getchar();
     getchar();
            
     int main() {
    char continuar;  // caixinha pra 's' ou 'n'

    do {  // começa o loop: "faça isso pelo menos uma vez"
        printf("Bem-vindo ao CBR, seu espartão!\n");
        printf("Escolha o modo:\n");
        printf("1 - Iniciante (xingamento)\n");
        printf("2 - Intermediário (explicação)\n");
        printf("3 - Avançado (traduzido)\n");
        printf("Digite: ");

        int modo;
        scanf("%d", &modo);

        if (modo == 1) {
            printf("Modo iniciante ligado! Bora sofrer e aprender, hein?\n");
        } else if (modo == 2) {
            printf("Modo intermediário: Sem drama, só explicação.\n");
        } else if (modo == 3) {
            printf("Modo avançado: Erro em PT-BR, sem frescura.\n");
        } else {
            printf("Escolha errada, seu babador! Só 1, 2 ou 3.\n");
        }

        printf("\nQuer tentar de novo? (s/n): ");
        scanf(" %c", &continuar);  // lê uma letra, o espaço antes do %c limpa o Enter antigo

        getchar();  // limpa qualquer lixo
     while (continuar == 's' || continuar == 'S');  // repete se for 's' ou 'S' }

    printf("Tá bom, até a próxima, seu preguiçoso!\n");       
            
    int erros = 0; // contador de burradas
    }else {
        printf("Escolha errada seu Bebezão! Só 1, 2 ou 3\n";)
        erros++; //soma erros
        if (erros >= 3) {
            printf("De novo? Tá virando hábito, HEIN? Bota direito ou eu te dou castigo!\n");
        }
        
        getchar ();
        if (mode >= 1 && modo <= 3){
            erros = 0; // reseta se acertou
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
