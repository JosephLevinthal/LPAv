import re

stringDeEntrada = input()
while (stringDeEntrada != "####"):
    if (re.match("^\d{3}\.\d{3}\.\d{3}\-\d{2}$", stringDeEntrada)):
        print("SIM")
    else:
        print("NAO")
    stringDeEntrada = input()
