/**
 * \file  velha.cpp
 */

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */

int VerificaVelha(int velha[3][3])
{
    int jogador1 = 0, jogador2 = 0;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (velha[i][j] == 1)
                jogador1++;
            else if (velha[i][j] == 2)
                jogador2++;
        }
        if (jogador1 == 3)
            return 1;

        if (jogador2 == 3)
            return 2;

        jogador1 = 0;
        jogador2 = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (velha[i][j] == 1)
                jogador1++;
            else if (velha[i][j] == 2)
                jogador2++;
        }
        if (jogador1 == 3)
            return 1;

        if (jogador2 == 3)
            return 2;

        jogador1 = 0;
        jogador2 = 0;
    }
    //verifica ganhador na diagonal principal
    for (int i = 0; i < 3; i++)
    {
        if (velha[i][i] == 1)
            jogador1++;
        else if (velha[i][i] == 2)
            jogador2++;
    }
    if (jogador1 == 3)
        return 1;

    if (jogador2 == 3)
        return 2;

    jogador1 = 0;
    jogador2 = 0;

    //verifica ganhador na diagonal secundária
    for (int i = 0; i < 3; i++)
    {
        if (velha[i][2 - i] == 1)
            jogador1++;
        else if (velha[i][2 - i] == 2)
            jogador2++;
    }
    if (jogador1 == 3)
        return 1;

    if (jogador2 == 3)
        return 2;

    jogador1 = 0;
    jogador2 = 0;
}
