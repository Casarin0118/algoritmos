chcp 65001

@echo off

cd Desktop
mkdir Criador_de_pastas
cd Criador_de_pastas
mkdir Fundamentos Classes Forms Utils Arquivos
cd Fundamentos
type nul > ola.py
type nul > constantes.py

mkdir Decisão
cd Decisão
type nul > aprova.py
type nul > temp.py
cd ..

mkdir Repetição
cd Repetição
type nul > num.py
type nul > par.py
cd ..
cd ..

cd Classes
type nul > carro.py
mkdir Interfaces
cd Interfaces
type nul > liga.py
cd ..
mkdir Heranca
cd Heranca
type nul > gm.py
cd ..
mkdir Enums
cd Enums
type nul > Combustível.py
cd ..
cd ..

cd Forms 
type nul > Cadastro.py
type nul > Lista.py
cd ..
cd ..

cd Utils
type nul > data.py
cd ..
 
cd Arquivos
for /l %%i in (1,1,1000000) do (
    echo. > arquivo%%i.txt
)

