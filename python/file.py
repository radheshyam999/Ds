def pof():
    f = open("abc.json","a")
    f.write("i would like to write in file00")
    f.flush()
    f.close()
pof()

def rof():
    f = open("abc.json","r")
    print(f.read(),"\n")
rof()
