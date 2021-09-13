
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Testa coluna", "[single-file]")
{
	int teste1[3][3] = {{2, 0, 1},
						{2, 0, 1},
						{0, 2, 1}};
	REQUIRE(VerificaVelha(teste1) == 1);

	int teste2[3][3] = {{2, 1, 0},
						{2, 1, 0},
						{0, 1, 2}};
	REQUIRE(VerificaVelha(teste2) == 1);

	int teste3[3][3] = {{1, 2, 0},
						{1, 2, 0},
						{1, 0, 2}};
	REQUIRE(VerificaVelha(teste3) == 1);

	int teste4[3][3] = {{2, 1, 0},
						{2, 1, 0},
						{2, 0, 1}};
	REQUIRE(VerificaVelha(teste4) == 2);

	int teste5[3][3] = {{1, 2, 0},
						{1, 2, 0},
						{0, 2, 1}};
	REQUIRE(VerificaVelha(teste5) == 2);

	int teste6[3][3] = {{1, 0, 2},
						{1, 0, 2},
						{0, 1, 2}};
	REQUIRE(VerificaVelha(teste6) == 2);
}
