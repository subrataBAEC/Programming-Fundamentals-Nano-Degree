# module 21-5: main function for python
#              import travel_agent and get aircraft by distance and calculate price


from travel_agent import TravelAgent

def main():
    # print("main func")
    travel_agent= TravelAgent("taksim")
    trip_info1=travel_agent.set_trip_one_city_one_way("DAC","PRA", "08/11/2022")
    print("aircraft name: ", trip_info1.aircraft)
    print("price", trip_info1.price)

    
    

if __name__=="__main__":
    main()