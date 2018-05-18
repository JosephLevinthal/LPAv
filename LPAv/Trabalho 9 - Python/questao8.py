import re

stringDeEntrada = input()
while (stringDeEntrada != "####"):
    if (re.match("^\\([0-9]{2,2}\\)9[0-9]{4,4}[-]{0,1}[0-9]{4,4}$", stringDeEntrada)):
        print("SIM")
    else:
        print("NAO")
    stringDeEntrada = input()
