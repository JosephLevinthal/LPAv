import re

stringDeEntrada = input()
while (stringDeEntrada != "####"):
    if (re.match("^[A-Za-z0-9\.\+_-]+@[A-Za-z0-9\._-]+\.[a-zA-Z]*$", stringDeEntrada)):
        print("SIM")
    else:
        print("NAO")
    stringDeEntrada = input()
