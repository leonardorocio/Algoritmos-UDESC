algoritmo "PorcentagemVotos"
var
   total, brancos, nulos, validos : REAL
inicio
      escreva("Digite o total de votos válidos: ")
      leia(validos)
      escreva("Digite o total de votos brancos: ")
      leia(brancos)
      escreva("Digite o total de votos nulos: ")
      leia(nulos)
      total <- brancos + nulos + validos
      brancos <- (100 * brancos) / total
      nulos <- (100 * nulos) / total
      validos <- (100 * validos) / total
      escreval(brancos, "%brancos")
      escreval(nulos, "%nulos")
      escreval(validos, "%validos")
fimalgoritmo
