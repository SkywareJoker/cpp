@echo off
@REM g++ -o ./_build/exe/WenZiXiuXian.exe ./main/Main.cpp -L./_build/o/json.o data/*.cpp model/*.cpp view/*.cpp controller/*.cpp -I./main -I./data -I./view -I./model -I./controller
cmake --build .