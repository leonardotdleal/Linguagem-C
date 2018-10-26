

int mostraMenu();

int mostraMenu() {
	int op;

	do{
		//system("clear");

		printf("1 - Por registros\n");
		printf("2 - Por tamanho\n");
		printf("3 - Sair\n");
		printf("Opcao: ");
		scanf("%d", &op);
	}while(op < 1 || op > 3);

	return op;
}
