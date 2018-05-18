import re

stringDeEntrada = input()
while (stringDeEntrada != "####"):
    if (re.match("^RS[0-9]{1,3}(\\.[0-9]{3,3}){0,1},[0-9]{2,2}$", stringDeEntrada)):
        print("SIM")
    else:
        print("NAO")
    stringDeEntrada = input()
