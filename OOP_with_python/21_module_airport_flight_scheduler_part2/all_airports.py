# module 20.3, 20-4
# 20.3: read all airports csv
# 20-4: creat airports from the loaded csv data
# 20-5: add convertion rate(combine 3 CSV files)
#      airtport --> country ( airport[3] ) 
#      country --> currency ( country name=countrycurrency[0], currency code=countrycurrency[1])
#      currency--> rate ( curency code=currencyrates[1], rate= currencyrates[2])
# 20-6: distance between two GPS locations
#       formula linc: https://stackoverflow.com/questions/19412462/getting-distance-between-two-points-based-on-latitude-longitude
# 20-7: calculate fare between two airports using distance
import csv
from airport_class import Airport
import math

# with open('./data/airport.csv','r', encoding='utf-8') as file:
#     lines=csv.reader(file)
#     for line in lines:
#         print(line)

class AllAirports:
    def __init__(self) -> None:
        self.load_airport_data('./data/airport.csv')
    
    def load_airport_data(self, file_path):    
        airports= {}
        currency_rates= {} # for key=currency code and val=rate
        country_currency={} # for key=country and val=currency code

        # get currency name --> rate
        with open("./data/currencyrates.csv", 'r') as file:
            lines=csv.reader(file)
            for line in lines:
                currency_rates[line[1]]=line[2] # key=curr. code, val=rate
        file.close()

        # country and currency code
        with open("./data/countrycurrency.csv", 'r') as file:
            lines=csv.reader(file)
            for line in lines:
                country_currency[line[0]]=line[1] # key= country name, val=curr. code
        file.close()

        # creat airports
        with open(file_path, 'r', encoding='utf8') as file:
            lines=csv.reader(file)

            try:
                for line in lines:
                    # print(lines) # print all rows of airports
                    # print(line[4]) # print only codes of airports
                    
                    # combine currency_rates and counry_currency
                    # country-->> currency-- code -->> curr code-- rate
                    country=line[3]
                    currency=country_currency[country]
                    rate=currency_rates[currency] 

                    # make our own airports with code as dict. key
                    airports[line[4]]=Airport(line[4], line[1], line[2], line[3], line[6],line[7],rate)
            except KeyError as e:
                print(e)
            
            self.airports=airports
            
            # read dict. data- for checking            
            for airport in airports.items():
                print(airport)
    # diff between two gps locations
    def get_distance_between_two_locations(self, lat1, lon1, lat2, lon2):
        radius= 5371
        lat_diff=math.radians(lat1-lat2)
        lon_diff=math.radians(lon1-lon2)
        
        a = (math.sin(lat_diff / 2) * math.sin(lat_diff / 2) +
         math.cos(math.radians(lat1)) * math.cos(math.radians(lat2)) *
         math.sin(lon_diff / 2) * math.sin(lon_diff / 2))
        c = 2 * math.atan2(math.sqrt(a), math.sqrt(1 - a))
        distance = radius * c
        return distance
    
    def distance_between_two_airports(self, airport1_code, airport2_code):
        airport1=self.airports[airport1_code]
        airport2=self.airports[airport2_code]
        distance=self.get_distance_between_two_locations(airport1.lat, airport1.lon, airport2.lat, airport2.lon )
        return distance

    def get_ticket_price(self, start, end):
        distance=self.distance_between_two_airports(start, end)
        airport1= self.airports[start]
        fare=distance*airport1.rate
        return fare


world_tour=AllAirports()
fare=world_tour.get_ticket_price("DAC","PRA")
print("ticket fare", fare)