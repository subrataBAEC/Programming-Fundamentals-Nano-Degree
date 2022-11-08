# module 21-2: travel agent
# module 21-4: Get Aircraft and price for one city one way trip
# module 21-6: fixed route, miulti city 

from all_airports import AllAirports
from air_lines import Airlines
from trip import Trip

class TravelAgent:
    def __init__(self,name) -> None:
        self.name=name
        self.trips=None
        self.all_airports=AllAirports() # this instance loads everything from AllAirports class
        self.air_lines=Airlines() # this instance loads everything from Airline class
    """
    parameters:
    start: starting city code
    end: destination city code
    start_date: date when you want to start the trip

    return:
    aircraft, price

    note: airlines will give aircraft
    airport will give cost information.


    """

    def __repr__(self) -> str:
        return f"TravelAgent: {self.name}"

    # trip plans
    def set_trip_one_city_one_way(self, start, end, start_date):
        price=self.all_airports.get_ticket_price(start, end) # using method from all airports class
        distance=self.all_airports.distance_between_two_airports(start, end)
        aircraft=self.air_lines.get_aircraft_by_distance(distance)
        trip=Trip([start, end],aircraft,price,start_date, [start, end] )
        # return [aircraft, price]
        return trip
    """
    trip_info: [city0, city1, city2]
    """    
    def set_trip_two_city_one_way(self, trip_info,start_date):
        trip1= self.set_trip_one_city_one_way(trip_info[0], trip_info[1], start_date)
        trip2= self.set_trip_one_city_one_way(trip_info[1], trip_info[2], start_date)
        return[trip1, trip2]  
    
    """
    trip_info: [city0, city1, city2, city3, city4, city5]
    """    
    def set_trip_multi_city_one_way_fixed_route(self, trip_info, start_date):
        trips=[]
        for i in range(0, len(trip_info)-1):
            trip=self.set_trip_one_city_one_way(trip_info[i], trip_info[i+1], start_date)
            trip.append(trip)
        return trips

    def set_trip_multi_city_round_trip(self):
        pass
