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
    int jogador1 = 0, jogador2 = 0, ganhadores = 0, quantidade1 = 0, quantidade2 = 0;

    //verifica se a quantidade de 1s é maior que a de 2s
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (velha[i][j] == 1)
                quantidade1++;
            else if (velha[i][j] == 2)
                quantidade2++;
        }
    }
    if (((quantidade2 - quantidade1) > 1) || (quantidade1 - quantidade2 > 1))
        return -2; //se algum número diferente de 0, 1 ou 2 for encontrado

    //verifica se houveram 2 ganhadores nas colunas
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
        {
            ganhadores++;
            jogador1++;
        }
        else if (jogador1 < 3)
            jogador1 = 0;

        if (jogador2 == 3)
        {
            ganhadores++;
            jogador2++;
        }
        else if (jogador2 < 3)
            jogador2 = 0;
    }
    if (ganhadores > 1)
        return -2;

    jogador1 = 0;
    jogador2 = 0;
    ganhadores = 0;

    //verifica se houveram 2 ganhadores nas linhas
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
        {
            ganhadores++;
            jogador1++;
        }
        else if (jogador1 < 3)
            jogador1 = 0;

        if (jogador2 == 3)
        {
            ganhadores++;
            jogador2++;
        }
        else if (jogador2 < 3)
            jogador2 = 0;
    }
    if (ganhadores > 1)
        return -2;

    jogador1 = 0;
    jogador2 = 0;

    //verifica se foi inserido algo diferente de 1s ou 2s
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((velha[i][j] != 0) && (velha[i][j] != 1) && (velha[i][j] != 2))
                return -2; //se algum número diferente de 0, 1 ou 2 for encontrado
        }
    }

    //verifica ganhador em colunas
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
    //verifica ganhador em linhas
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

    //verifica indefinidos e empates
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (velha[i][j] == 0)
                return -1; //se algum 0 for encontrado, retorna indefinido
        }
    }
    return 0; // se não foi encontrado nenhum 0, retorna empate
}
