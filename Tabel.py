import pandas as pd
import numpy as np
from pandas import ExcelWriter
from pandas import ExcelFile

df = pd.read_excel("DFA.xlsx")

for j in range (3, 66):
	if ((int(df.iloc[j,3]) + 10) >= 20):
		df.iloc[j,5] = df.iloc[j,1]
	else:
		for k in range (3,66):
			if (int(df.iloc[k,3]) == int(df.iloc[j,3] + 10) and int(df.iloc[k,2] == int(df.iloc[j,2]) and int(df.iloc[k,4] == int(df.iloc[j,4])))) :
				df.iloc[j,5] = df.iloc[k,1]

print(df.head())
writer = pd.ExcelWriter('Fauzan.xlsx')
df.to_excel(writer,'Sheet1')
writer.save()