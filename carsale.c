#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int main()
{
	int maxNumCar = 256, maxNumeroClients = 256;
	int carType[maxNumCar], carDate[maxNumCar], clientSells[maxNumCar], clientMoney[maxNumeroClients], carrosPorType[7][1];
	double carPrice[maxNumCar], tmp = 0;
	int options, i, l = 0, last, type, numVendas, dinheiroVendas, tmpCarro, tmpCliente;
	bool Halt = true, yesORno;
	char clientNome[maxNumeroClients][128];

	// Escolha de açao
	while (Halt)
	{

		printf(" 1-Inserir carro\n 2-Buscar carro\n 3-Exibir Clientes\n 4-Realizar Venda\n 5-Exibir estoque\n 6-Colsultar vendas\n 7-Cadastrar Cliente\n 8-Exit\n");
		scanf("%d", &options);
		switch (options)
		{
		case 1:
			// inserir carro
			printf("Qual a categoria do carro?\n");
			// Tipos de carro
			printf("Categorias:\n (1) Hatche\n (2) Sedan\n (3) Picape\n (4) Conversível\n (5) Coupé\n (6) Station Wagon\n (7) Minivan\n");

			// Encontrar espaço vago

			i = 0;
			while (i < (maxNumCar - 1), i++)
			{
				if (carType[i] = 0)
				{
					last = i;
					i = maxNumCar;
				}

			}
			scanf("%d", &type);

			switch (type)
			{
			case 1:
				scanf("%d", &carType[last]);
				printf("\n Qual o valor do carro?");
				scanf("%d", &carPrice[last]);
				printf("\n Ano de fabricaçao?");
				scanf("%d", &carDate[last]);
				break;
			default:
				printf("Tipo invalido");
				break;
			}
			// Buscar carro
		case 2:
			printf("buscar por:\n",
				"(1) Tipo",
				"(2) Preço",
				"(3) Ano");
			scanf("%d", &options);
			switch (options)
			{
			case 1:
				// buscar por Tipo
				printf("Qual tipo?\n",
					"(1) Hatche\n",
					"(2) Sedan\n",
					"(3) Picape\n",
					"(4) Conversível\n",
					"(5) Coupé\n",
					"(6) Station Wagon\n",
					"(7) Minivan\n");
				scanf("%i", &options);
				switch (options)
				{
				case 1:
					i = 0;
					if (i < (maxNumCar - 1), i++)
					{
						if (carType[i] = 1)
						{
							printf("Carro: %d \t", (i + 1));
							printf("preço: %f \t", carPrice[i]);
							printf("Ano: %d\n", carPrice[i]);
						}
					}
					break;
				case 2:
					i = 0;
					if (i < (maxNumCar - 1), i++)
					{
						// Deve ter uma forma de fazer isso com menos repetiçoes
						if (carType[i] = 2)
						{
							printf("Carro: %d \t", (i + 1));
							printf("preço: %f \t", carPrice[i]);
							printf("Ano: %d\n", carPrice[i]);
						}
					}
					break;
				case 3:
					i = 0;
					if (i < (maxNumCar - 1), i++)
					{
						if (carType[i] = 3)
						{
							printf("Carro: %d \t", (i + 1));
							printf("preço: %f \t", carPrice[i]);
							printf("Ano: %d\n", carPrice[i]);
						}
					}
					break;
				case 4:
					i = 0;
					if (i < (maxNumCar - 1), i++)
					{
						if (carType[i] = 4)
						{
							printf("Carro: %d \t", (i + 1));
							printf("preço: %f \t", carPrice[i]);
							printf("Ano: %d\n", carPrice[i]);
						}
					}
					break;
				case 5:
					i = 0;
					if (i < (maxNumCar - 1), i++)
					{
						if (carType[i] = 5)
						{
							printf("Carro: %d \t", (i + 1));
							printf("preço: %f \t", carPrice[i]);
							printf("Ano: %d\n", carPrice[i]);
						}
					}
					break;
				case 6:
					i = 0;
					if (i < (maxNumCar - 1), i++)
					{
						if (carType[i] = 6)
						{
							printf("Carro: %d \t", (i + 1));
							printf("preço: %f \t", carPrice[i]);
							printf("Ano: %d\n", carPrice[i]);
						}
					}
					break;
				case 7:
					i = 0;
					if (i < (maxNumCar - 1), i++)
					{
						if (carType[i] = 7)
						{
							printf("Carro: %d \t", (i + 1));
							printf("preço: %f \t", carPrice[i]);
							printf("Ano: %d\n", carPrice[i]);
						}
					}
					break;
				default:
					printf("Tipo invalido\n");
					break;
					// fechamento da escolha de tipos de carro
				}

			case 2:
				printf("Qual o preço?\n ");
				scanf("%i", &tmp);
				i = 0;
				if (i < (maxNumCar - 1), i++)
				{
					if (carPrice[i] = tmp)
					{
						printf("Carro: %d\t", (i + 1));
						printf("Tipo: %d\t", carType[i]);
						printf("Ano: %d\n", carPrice[i]);
					}
				}
				break;
			case 3:
				printf("Qual o ano?\n");
				scanf("%d", &tmp);
				i = 0;
				if (i < (maxNumCar - 1), i++)
				{
					if (carDate[i] = tmp)
					{
						printf("Carro: %d\t", (i + 1));
						printf("Tipo: %d\t", carType[i]);
						printf("Preço: %f\n", carPrice[i]);
					}
				}
				break;
			}

			// Exibis Clientes
		case 3:
			for (i = 0; i < (maxNumeroClients - 1); i++)
			{
				printf("Cliente numero %d: %s", (i + 1), clientNome[i][0]);
			}

			break;

			// Realizar venda
		case 4:
			printf("O cliente ja foi cadastrado?(TRUE/FALSE)");
			scanf("%d", &yesORno);

			printf("Tipo do carro a vender?\n (1) Hatche\n (2) Sedan\n (3) Picape\n (4) Conversível\n (5) Coupé\n (6) Station Wagon\n (7) Minivan\n");
			scanf("%i", &options);

			switch (options) {
			case 1:
				i = 0;
				if (i < (maxNumCar - 1), i++)
				{
					if (carType[i] = 1)
					{
						printf("Carro: %d \t", (i + 1));
						printf("preço: %f \t", carPrice[i]);
						printf("Ano: %d\n", carPrice[i]);
					}
				}
				break;
			case 2:
				i = 0;
				if (i < (maxNumCar - 1), i++)
				{
					// Deve ter uma forma de fazer isso com menos repetiçoes
					if (carType[i] = 2)
					{
						printf("Carro: %d \t", (i + 1));
						printf("preço: %f \t", carPrice[i]);
						printf("Ano: %d\n", carPrice[i]);
					}
				}
				break;
			case 3:
				i = 0;
				if (i < (maxNumCar - 1), i++)
				{
					if (carType[i] = 3)
					{
						printf("Carro: %d \t", (i + 1));
						printf("preço: %f \t", carPrice[i]);
						printf("Ano: %d\n", carPrice[i]);
					}
				}
				break;
			case 4:
				i = 0;
				if (i < (maxNumCar - 1), i++)
				{
					if (carType[i] = 4)
					{
						printf("Carro: %d \t", (i + 1));
						printf("preço: %f \t", carPrice[i]);
						printf("Ano: %d\n", carPrice[i]);
					}
				}
				break;
			case 5:
				i = 0;
				if (i < (maxNumCar - 1), i++)
				{
					if (carType[i] = 5)
					{
						printf("Carro: %d \t", (i + 1));
						printf("preço: %f \t", carPrice[i]);
						printf("Ano: %d\n", carPrice[i]);
					}
				}
				break;
			case 6:
				i = 0;
				if (i < (maxNumCar - 1), i++)
				{
					if (carType[i] = 6)
					{
						printf("Carro: %d \t", (i + 1));
						printf("preço: %f \t", carPrice[i]);
						printf("Ano: %d\n", carPrice[i]);
					}
				}
				break;
			case 7:
				i = 0;
				if (i < (maxNumCar - 1), i++)
				{
					if (carType[i] = 7)
					{
						printf("Carro: %d \t", (i + 1));
						printf("preço: %f \t", carPrice[i]);
						printf("Ano: %d\n", carPrice[i]);
					}
				}
				break;
			default:
				printf("Tipo invalido\n");
				break;
			}
			// Carro foi escolhido
			printf("Qual o carro?");
			scanf("%d", &tmpCarro);
			//escolher cliente
			printf("Qual o cliente?");
			for (i = 0; i < (maxNumeroClients - 1); i++)
			{
				printf("Cliente numero %d: %s", (i + 1), clientNome[i][0]);
			}

			scanf("%d", &tmpCliente);
			numVendas++;
			dinheiroVendas += carPrice[tmpCarro];
			clientSells[tmpCliente]++;
			clientMoney[tmpCliente] += carPrice[tmpCarro];

			// Retirar carro vendido do estoque

			carDate[tmpCarro] = 0;
			carPrice[tmpCarro] = 0;
			carType[tmpCarro] = 0;

			if (i = 0, i < (maxNumCar - 2), i++)
			{
				if (carDate[i] = 0)
				{

					carDate[i] = carDate[i + 1];
					carDate[i + 1] = 0;

					carPrice[i] = carPrice[i + 1];
					carPrice[i + 1] = 0;

					carType[i] = carType[i + 1];
					carType[i + 1] = 0;

				}

			}

			// case 4 break
			break;

			// Exibir estoques
		case 5:
			printf("Quantidade de carros por tipo:");

			// zerar a matriz
			if (i = 0, i < 6, i++) // 6 = (tipos de carro - 1)
			{
				carrosPorType[i][1] = 0;
			}
			// calcular matriz

			// Deve ter uma forma melhor de fazer isso
			if (i = 0, i < (maxNumCar - 1), i++)
			{
				if (carType[i] = 1)
				{
					carrosPorType[0][1]++;
				}
				else if (carType[i] = 2)
				{
					carrosPorType[1][1]++;
				}
				else if (carType[i] = 3)
				{
					carrosPorType[2][1]++;
				}
				else if (carType[i] = 4)
				{
					carrosPorType[3][1]++;
				}
				else if (carType[i] = 5)
				{
					carrosPorType[4][1]++;
				}
				else if (carType[i] = 6)
				{
					carrosPorType[5][1]++;
				}
				else if (carType[i] = 7)
				{
					carrosPorType[6][1]++;
				}
			}
			// exibir matrix de estoque

			printf("Hatches:             %d\n", carrosPorType[0][1]);
			printf(" Sedans:             %d\n", carrosPorType[1][1]);
			printf("Picapes:             %d\n", carrosPorType[2][1]);
			printf("Conversiveis:        %d\n", carrosPorType[3][1]);
			printf("Coupes:              %d\n", carrosPorType[4][1]);
			printf("Station wagons:      %d\n", carrosPorType[5][1]);
			printf("Minivans:            %d\n", carrosPorType[6][1]);



			break;
			// Consultar vendas
		case 6:
			printf("Arecadaçao das vendas: %d \n", dinheiroVendas);
			printf("Numero de vendas %d\n", numVendas);
			break;
			//Cadastrar Cliente
		case 7:
			printf("Nome do cliente?\n");
			// Ultimo cliente

			i = 0;
			while (i < (maxNumeroClients - 1), i++)
			{
				if (carType[i] = 0)
				{
					last = i;
					i = maxNumeroClients;
				}
			}
			scanf("%s", &clientNome[last][0]);
			break;
			//Saida
		case 8:
			Halt = false;
			break;

		default:
			printf("\nNumero Invalido\n");
			break;
		}
	}
	return 0;
}