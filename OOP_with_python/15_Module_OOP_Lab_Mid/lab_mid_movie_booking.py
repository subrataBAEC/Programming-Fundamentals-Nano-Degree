# lab mid term
# cenema ticker booking system

""""
Note: My  Seat choice is slightly different from you. I have no time to change the thing for now.
Please consider as best as you can on this matter. Thanks.
"""

class Star_Cinema:
    _hall_list=[]# must be list
    def _entry_hall(self,new_hall):
        self._hall_list.append(new_hall)


class Hall(Star_Cinema):
    __arr=[] # holds all dicts
    # seats={} # dictionary of seats information
    # show_list=[] # which is a list of tuples

    def __init__(self,rows,cols,hall_no) -> None:        
        self.__rows=rows
        self.__cols=cols
        self.hall_no=hall_no
        self.__seats={} # dictionary of seats information
        self.__show_list=[] # which is a list of tuples


    # add new hall to hall_list    
    def _entry_hall(self, hall):
            self._hall_list.append(vars(hall))

    # entry show infos
    def entry_show(self, id, movie_name, time):
        self.__show_list.append((id, movie_name, time))# make tuple

        # make empty seats
        self.__arr=([[f"empty" for i in range(self.__cols)] for j in range(self.__rows)])
        # print(f"list of tuples{self.arr}")
        
        # append to dictionary
        self.__seats[id]=self.__arr

    # # display seat pattern
    # def display_seat_pattern(self):
    #     print(f"seats in dict: {self.__seats}") # print id and empty seats in dict
    #     # print(self.seats.keys())
    #     # print(self.seats.values())

    #     # display 2d table

    #book seats
    def book_seats(self, name, phone, id, seat_numbers):
        flag=0
        __bought_seats=[]

        # match the key in self.seats
        for keys, value in self.__seats.items():
            print()
            if keys==id:
                # print(f"found id: {keys}")
                flag=1
                # print(len(seat_numbers))
                for i in seat_numbers:
                    # print(i)
                    r,c=i
                    # print(r)
                    # print(c)
                    if 0<r<=self.__rows and 0<c<=self.__cols:
                        if  value[r-1][c-1]=="empty":
                                value[r-1][c-1]="booked"
                                print(f"Seat: ({r},{c}) -->> Booking Successful!")
                                __bought_seats.append((r,c))
                        else:
                            print(f"Seat: ({r},{c}) -->>  Already Booked")
                    else:
                        print(f"Seat: ({r},{c}) -->> Invalid Seat Choice")

        if flag==0:
            print("Wrong!! Show ID is Not Valid, Please Try Again\n")

        print(f"{'--'*15} Seat Booking Details {'--'*15}\n")
        print(f"Name: {name}\t\t Phone: {phone} \t\t Show ID: {id}\n")
        
        for i in self.__show_list:
            if i[0]==id:
                print(f"Movie Name: {i[1]}\t\t\t\t Movie Time: {i[2]}",)
        
        print("Your Ticket Number(s) Is/Are:",end=" ")
        if len(__bought_seats)==0:
            print("No Tickets for You Yet! Try Again")

        else:
            for i in __bought_seats:
                print(f"{i}",end=" ")
            print()
        print(hall_1.display_hall_list()) 
        print(f"{'--'*40} \n")

    # view seats in a single show
    def view_available_seats(self,id):

        print(f"{'--'*15} Avaibale seats of show ID: {id} {'--'*15}")
        for i in self.__show_list:
            if i[0]==id:
                print(f"Movie Name: {i[1]}\t\t\t\t Movie Time: {i[2]}\n",)
        print(f"{'--'*15} Avaibale seats of show:( {id} ) {'--'*15}")

        for keys, value in self.__seats.items():
            flag=0
            if keys==id:
                # print(f"found show id: {keys}")
                flag=1
                # print(self.seats[id])
                seat_list=self.__seats[id]
                # print(seat_list)
                for i in range(len(seat_list)):
                    for j in range(len(seat_list[i])): 
                        print(f"{(i+1,j+1)}:{seat_list[i][j]}",end="\t\t ")
                    print()

                break
        if flag==0:
            print("Warning!! Wrong show id, Please Try Again")
        return(f"\n{'--'*15} welcome to our show  {'--'*15}\n")
    
    # display halls
    def display_hall_list(self): # display all hall infos
        print("Hall No:", end="")
        # print(self.hall_list[0].keys())
        print
        return (self._hall_list[0]['hall_no'])
        # for hall in self.hall_list:
        #     print(hall['hall_no'])

    # display all shows
    def view_show_list(self): # display all show lists(complete)
        print(f"\n{'--'*15}Todays Movies {'--'*15}\n")
        
        for i in range(len(self.__show_list)):
            print(f"Show Code: {self.__show_list[i][0]}\t\t Movie Name: {self.__show_list[i][1]}\t\tTime: {self.__show_list[i][2]}\n")
        
        return (f"\n{'--'*10} Welcome to Our Moive Theatre {'--'*15}\n")

    # display seats of all shows
    def show_all_seats(self):
        for key, value in self.__seats.items():
            # print(key)
            key=str(key)
            print(self.view_available_seats(key))

#main()
# object creation
# entry hall infos and print

hall_1=Hall(4,3," Premium 23")
hall_1._entry_hall(hall_1)

# print(hall_1.display_hall_list())
# hall_1.display_hall_list()

# entry show infos and print
hall_1.entry_show("100", "Avengers", "Nov 12 2022 12:00 PM")
hall_1.entry_show("101", "Batman", "Nov 12 2022 2:00 PM")

# user GUI
while True:
    print("1. View all Shows Today\n2. View Available Seats\n3. Book Seats\n4. Display Seats of all Shows\n5. EXIT")
    user_input = int(input("Enter you choice : "))
    if user_input==1:
        print(hall_1.view_show_list())
        print()

    elif user_input==2:
        a_input = str(int(input("Enter show code to view avaible seats : ")))
        print(hall_1.view_available_seats(a_input))

    elif user_input==3:
        name=input("Enter Customer Name: ")
        phone=str(input("Enter Customer Phone Number: "))
        id=str(input("Enter Show ID: "))
        amount_tickets= int(input("Number of Tickets: ")) 
        seat_list=[]
        
        for i in range(amount_tickets):
            seat_row= int(input(f"Enter Row Number (for Ticket {i+1}) : ")) # enter an int
            seat_col= int(input(f"Enter Column Number (for Ticket {i+1}) : ")) # enter an int
            seat_tuple=tuple((seat_row, seat_col))
            seat_list.append(seat_tuple)
        # print(seat_list)
        # print("your ticket number(s):")
        # for i in seat_list:
        #     print(f"seat: {i}")

        hall_1.book_seats(name,phone,id,seat_list)  

        # print(hall_1.view_available_seats(id))      
    elif user_input==4:        
        hall_1.show_all_seats()
 
    elif user_input==5:
        break

    # The END