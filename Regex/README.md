# Expresiones regulares

- __[Genericos](#genericos)__
- __[Numeros](#numeros)__
- __[Cadenas](#cadenas)__

### Genericos #

| Descripción                            | Expresión                              |
|         ----------------------         |         :----------------------:       |
| Palíndromos                            |   \b(\w)?(\w)\w?\2\1                   |
| Numeros de telefono                    |   \b\d{3}[-.]?\d{3}[-.]?\d{4}\b        |
| Colores de 24 o 32 bits                |   (?:#\|0x)?(?:[0-9A-F]{2}){3,4}       |
| Parentesis equilibrados            |\((?:[^)(]+\|\((?:[^)(]+\|\([^)(]*\))*\))*\)|
| Espacios, tabs, enter...               | [ \f\n\r\t\v]                          |
| Tabulaciones                           | \t                                     |
| Tabulaciones verticales                | \v                                     |
| | |
| | |


### Numeros #

| Descripción                            | Expresión                              |
|         ----------------------         |         :----------------------:       |
| Números y decimales                    |   (?:\d*\.)?\d+                        |
| Dos carateres (e.j: 1 ó 5)             | 1\|5                                   |
| Todo excepto numeros del 1 hasta 9     | [^0-9]                                 |
| Todos los numeros del 1 hasta 9        | [0-9]                                  |

### Cadenas #

| Descripción                            | Expresión                              |
|         ----------------------         |         :----------------------:       |
| Variaciones de una palabra (e.j: test) |   \btest(er\|ing\|ed\|s)?\b            |
| Palabras                               |   [a-zA-Z]+                            |
| Coincidencias con carateres a, b ó c   | [abc]                                  |
| Todo excepto a, b, c ó d               | [^abcd]                                |
| Letras de la A hasta Z                 | [A-Z]                                  |
| Letras mayusculas y minusculas         | [A-Za-z0-9]                            |
||  |

## Mas información
- __[Probador de expresiones](http://regexr.com/)__
- __[Tutorial Regex C++](https://solarianprogrammer.com/2011/10/12/cpp-11-regex-tutorial)__
- __[Remplazar datos con Regex C++](http://www.cplusplus.com/reference/regex/regex_replace/)__
