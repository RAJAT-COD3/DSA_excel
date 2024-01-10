import numpy as np

# Define the confusion matrix
cm = np.array([[100, 20], [10, 90]])

# Calculate the AUC
auc = np.trapz(cm[1, :], cm[:, 1])

# Print the AUC
print(auc)
