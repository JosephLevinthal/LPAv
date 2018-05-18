import re

stringDeEntrada = input()
while (stringDeEntrada != "####"):
    if (re.match("^([0-9]{7,7}-[0-9])$", stringDeEntrada)):
        print("SIM")
    else:
        print("NAO")
    stringDeEntrada = input()
