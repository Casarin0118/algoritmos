@echo off
chcp 65001

rem Navegar para a Área de Trabalho
cd %USERPROFILE%\Desktop

rem Criar a pasta "lanchonete" e entrar nela
mkdir lanchonete
cd lanchonete

rem Criar as pastas dentro de "lanchonete"
mkdir estoque entregas balcão caixa

rem Entrar na pasta "estoque" e criar as subpastas "bebidas" e "alimentos"
cd estoque
mkdir bebidas alimentos

rem Entrar na pasta "bebidas" e criar 5 arquivos .txt com nome de bebidas
cd bebidas
for /l %%i in (1,1,5) do (
    type nul > bebida%%i.txt
)

rem Voltar para a pasta "estoque" e entrar na pasta "alimentos"
cd ..
cd alimentos

rem Criar 50 arquivos .txt com nome de alimentos
for /l %%i in (1,1,50) do (
    type nul > alimento%%i.txt
)

rem Voltar para a pasta "lanchonete"
cd ..
cd ..

rem Criar as pastas dentro de "entregas" e "balcão" para cada mês do ano
for %%m in (janeiro fevereiro março abril maio junho julho agosto setembro outubro novembro dezembro) do (
    mkdir "entregas\%%m" "balcão\%%m"
)

rem Entrar na pasta "caixa" e criar a pasta "vendas"
cd caixa
mkdir vendas

rem Entrar na pasta "vendas" e criar as pastas "crédito" e "débito"
cd vendas
mkdir crédito débito

rem Voltar para a pasta "lanchonete" (diretório inicial)
cd %USERPROFILE%\Desktop\lanchonete

echo Estrutura de pastas e arquivos criada com sucesso.
