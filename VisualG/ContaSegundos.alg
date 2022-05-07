algoritmo "ContaSegundos"
var
   segundos, minutos, horas: INTEIRO
inicio
   escreva("Digite a quantidade de segundos: ")
   leia(segundos)
   horas <- segundos DIV 3600
   segundos <- segundos - (horas * 3600)
   minutos <- segundos DIV 60
   segundos <- segundos - (minutos * 60)
   escreva(horas, " horas ,", minutos, " minutos e ", segundos, " segundos")
fimalgoritmo
