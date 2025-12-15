#include <iostream>
#include <time.h> // Habilita a função "time".
using namespace std;

int main() {

    // Variaveis
    int menu, menu2;
    int palavraEscolhida;
    int tentativas, acertos, erros;
    char letra;
    bool acertou;

    // Comando para gerar uma semente de acordo com a hora do sistema.
    srand(time(NULL));

    do {
        // Inicia o menu do jogo
        cout << "\033c";
        cout << "------------ JOGO DA FORCA ------------" << endl;
        cout << "\nBem-vindo ao jogo da forca!" << endl << endl;
        cout << "1 - Jogar" << endl;
        cout << "2 - Sobre o Jogo" << endl;
        cout << "3 - Sair" << endl;
        cout << "\nSelecione sua opção: ";
        cin >> menu;

        switch (menu){
            case 1: {
                
                // Sorteia a palavra do jogo.
                palavraEscolhida = rand() % 10 + 1;
                tentativas = 10;
                acertos = 0;
                erros = 0;
                char a, b, c, d, e, f;

                // Palavras disponíveis no jogo.

                // MACACO
                if (palavraEscolhida == 1) { 
                    a='M'; 
                    b='A'; 
                    c='C'; 
                    d='A'; 
                    e='C'; 
                    f='O'; 
                }
                
                // BANANA
                if (palavraEscolhida == 2) {
                    a='B'; 
                    b='A'; 
                    c='N'; 
                    d='A'; 
                    e='N'; 
                    f='A';
                }

                // BELEZA
                if (palavraEscolhida == 3) {
                    a='B'; 
                    b='E'; 
                    c='L'; 
                    d='E'; 
                    e='Z'; 
                    f='A'; 
                }

                // FLORES
                if (palavraEscolhida == 4) { 
                    a='F'; 
                    b='L'; 
                    c='O'; 
                    d='R'; 
                    e='E'; 
                    f='S';
                }

                // PRATOS
                if (palavraEscolhida == 5) {
                    a='P'; 
                    b='R'; 
                    c='A'; 
                    d='T'; 
                    e='O'; 
                    f='S';
                }

                // CARROS
                if (palavraEscolhida == 6) {
                    a='C'; 
                    b='A'; 
                    c='R'; 
                    d='R'; 
                    e='O'; 
                    f='S';
                }
                
                // MANGAS
                if (palavraEscolhida == 7) {
                    a='M'; 
                    b='A'; 
                    c='N'; 
                    d='G'; 
                    e='A'; 
                    f='S'; 
                }
                
                // PENSAR
                if (palavraEscolhida == 8) {
                    a='P'; 
                    b='E'; 
                    c='N'; 
                    d='S'; 
                    e='A'; 
                    f='R'; 
                }
                
                // AMIGOS
                if (palavraEscolhida == 9) { 
                    a='A'; 
                    b='M'; 
                    c='I'; 
                    d='G'; 
                    e='O'; 
                    f='S'; 
                }
                
                // ROUPAS
                if (palavraEscolhida == 10){
                    a='R'; 
                    b='O'; 
                    c='U'; 
                    d='P'; 
                    e='A'; 
                    f='S';
                }

                // Faz os espaços que faltam letras. (ex: D _ A ; palavra: D I A)
                char pa='_', pb='_', pc='_', pd='_', pe='_', pf='_';

    
                // Começa o LOOP das tentativas.
                while (tentativas > 0 && acertos < 6) {
                    
                    cout << "\033c";
                    
                    // Desenha a forca e o boneco.
                    switch(erros){
                        case 0:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|      ";
                        cout << "\n|      ";
                        cout << "\n|      ";
                        cout << "\n|      " << endl;
                        break;
                        
                        case 1:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|      ";
                        cout << "\n|      ";
                        cout << "\n|      " << endl;
                        break;
                        
                        case 2:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|     I";
                        cout << "\n|      ";
                        cout << "\n|       " << endl;
                        break;
                        
                        case 3:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|    -I";
                        cout << "\n|      ";
                        cout << "\n|       " << endl;
                        break;
                        
                        case 4:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|   --I";
                        cout << "\n|      ";
                        cout << "\n|       " << endl;
                        break;
                        
                        case 5:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|   --I-";
                        cout << "\n|      ";
                        cout << "\n|       " << endl;
                        break;
                        
                        case 6:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|   --I--";
                        cout << "\n|      ";
                        cout << "\n|       " << endl;
                        break;
                        
                        case 7:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|   --I--";
                        cout << "\n|    / ";
                        cout << "\n|       " << endl;
                        break;
                        
                        case 8:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|   --I--";
                        cout << "\n|    / \\";
                        cout << "\n|       " << endl;
                        break;
                        
                        case 9:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|   --I--";
                        cout << "\n|    / \\";
                        cout << "\n|       \\" << endl;
                        break;
                        
                        case 10:
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|   --I--";
                        cout << "\n|    / \\";
                        cout << "\n|   /   \\" << endl;
                        break;
                    }
                    
                    cout << "\nPalavra de 6 letras!" << endl;
                    cout << "Regra: Digite apenas letras MAIÚSCULAS!" << endl;
                    cout << "OBS: Letras minúsculas contam como erro!" << endl;
                    
                    cout << endl << "Palavra: " << pa << " " << pb << " " << pc << " " << pd << " " << pe << " " << pf << endl;
                    cout << "Tentativas restantes: " << tentativas << endl;
                    cout << "Digite uma letra: ";
                    cin >> letra;
                    
                    
                    // Verifica os acertos, erros e quantas tentativas faltam.
                    
                    acertou = false; // Reseta a cada tentativa.
                    
                    if (letra == a && pa == '_'){ 
                        pa = a; 
                        acertos++;
                        acertou = true;
                    }
                    
                    if (letra == b && pb == '_'){ 
                        pb = b; 
                        acertos++; 
                        acertou = true;
                    }
                    
                    if (letra == c && pc == '_'){ 
                        pc = c; 
                        acertos++; 
                        acertou = true;
                    }
                    
                    if (letra == d && pd == '_'){ 
                        pd = d; 
                        acertos++;
                        acertou = true;
                    }
                    
                    if (letra == e && pe == '_'){ 
                        pe = e; 
                        acertos++; 
                        acertou = true;
                    }
                    
                    if (letra == f && pf == '_'){ 
                        pf = f; 
                        acertos++;
                        acertou = true;
                    }
                    
                    if (acertou == false) { 
                        tentativas--; 
                        erros++; 
                    }
                    
                    
                    // Verifica se o jogador ganhou ou perdeu o jogo.
                    if (acertos == 6) {
                        cout << endl << "Parabéns! Você acertou a palavra: " << a << b << c << d << e << f << endl;
                    }
                    else {
                        if (tentativas == 0) {
                        cout << "\033c";
                        cout << endl << "Você perdeu! A palavra era: " << a << b << c << d << e << f << endl;
                        cout << "\n+-----+";
                        cout << "\n|     |";
                        cout << "\n|     o";
                        cout << "\n|   --I--";
                        cout << "\n|    / \\";
                        cout << "\n|   /   \\" << endl;
                        }
                    }
                        
                }
                
                // Volta para o menu inicial.
                cout << "\nAperte ENTER para voltar ao menu...";
                cin.ignore();
                cin.ignore();
                break;
            }

            case 2:
            
                // Entra nas informações sobre o jogo.
                
                cout << "\033c";
                cout << "Jogo da forca desenvolvido em C++." << endl;
                cout << "\n- Gabriel Debiasi" << endl;
                cout << "\nMes/Ano: Outubro/2025" << endl;
                cout << "\nPressione ENTER para voltar ao menu...";
                
                // Volta para o menu inicial.
                cin.ignore();
                cin.ignore();
                break;

            case 3:
                // Sai do jogo.
                cout << "\033c";
                cout << "Saindo do jogo. Ate a proxima!" << endl;
                break;

            default:
                // Caso a pessoa tenha digitado algo diferente das opções, volta para o menu.
                cout << "\033c";
                cout << "Opção inválida! Tente novamente. (ENTER para continuar...)";
                cin.ignore();
                cin.ignore();
                break;
        }

    }  while (menu != 3);
}


