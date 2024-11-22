import pandas as pd
from sklearn.tree import DecisionTreeClassifier

model=DecisionTreeClassifier()

data=pd.read_csv('games.csv')
x=data.drop(columns='genre')
y=data['genre']


model.fit(x,y)
predictions=model.predict([[5,1],[14,0]])

print(predictions)