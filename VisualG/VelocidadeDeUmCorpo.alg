algoritmo "VelocidadeDeUmCorpo"
var
   velocidadeFinal, velocidadeInicial, aceleracao, temp: real
inicio
      escreva("Digite em sequencia a Vi, a aceleracao e o tempo: ")
      leia(velocidadeInicial, aceleracao, temp)
      velocidadeFinal <- velocidadeInicial + aceleracao * temp
      escreva("Velocidade Final é: ", velocidadeFinal)
fimalgoritmo
