import pandas as pd
import numpy as np
from sklearn.datasets import load_iris
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import classification_report
from sklearn.model_selection import train_test_split

"""
  *loadin the dataset
  *creating a datafram from iris data and iris feature names
  *split dataset into input and output x,y
"""
iris= load_iris()
df = pd.DataFrame(iris['data'], columns=iris['feature_names'])
df['target']=[iris['target_names'][i] for i in iris['target']]
x = df.drop('target',axis=1)
y= iris['target']


"""
  *create the model using DecisionTreeClassifier
  *train the model using fit
"""
print("------------Model Maker--------------")
model = DecisionTreeClassifier()
model.fit(x,y)
object_data={
      'setosa':np.array(df.iloc[:2].drop('target',axis=1)),
      'versicolor':np.array(df.iloc[50:52].drop('target',axis=1)),
      'virginica':np.array(df.iloc[140:142].drop('target',axis=1)),
}
print(object_data['setosa'][0])
print(object_data['versicolor'][0])
print(object_data['virginica'][0])


"""
  *predict output using dataset
"""
print("------------Model Predictions--------------")
predict= model.predict([object_data['setosa'][0]])
output =  iris['target_names'][predict]
print(output)

print("------------Split train/test--------------")
"""
  statify = y will go and check how many possible items can i output and will divide the train equaly ento them
  test size is 20 / 200
  random state is to make sure when you run code again it will behave in the same way as the first in each time so its not complete random
"""
"""
  -X_train: This variable holds the features (independent variables) that your model will learn from during the training process. In your code, X_train contains 80% of the iris dataset's features (sepal length, sepal width, petal length, petal width).
  -Y_train: This variable contains the corresponding target values (dependent variable) for the training data. Y_train holds the known iris species (setosa, versicolor, virginica) for the samples in X_train. It's what the model aims to predict based on the features in X_train.
  -X_test: This variable stores the features of the remaining 20% of the data, which your model has not seen during training. X_test is used to evaluate how well your model generalizes to new data.
  -Y_test: This variable contains the correct target values for the samples in X_test. After your model makes predictions on X_test, its performance is measured by comparing those predictions to the true values in Y_test.
  X_train,X_test,Y_train,Y_test = train_test_split(x,y,test_size=0.2, stratify = y, random_state=5)
"""
X_train,X_test,Y_train,Y_test = train_test_split(x,y,test_size=0.2, stratify = y, random_state=5)
predictions = model.predict(X_test)
output =  iris['target_names'][predictions]

print(output)
predictions = model.predict(X_test)
print(classification_report(Y_test,predictions))
