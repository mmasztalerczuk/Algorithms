import requests

loginUrl  = 'http://www.wechall.net/login'

s = requests.Session()
r = s.get(loginUrl)
r = s.post(loginUrl, data = {'username' : "Marvolo", 'password' : "magicuj1rokmata", 'login' : 'Login'})


