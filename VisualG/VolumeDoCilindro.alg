algoritmo "VolumeDoCilindro"
var
   volume, raio, altura: real
inicio
      escreva("Digite o raio e a altura em sequencia: ")
      leia(raio, altura)
      volume <- pi * (raio * raio) * altura
      escreva("O volume do cilindro é: ", volume)
fimalgoritmo
