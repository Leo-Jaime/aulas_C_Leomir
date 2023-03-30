import requests
import json

cotacoes = requests.get("https://economia.awesomeapi.com.br/last/USD-BRL,EUR-BRL,BTC-BRL")
cotacoes_dic = cotacoes.json()
dolar = cotacoes_dic ['USDBRL']['bid']
print(dolar)
