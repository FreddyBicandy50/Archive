import pandas as pd
import numpy as np

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
print(df.dtypes)
duplicates = df[df.duplicated(subset='Income', keep=False)]
print(duplicates)
income_mode = df['Income'].mode()[0]
df['Income'].fillna(income_mode, inplace=True)
print(df)
