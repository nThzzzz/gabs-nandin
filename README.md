# 🪙 Exchange-de-Criptomoedas em C

Bem-Vindo ao projeto em C da criação de um Exchange de criptomoedas do Curso (Desenvolvimento de Algoritmo) na Faculdade (FEI).
## 📈 Como funciona o nosso projeto.
<img src="https://img.freepik.com/fotos-premium/bitcoin-em-um-teclado_355067-923.jpg?w=1380" alt="Texto Alternativo">

## 📊 Objetivo do Projeto
-    Com esse projeto, nosso objetivo é a partir do conhecimento adiquirido na linguagem C, conseguir realizar uma aplicação que envolve tudo o que nos foi ensinado. Na criação desse Exchange de Criptomoedas que foi feito em até 1 mês, nosso grupo aplicou e aprendeu coisas novas da linguagem na prática, além de ser nosso primeiro projeto utilizando o git e suas ferramentas. Nos inspiramos em bancos digitais que existem e utilizamos no nosso cotidiano.

## 🧾 Compilação e Execução
-    Como compilar e executar nosso projeto?
### 1. Replit
-    Abrir a plataforma Replit e puxar o codigo do github pelo link desse repositorio.
      #### 1.2. Makefile 
     -    Após isso, o usuário deverá abrir o arquivo Makefile criado e colar a seguinte linha de codigo.
         <pre><code>
         
              all: main
              CC = clang
              
              override CFLAGS += -g -Wno-everything -pthread -lm
              
              SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.c' -print)
              HEADERS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.h' -print)
              
              main: $(SRCS) $(HEADERS)
                $(CC) $(CFLAGS) $(SRCS) -o "$@"
              
              main-debug: $(SRCS) $(HEADERS)
                $(CC) $(CFLAGS) -O0 $(SRCS) -o "$@"
              
              clean:
                rm -f main main-debug
          </pre></code>
     - Depois de colar o código, apenas clique no botão "Run". Onde o programa será compilado e executado de forma correta.
### 2. Terminal
-  Ao baixar a pasta e entrar no diretório dos arquivos pelo terminal de sua máquina, cole a seguinte linha de código.
        <pre><code> gcc -o exchange main.c manip_exchange.c</pre></code>   
      -   E logo em seguida.
        <pre><code>./exchange</pre></code> 

      
## 🚀 Passo a Passo - Usuários.

### 1. Menu Inicial
-    Aqui é apresentado ao usuario 3 opções.
-    **Cadastro**:  Caso não tenha uma conta no Exchange, crie sua conta aqui com um CPF válido, senha e um nome de usuário.
-    **Login**:  Caso já tenha uma conta e deseja acessa-la.
-    **Sair**: Sair da aplicação.

### 2. Menu de opções
-    Menu principal do projeto, onde nos é apresentado todas as funcionalidades do projeto.
     #### 2.1 Consultar Saldo
     -    É mostrado ao usuário todo o saldo atual da conta, dados pessoais como nome e CPF e a quantidade de Reais e Criptomoedas investidas.
     #### 2.2 Consultar Extrato
     -    É apresentado o extrato total da conta com um limite de 100 históricos, salvando todas as transações feitas na plataforma. 
     #### 2.3 Depositar
     -    Local onde o usuário consegue depositar uma quantia em reais para sua conta.
     #### 2.4 Sacar
     -    Local onde o usuário consegue realizar o saque de uma quantia de reais da sua conta.
     #### 2.5 Comprar Moedas
     -    Aqui é mostrado ao usuário as três criptomoedas que trabalhamos(Bitcoin/Ethereum/Ripple) juntamente com sua cotação atual, onde o usuário poderá escolher uma entre as três e comprar a quantidade desejada.
     #### 2.6 Vender Moedas
     -    Aqui é mostrado ao usuário as três criptomoedas que trabalhamos(Bitcoin/Ethereum/Ripple) juntamente com sua cotação atual, onde o usuário poderá escolher uma entre as três e vender a quantidade desejada.
     #### 2.7 Atualizar Cotação
     -    Onde as cotações das criptomoedas podem ser atualizadas e seu valor consequentemente mudado com apenas um clique.
     #### 2.8 Voltar ao menu inicial
     -    Opção de sair e voltar ao menu inicial.
 
## 🚀 Passo a Passo - Administradores.

### 1. Menu Inicial
-    Aqui é apresentado ao usuario 3 opções.
-    **Cadastro**:  Caso não tenha uma conta no Exchange, crie sua conta aqui com um CPF válido, senha e um nome de usuário.
-    **Login**:  Caso já tenha uma conta e deseja acessa-la.
-    **Sair**: Sair da aplicação.

### 2. Menu de opções
-    Menu principal do projeto, onde nos é apresentado todas as funcionalidades do projeto.
     #### 2.1 Cadastro de novos investidores
     -    Assim como um usuário comum, o administrador pode cadastrar novos usuários, com  as mesmas informações do cadastro de usuários comuns.
     #### 2.2 Excluir investidores
     -    Local onde o administrador pode excluir qualquer um dos usuário apenas digitando o CPF e fazendo uma confirmação. Recurso usado para deixar o nosso banco longe de 'Hackers'.
     #### 2.3 Cadastro de Criptomoedas
     -    Local onde o administrador pode cadastrar uma grande váriedade de novas criptomoedas para que o investidor possa investir com segurança e muita diversidade.
     #### 2.4 Excluir Criptomoedas
     -    Assim como o mesmo pode casdastrar mais Criptomoedas, o mesmo pode excluir qualquer uma apenas com o nome da criptomoeda, e após uma confirmação a moeda é excluida totalmente.
     #### 2.5 Consultar saldo dos investidores
     -    Aqui uma consulta de saldo pode ser feita pelo administrador em qualquer um dos usuários, apenas informando o CPF do usuário em questão e ver seu saldo atual.
     #### 2.6 Consultar extrato dos investidores
     -    Aqui onde o administrador pode fazer a consulta dos extrato de todos os usuários, apenas informando o CPF do usuário em questão e ver todo o extrato.
     #### 2.7 Atualizar Cotação das Criptomoedas
     -    Onde as cotações das criptomoedas podem ser atualizadas e seu valor consequentemente mudado com apenas um clique.

## 🏷️ Membros da Equipe
-    Arthur Barbosa Zanvetor  **R.A.**: 24.124.063-9
-    Fernando Bordin Lopes  **R.A.**: 24.124.003-5
-    Gabriel de Figueiredo Pereira Engle  **R.A.**: 24.124.024-1
