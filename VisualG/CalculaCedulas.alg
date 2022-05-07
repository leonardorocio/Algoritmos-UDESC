algoritmo "CalculaCedulas"
var
    valor, nota50, nota20, nota10, nota5, nota2, moeda : INTEIRO
inicio
     escreva("Digite o valor a ser calculado: ")
     leia(valor)
     nota50 <- valor DIV 50
     valor <- valor - (nota50 * 50)
     nota20 <- valor DIV 20
     valor <- valor - (nota20 * 20)
     nota10 <- valor DIV 10
     valor <- valor - (nota10 * 10)
     nota5 <- valor DIV 5
     valor <- valor - (nota5 * 5)
     nota2 <- valor DIV 2
     valor <- valor - (nota2 * 2)
     moeda <- valor
     escreva(nota50, " notas de 50, ", nota20, " notas de 20, ", nota10, " notas de 10, ", nota5, " notas de 5, ", nota2, " notas de 2, ", moeda, " moedas de 1 REAL")
fimalgoritmo
