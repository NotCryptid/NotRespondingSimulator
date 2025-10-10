# NotRespondingSimulator
Very cool tool that throws app not responding on windows
# Compiling
Prerequisites:
- MSYS2
- mingw-w64-ucrt-x86_64-gcc

Step 1.

Open the folder with main.cpp in MSYS2 UCRT64

Step 2. 

Run the following command
```bash
g++ main.cpp -mwindows -s -o app.exe -luser32
```
