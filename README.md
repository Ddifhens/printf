
## CURRENT


|	func | made | .h | makefile | tested | working |
| --- | --- | --- | --- | --- | --- |
| %c char	| prototyped | ~ | ~ | X | ? |
| %s string	| protoyped | ~ | ~ | X | ? |
| %p - void * hexadecimal | X | X | X | X | X |
| %d - decimal	| X | X | X | X | X |
| %i - interger in base ten	| prototyped | X | X | X | X |
| %u - unsigned decimal	| X | X | X | X | X |
| %x - nbr in Hex	| X | X | X | X | X |
| %X - nbr in Hex	| X | X | X | X | X |
| % - escape %		| X | X | X | X | X |

#### antes da entrega: 
modificar o nome do ficheiro ".a"
(libftprintf.a)



## TODO
send direct next param to function with va_arg instead of sending the whole initialized param (cleaner, and sometimes necessary, when dealing with recursive functions such as putnbr, otherwise va_list is being constantly iterated over)

organizar file tree 

escrever as funções base 

chegar a estado testável 

retirar dependência em global pointers, transicionar em vez para retornos de funções 
