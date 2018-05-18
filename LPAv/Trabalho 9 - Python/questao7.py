import re

stringDeEntrada = input()
while (stringDeEntrada != "####"):
    if (re.match("^[A-Z][a-zA-Z\\-]{0,29}$", stringDeEntrada)):
        print("SIM")
    else:
        print("NAO")
    stringDeEntrada = input()
