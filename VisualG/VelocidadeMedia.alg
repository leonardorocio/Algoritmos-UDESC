algoritmo "VelocidadeMedia"
var
   piloto: caractere
   temp, distancia, velocidade: real
inicio
   escreva("Digite o nome do piloto: ")
   leia(piloto)
   escreva("Digite a dist�ncia percorrida: ")
   leia(distancia)
   escreva("Digite o tempo percorrido: ")
   leia(temp)
   velocidade <- distancia / temp
   escreva("A velocidade m�dia do ", piloto, "foi ", velocidade, "km/h")
fimalgoritmo
