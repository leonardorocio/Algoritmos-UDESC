algoritmo "ConverterTemperatura"
var
   temperaturaF, temperaturaC : REAL
inicio
      escreva("Digite a temperatura em �F: ")
      leia(temperaturaF)
      temperaturaC <- (5 / 9) * (temperaturaF - 32)
      escreva("A temperatura em �C �: ", temperaturaC)
fimalgoritmo
