int right(char *texto, int tam, char buff2[]){
	int i,size;
	for(i=0;i<=tam;i++) buff2[i]='\0';
	i = 0;
	size = strlen(texto);
	printf("Size: %i\n",size);
	//endereco3 += size-1;
	buff2[tam-1] = texto[size-1];
	printf("Buff2: %c",(buff2[tam-1]));
	for(i=tam-2;i>=0;i--){
		buff2[i] = texto[size+(i-tam)];
		printf("%c",(buff2[i]));
		}
	return buff2;
	}

int left(char *texto, int tam, char buff[]){	
	//char buff[100];
	int i=0;
	printf("from left: %s\n",texto);
	// Limpando buff
	for(i=0;i<=tam+1;i++) buff[i]='\0';
	snprintf(buff,tam,"%s",texto);
	/*
	i = 0;
	buff[i++] = texto[i];
	for(i=1;i<tam;i++){
		buff[i] = texto[i];
		}	
	*/
	printf("buff f left: %s\n",texto);
	return buff;
	}	

int substring(char *texto, int esq, int tam, char buff3[]){
	// Limpando buff3
	int i;
	for(i=0;i<=tam+1;i++) buff3[i]='\0';
	for(i=esq;i<tam+esq;i++){
		buff3[i-esq] = texto[i];
		printf("%c",buff3[i]);
		}
	return buff3;
	}