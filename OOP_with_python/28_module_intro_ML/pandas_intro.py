"""
intro to pandas, matplotlib
data cleaning
"""

import pandas
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

data=pandas.read_csv("iphone_model_price.csv")
print(data)

# plot
# plt.scatter(data['version'], data['price'])
# plt.show()


# prediction using LR
model=LinearRegression()
model.fit(data[['veriosn']], data[['price']])
predicted_price=model.predict([[22]])
print(predicted_price)

