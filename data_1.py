import numpy as np
from scipy.stats import norm
import pandas as pd

def black_scholes_call(S, K, T, r, sigma):
    d1 = (np.log(S / K) + (r + 0.5 * sigma**2) * T) / (sigma * np.sqrt(T))
    d2 = d1 - sigma * np.sqrt(T)
    
    call_price = S * norm.cdf(d1) - K * np.exp(-r * T) * norm.cdf(d2)
    return call_price

def black_scholes_put(S, K, T, r, sigma):
    d1 = (np.log(S / K) + (r + 0.5 * sigma**2) * T) / (sigma * np.sqrt(T))
    d2 = d1 - sigma * np.sqrt(T)
    
    put_price = K * np.exp(-r * T) * norm.cdf(-d2) - S * norm.cdf(-d1)
    return put_price

# Load data from CSV files
# Read data from CSV file and store in a list
strike_data_list = []
with open('strike.csv', 'r') as file:
    for line in file:
        value = float(line.strip())  # Convert each line to a float and remove leading/trailing whitespace
        strike_data_list.append(value)


v1_data_list = []
with open('v1.csv', 'r') as file:
    for line in file:
        value = float(line.strip())  # Convert each line to a float and remove leading/trailing whitespace
        v1_data_list.append(value)

v2_list = []
with open('v2.csv', 'r') as file:
    for line in file:
        value = float(line.strip())  # Convert each line to a float and remove leading/trailing whitespace
        v2_list.append(value)


# Loop through rows and calculate option prices
option_prices = []
for i in range(len(strike_data_list)):
    S = 19223  # Current stock price
    K =   strike_data_list[i]  # Strike price
    T = 4/365  # Time to expiration (in years)
    r = 0.1    # Risk-free rate
    sigma_call = v1_data_list[i]  # Volatility for call option
    sigma_put =   v2_list[i]  # Volatility for put option

    call_price = black_scholes_call(S, K, T, r, sigma_call)
    put_price = black_scholes_put(S, K, T, r, sigma_put)
    
    option_prices.append((call_price, put_price))

import csv

# ... (Previous code for calculating option_prices)

# Write option_prices to a CSV file
csv_filename = 'option_prices.csv'

with open(csv_filename, 'w', newline='') as csvfile:
    csvwriter = csv.writer(csvfile)
    csvwriter.writerow(['Call Price', 'Put Price'])  # Write header row
    csvwriter.writerows(option_prices)  # Write data rows

print(f"Option prices saved to '{csv_filename}'.")
