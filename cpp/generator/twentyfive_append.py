import re
from get_content import getContent
from writer import writeImpl, writeInputFile

dirName = '2016'
year = dirName

declarationTemplate = getContent("v2/declare.txt")
implementationTemplate = getContent("v2/source.txt")

for i in range(21, 26):
    writeImpl(dirName, str(i), implementationTemplate, year)
    writeInputFile(dirName, str(i))
    print(declarationTemplate.replace("DAY", str(i)).replace("YEAR", year))
