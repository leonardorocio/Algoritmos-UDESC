algoritmo "ConverterTemperatura"
var
   temperaturaF, temperaturaC : REAL
inicio
      escreva("Digite a temperatura em ºF: ")
      leia(temperaturaF)
      temperaturaC <- (5 / 9) * (temperaturaF - 32)
      escreva("A temperatura em ºC é: ", temperaturaC)
fimalgoritmo
