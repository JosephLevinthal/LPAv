import re

stringDeEntrada = input()
while (stringDeEntrada != "####"):
    if (re.match("^[A-Z]+[a-z]+[0-9]+([!@#$%^&*()_+={}\\\\|\\/?<>-]|[\\[\\]])+$", stringDeEntrada)):
        print("SIM")
    else:
        print("NAO")
    stringDeEntrada = input()
