algoritmo "VelocidadeMedia"
var
   piloto: caractere
   temp, distancia, velocidade: real
inicio
   escreva("Digite o nome do piloto: ")
   leia(piloto)
   escreva("Digite a distância percorrida: ")
   leia(distancia)
   escreva("Digite o tempo percorrido: ")
   leia(temp)
   velocidade <- distancia / temp
   escreva("A velocidade média do ", piloto, "foi ", velocidade, "km/h")
fimalgoritmo
