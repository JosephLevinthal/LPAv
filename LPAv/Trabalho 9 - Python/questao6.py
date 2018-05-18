import re

stringDeEntrada = input()
while (stringDeEntrada != "####"):
    if (re.match("^((0[0-9])|([12][1-9])|(3[01]))\\/((0[1-9])|1[012])\\/((19[0-9]{2,2})|(20((0[0-9])|(1[0-7]))))$", stringDeEntrada)):
        print("SIM")
    else:
        print("NAO")
    stringDeEntrada = input()
