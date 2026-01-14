@echo off
REM Compilation script for Assignment 4

echo Compiling all tasks...
echo.

cd task1
gcc task1.c -o task1.exe
if exist task1.exe echo [OK] Task 1 compiled successfully
cd ..

cd task2
gcc task2.c -o task2.exe
if exist task2.exe echo [OK] Task 2 compiled successfully
cd ..

cd task3
gcc task3.c -o task3.exe
if exist task3.exe echo [OK] Task 3 compiled successfully
cd ..

cd task4
gcc task4.c -o task4.exe
if exist task4.exe echo [OK] Task 4 compiled successfully
cd ..

cd task5
gcc task5.c -o task5.exe
if exist task5.exe echo [OK] Task 5 compiled successfully
cd ..

cd task6
gcc task6.c -o task6.exe
if exist task6.exe echo [OK] Task 6 compiled successfully
cd ..

cd task7
gcc task7.c -o task7.exe
if exist task7.exe echo [OK] Task 7 compiled successfully
cd ..

cd task8
gcc task8.c -o task8.exe
if exist task8.exe echo [OK] Task 8 compiled successfully
cd ..

echo.
echo Compilation complete!
pause
