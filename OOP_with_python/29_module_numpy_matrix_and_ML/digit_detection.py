"""digit detection from scikit learn"""
"""
1. import digit dataset
2. plot
3. split and apply LR
"""
from sklearn.datasets import load_digits
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix
from sklearn.metrics import plot_confusion_matrix

digits=load_digits()
print(digits.data.shape)
# plt.gray()
# for i in range(3):
#     plt.matshow(digits.images[i])
#     plt.show()

print(dir(digits))
# train-test split
X=digits.data
y=digits.target

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.20)
print(X_train.shape, y_train.shape)
print(X_test.shape, y_test.shape)

# apply model and predict
model=LogisticRegression(random_state=42, solver='lbfgs', max_iter=100)
model.fit(X_train, y_train)

print("target of the test sample", digits.target[1700])
result=model.predict([digits.data[1700]])
print("test result", result)

# accuracy
accuracy=model.score(X_test, y_test)
print("model accuracy", accuracy)

predicted_y=model.predict(X_test)
conf_matrix=confusion_matrix(y_test,predicted_y)
# print(conf_matrix)
plot_confusion_matrix(model, X_test, y_test)
plt.show()

