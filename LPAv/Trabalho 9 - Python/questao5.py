import re

stringDeEntrada = input()
while (stringDeEntrada != "####"):
    if (re.match("^http[s]{0,1}:\\/\\/[a-zA-Z-_]+(\\.[a-zA-Z-_]+)+(\\/[a-zA-Z-_]+)*(\\.[a-zA-Z-_]+){0,1}$", stringDeEntrada)):
        print("SIM")
    else:
        print("NAO")
    stringDeEntrada = input()
