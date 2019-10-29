def getContent(fileName):
    f = open("generator/" + fileName, "r")
    c = str(f.read())
    f.close()
    return c