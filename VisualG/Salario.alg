algoritmo "Salario"
var
   funcionario: caractere
   salario, valorPorHora, qtdHoras: real
inicio
      escreva("Digite o nome do funcionario: ")
      leia(funcionario)
      escreva("Digite em sequencia o valor por hora e a quantidade de horas trabalhadas: ")
      leia(valorPorHora, qtdHoras)
      salario <- valorPorHora * qtdHoras * 30
      escreva("O salario do ", funcionario, " é de ", salario)
fimalgoritmo
