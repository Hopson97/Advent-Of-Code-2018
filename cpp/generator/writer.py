
def writeImpl(dirName, dayNumber, implementationTemplate, year):
    with open(dirName + '/day' + dayNumber + ".cpp", 'w') as day:
        day.write(implementationTemplate.replace("DAY", dayNumber).replace("YEAR", year))

def writeInputFile(dirName, dayNumber):
    with open(dirName + '/inputs/day' + dayNumber + ".txt", 'w') as day:
        day.write("")