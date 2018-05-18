import re

stringDeEntrada = input()
while (stringDeEntrada != "####"):
    if (re.match("^([0-9]{5}-[0-9]{3})$", stringDeEntrada)):
        print("SIM")
    else:
        print("NAO")
    stringDeEntrada = input()
