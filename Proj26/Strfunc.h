int left(char *texto, int tam, char buff[]){	
	//char buff[100];
	int i=0;
	printf("from left: %s\n",texto);
	// Limpando buff
	for(i=0;i<=tam+1;i++) buff[i]='\0';
	snprintf(buff,tam,"%s",texto);
	//printf("buff f left: %s\n",texto);
	return buff;
	}	

int right(char *texto, int tam, char buff2[]){
	int i,size;
	// Limpando buff2
	for(i=0;i<=tam;i++) buff2[i]='\0';
	// No caso do right, precisamos do tamanho
	// do texto de entrada
	size = strlen(texto);
	//printf("Size: %i\n",size);
	// Primeiro caracter da direita	
	buff2[tam-1] = texto[size-1];
	//printf("Buff2: %c",(buff2[tam-1]));
	for(i=tam-2;i>=0;i--){
		buff2[i] = texto[size+(i-tam)];
		//printf("%c",(buff2[i]));
		}
	return buff2;	
	}
