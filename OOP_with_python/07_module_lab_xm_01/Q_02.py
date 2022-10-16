# Module 07
# Q 02 (complete)

# tutorial : https://pythonhowtoprogram.com/how-to-use-weather-api-to-get-weather-data-in-python-3/
"""
Use web search to find some API to get weather data. Use that to get your region's 
weather data every 30 minute.

Write a function named weather_data() and write your code inside this function.

"""

# modules
import requests
import json
import PyWallpaper
import pyowm
import time
from datetime import datetime

# API
api_url = "c00bffc011d2d4835204f3a148436cb6"
owm = pyowm.OWM(api_url).weather_manager()

# function
def weather_data():
    api = owm.weather_at_place('Dhaka')
    data = api.weather

    # time
    now = datetime.now()
    current_time = now.strftime("%H:%M:%S")
    print("Current Time =", current_time)

    # wind, temp, humidity
    print(f"wind: {data.wind()}")
    print(f"temp: {data.temperature('fahrenheit')}")
    print( f"Humidity: { data.humidity} %" )

# main function
while True:
    weather_data()
    time.sleep(1800)  # auto update after 30 mins
    print()
