import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Sample DataFrame
data = {
    'ID': [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 3],
    'Age': [25, 30, 35, np.nan, 45, 35, np.nan, 55, 30, 45, 35],
    'Income': [50000, 60000, 75000, 80000, np.nan, 90000, 60000, 75000, np.nan, 65000, 75000],
    'Gender': ['M', 'F', 'F', np.nan, 'F', 'M', np.nan, 'M', 'M', 'F', 'F'],
    'Purchased': ['Yes', 'No', 'Yes', 'Yes', 'No', 'Yes', 'Yes', 'No', 'No', 'Yes', 'Yes']
}

# Create DataFrame
df = pd.DataFrame(data)

# Display data types of each column
print(df.dtypes)

plt.plot(df['age'],df['income'])

income_median=df.median('Income')
print(income_median)
