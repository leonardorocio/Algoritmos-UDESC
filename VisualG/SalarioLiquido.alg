algoritmo "LampadasNecessarias"
var
    potencia, largura, comprimento, qtdLampadas, areaComodo : REAL
inicio
      escreva("Digite a potencia da lampada, a largura do comodo e o comprimento do comodo: ")
      leia(potencia, largura, comprimento)
      areaComodo <- largura * comprimento
      qtdLampadas <- (areaComodo * 18) DIV potencia
      escreva("S�o necess�rias ", qtdLampadas, " l�mpadas para iluminar o comodo")
fimalgoritmo
