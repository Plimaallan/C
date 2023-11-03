# Linguagem C

C é uma linguagem de programação compilada de propósito geral, estruturada, imperativa, procedural, padronizada pela Organização Internacional para Padronização (ISO), criada em 1972 por Dennis Ritchie na empresa AT&T Bell Labs para desenvolvimento do sistema operacional Unix (originalmente escrito em Assembly)

# Noções básicas de C

Aqui vamos aprender sobre a estrutura da linguagem C e a sintaxe para construir um código viável.
Esses são tópicos importantes e você precisa ser minucioso nesses tópicos antes de prosseguir.

# Diferença entre C e C++

Quando se trata de linguagens de programação, C e C++ são dois nomes que costumam aparecer.
Ambas as linguagens são amplamente utilizadas e têm feito contribuições significativas para  mundo do desenvolvimento de software.
No entanto, elas têm diferenças distintas em termos de funcionalidade, recursos e aplicaçã.
Exploraremos as diferenças entre C e C++, ajudando você na escolha da linguagem certa para
suas necessidades de programação e projeto.
C++ é uma versão aprimorada do C que tem suporte a orientação a objetos aumentando a velocidade e a produtividade do desenvolvedor.

|    | Parâmetros                                | C                                                                                                 | C++                                                                                                |
|----|-------------------------------------------|---------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------|
| 1  | História                                  | Dennis Ritchie, desenvolveu a linguagem C em 1972.                                                | C++ foi criada em anos 1982 por Bjarne Stroustrup na AT&T Bell Labs.                               |
| 2  | Tipo de Linguagem                         | C é uma linguagem de programação procedural.                                                      | C++ é uma linguagem de programação híbrida, ou seja, Procedural e Orientada a Objetos.             |
| 3  | Aproximação                               | C usam abordagem de cima para baixo.                                                              | O C++ usa a abordagem de baixo para cima.                                                          |
| 4  | Palavras-chave                            | C tem 32 palavras-chave.                                                                          | C++ suporta 95 palavras-chave.                                                                     |
| 5  | Alocação de memória                       | C usa as funções calloc() e malloc() para alocação dinâmica de memória e free() para desalocação. | O C++ usa o operador new para alocação dinâmica de memória e o operador delete para desalocação.** |
| 6  | Suporte à Programação Orientada a Objetos | C não suporta nenhum tipo de recursos OOP.                                                        | C++ é uma linguagem baseada em OOP e suporta todos os recursos de OOP.                             |
| 7  | Modificadores de acesso                   | A estrutura C não tem modificadores de acesso.                                                    | Os modificadores de acesso são usados em estruturas C++.                                           |
| 8  | Funções virtuais e amigo                  | Não há suporte para a função virtual e amigo em C                                                 | C++ suporta funções virtual e friend.                                                              |
| 9  | Suporte para tratamento de erros          | Não há suporte para tratamento de erros.                                                          | Blocos Try, Catch e Throw ajuda no tratamento de erro                                              |
| 10 | Namespace                                 | Não oferece suporte a namespace, resultando em colisões de código e nome menos eficientes.        | Oferece suporte a namespace para evitar colisões de nomes.                                         |
| 11 | Sobrecarga de função e operador.          | C não suporta sobrecarga de função e operador diretamente.                                        | O C++ suporta sobrecarga de função e operador.                                                     |
| 12 | Variável por referência                   | Não há suporte para variáveis de refração.                                                        | O C++ oferece suporte à variável de refrência.                                                     |
| 13 | Uso por                                   | Kernel do Microsoft Windows, Telegram Messenger, Banco de Dados Oracle, MySQL, etc.               | Google Chrome, Microsoft Office, motor de jogo Torque 3-D, e muito mais.                           |

## 1 - Design Orientado a Objetos

- C++ tem suporte para classe, objeto, herança, abstração, etc como resultado a reutilização de código, ocultação de dados e gerenciamento de memória é possível.
- C não tem recursos de OOP, os dados estão abertos em todos os lugares e se movem livremente pelas funções.

## 2 - Linguagem Híbrida x Procedural

- C é uma linguagem Procedural ou seja, que se baseia em procedimentos (instruções / funções), que são executados numa sequência.
- C++ é visto como linguagem híbrida, ou seja, pode ser usado OOP ou tradicional, usar OOP em C++ é opcional, enquanto em java é obrigatório.