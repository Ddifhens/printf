
## CURRENT


|	func | made | .h | makefile | tested | working |
| --- | --- | --- | --- | --- | --- |
| %c char	| Y | Y | Y | Y | Y |
| %s string	| Y | Y | Y | Y | Y |
| %p - void * | Y | Y | Y | Y | ~ |
| %d - decimal	| X | X | X | X | X |
| %i - interger in base ten	| Y | Y | Y | Y | Y |
| %u - unsigned decimal	| X | X | X | X | X |
| %x - nbr in Hex	| Y | Y | Y | Y | Y |
| %X - nbr in Hex	| Y | Y | Y | Y | Y |
| % - escape %		| Y | Y | Y | Y | Y |

#### antes da entrega: 
modificar o nome do ficheiro ".a"
(libftprintf.a)
retirar a "-g" flag do makefile 
remover tester da pasta
directories direitas


## TODO
~~correct 1 edge case in %i, %x functions handling of max and min values for long and int ....?~~

~~send direct next param to function with va_arg instead of sending the whole initialized param (cleaner, and sometimes necessary, when dealing with recursive functions such as putnbr, otherwise va_list is being constantly iterated over)~~

~~organizar file tree~~

~~escrever as funções base~~

~~Chegar a estado testável~~

~~retirar dependência em global pointers, transicionar em vez para retornos de funções~~
