int** geraMatrizNXN(int ordem) {
	int i;
	int **mat = malloc(sizeof(int*) * ordem);
	mat[0] = malloc(ordem * ordem * sizeof(int));
	for (i = 1; i < ordem; i++) {
		mat[i] = mat[0] + i * ordem;
	}
    return mat;
}

int** menor(int ordem, int **matriz, int k) {
    int i, j;
    int **mat = geraMatrizNXN(ordem - 1);
    int *ptr = &matriz[0][0];
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            if (k != j && i != 0) {
                if (j > k) {
                	mat[i - 1][j - 1] = *(ptr + i * ordem + j);
                } else if (j <= k) {
                    mat[i - 1][j] = *(ptr + i * ordem + j);
                }
            } 
        }
    }
    return mat;
}

int detAte3(int ordem, int **m) {
    int result, positivo, negativo;
    switch (ordem)
    {
    case 1:
        result = m[0][0];
        break; 
    case 2:
        result = (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]);
        break;
    case 3:
        positivo = m[0][0] * m[1][1] * m[2][2] + m[0][2] * m[1][0] * m[2][1] + m[0][1] * m[1][2] * m[2][0];
        negativo = (m[0][2] * m[1][1] * m[2][0] + m[0][0] * m[1][2] * m[2][1] + m[0][1] * m[1][0] * m[2][2]);
        result = positivo - negativo;
    }
    return result;
}

int determinantes(int ordem, int **matriz) {
    if (ordem <= 3) {
        return detAte3(ordem, matriz);
    } else {
        return cofatores(ordem, matriz);
    }
}

int cofatores(int ordem, int **matriz) {
    int i, cofator, soma = 0;
    int *ptr = &matriz[0][0];
    for (i = 0; i < ordem; i++) {
    	int **men = menor(ordem, matriz, i);
        cofator = (int) pow(-1.0, i) * determinantes(ordem - 1, men);
        free(men[0]);
        free(men);
        soma += *(ptr + i) * cofator;
    }
    return soma;
}
