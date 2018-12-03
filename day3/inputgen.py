'''
#1 @ 108,350: 22x29
'''
from random import randint

AREA_SIZE = 1000

class Rect:
    def __init__(self, i, x, y, w, h):
        self.i = i
        self.x = x
        self.y = y
        self.w = w
        self.h = h

sects = []
batchCount = 0
last = None

for i in range(9999):
    batchCount += 1
    if last == None:
        x = randint(1, AREA_SIZE - 155)
        y = randint(1, AREA_SIZE - 155)
        w = randint(1, 150)
        h = randint(1, 150)
        sects.append(Rect(i, x, y, w, h))
    else:
        x = last.x + randint(-100, 100)
        y = last.y + randint(-100, 100)
        w = last.x - last.w
        h = last.y - last.h
        sects.append(Rect(i, x, y, w, h))


with open("big_input.txt", "w") as f:
    for sect in sects:
        f.write("#{} @ {},{}: {}x{}\n".format(sect.i, sect.x, sect.y, sect.w, sect.h))
