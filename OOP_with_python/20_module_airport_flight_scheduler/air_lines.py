# 20-8: airlines class
import csv
from aircraft_class import Aircraft

class Airlines:
    def __init__(self) -> None:
        self.air_crafts=None
        self.load_air_crafts_data("./data/aircraft.csv")

    def load_air_crafts_data(self, csv_file):
        air_crafts={}
        with open (csv_file, 'r') as file:
            lines=csv.reader(file)
            next(lines) # ignoring header
            for line in lines:
                air_crafts[line[0]]=Aircraft(line[3], line[0], line[1], line[4])
                print(line)
        file.close()
        self.air_crafts=air_crafts

        # print dict- for checking
        for air in air_crafts:
            print(air)

        def get_aircraft(self, code):
            return self.air_crafts[code]
Airlines()
