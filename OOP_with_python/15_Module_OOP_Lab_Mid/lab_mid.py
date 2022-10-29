# lab mid term


class Star_Cinema:
    hall_list=[]# must be list
    def entry_hall(self,new_hall):
        self.hall_list.append(new_hall)


class Hall(Star_Cinema):
    arr=[] # holds all dicts
    seats={} # dictionary of seats information
    show_list=[] # which is an list of tuples
    # show_id=""

    def __init__(self,rows,cols,hall_no) -> None:        
        self.rows=rows
        self.cols=cols
        self.hall_no=hall_no

    # add new hall to hall_list    
    def new_hall(self, hall):
            self.hall_list.append(vars(hall))

    # entry show infos
    def entry_show(self, id, movie_name, time):
        self.show_list.append((id, movie_name, time))# make tuple

        # make empty seats
        self.arr=([[f"empty" for i in range(self.cols)] for j in range(self.rows)])
        # print(f"list of tuples{self.arr}")
        
        # append to dictionary
        self.seats[id]=self.arr

    # display seat pattern
    def display_seat_pattern(self):
        print(f"seats in dict: {self.seats}") # print id and empty seats in dict
        # print(self.seats.keys())
        # print(self.seats.values())

        # display 2d table

    #book seats
    def book_seats(self, name, phone, id, seat_numbers):
        flag=0
        bought_seats=[]
        # match the key in self.seats
        for keys, value in self.seats.items():
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
                    if 0<r<=self.rows and 0<c<=self.cols:
                        if  value[r-1][c-1]=="empty":
                                value[r-1][c-1]="booked"
                                print(f"Seat: ({r},{c}) -->> Booking Successful!")
                                bought_seats.append((r,c))
                        else:
                            print(f"Seat: ({r},{c}) -->>  Already Booked")
                    else:
                        print(f"Seat: ({r},{c}) -->> Invalid Seat Choice")

        if flag==0:
            print("Wrong!! Show ID is Not Valid, Please Try Again\n")

        print(f"{'--'*15} Seat Booking Details {'--'*15}\n")
        print(f"Name:{name}\t\t Phone:{phone} \t\t Movie ID:{id}\n")
        
        for i in self.show_list:
            if i[0]==id:
                print(f"Movie Name:{i[1]}\t\t Movie Time: {i[2]}",)
        
        print("Your Ticket Number(s) Are:",end=" ")
        if len(bought_seats)==0:
            print("No Tickets for You Yet! Try Again")

        else:
            for i in bought_seats:
                print(f"{i}",end=" ")
            print()
        print(hall_1.display_hall_list()) 
        print(f"{'--'*40} \n")

    # view seats in a single show
    def view_available_seats(self,id):

        print(f"{'--'*15} Avaibale seats of show:{id} {'--'*15}\n")

        for keys, value in self.seats.items():
            flag=0
            if keys==id:
                # print(f"found show id: {keys}")
                flag=1
                # print(self.seats[id])
                seat_list=self.seats[id]
                # print(seat_list)
                for i in range(len(seat_list)):
                    for j in range(len(seat_list[i])): 
                        print(f"{(i+1,j+1)}:{seat_list[i][j]}",end="\t\t ")
                    print()

                break
        if flag==0:
            print("Warning!! Wrong show id, Please Try Again")
        return(f"\n{'--'*15} welcome to our show  {'--'*15}\n")

    
    def display_hall_list(self): # display all hall infos
        print("Hall No:", end="")
        # print(self.hall_list[0].keys())
        print
        return (self.hall_list[0]['hall_no'])
        # for hall in self.hall_list:
        #     print(hall['hall_no'])

    def view_show_list(self): # display all show lists(complete)
        print(f"\n{'--'*15}Todays Movies {'--'*15}\n")
        
        for i in range(len(self.show_list)):
            print(f"Show Code: {self.show_list[i][0]}\t\t Movie Name: {self.show_list[i][1]}\t\ttime: {self.show_list[i][2]}\n")
        
        return (f"\n{'--'*10} Welcome to Our Moive Theatre {'--'*15}\n")


#main()
# object creation
# entry hall infos and print
hall_1=Hall(4,3," Premium 23")
hall_1.new_hall(hall_1)
# print(hall_1.display_hall_list())
# hall_1.display_hall_list()

# entry show infos and print
hall_1.entry_show("100", "Avengers", "Nov 12 2022 12:00 PM")
hall_1.entry_show("101", "Din The Day", "Nov 12 2022 2:00PM")

# seat_list=[]

while True:
    print("1. View all shows today\n2. view available seats \n3. book tickets \n4. EXIT")
    user_input = int(input("Enter you choice : "))
    if user_input==1:
        print(hall_1.view_show_list())
        print()

    elif user_input==2:
        a_input = str(int(input("Enter show code to view avaible seats : ")))
        print(hall_1.view_available_seats(a_input))

    elif user_input==3:
        name="subrata saha" # input("Enter Customer Name: ")
        phone="234" # str(input("Enter Customer Phone Number: "))
        id="100" # str(input("Enter Show ID: "))
        amount_tickets= int(input("Number of Tickets: ")) 
        seat_list=[]
        for i in range(amount_tickets):
            seat_row= int(input(f"Enter Row Number (for Ticket {i+1}) : "))
            seat_col= int(input(f"Enter Column Number (for Ticket {i+1}) : "))
            seat_tuple=tuple((seat_row, seat_col))
            seat_list.append(seat_tuple)
        # print(seat_list)
        # print("your ticket number(s):")
        # for i in seat_list:
        #     print(f"seat: {i}")

        hall_1.book_seats(name,phone,id,seat_list)  

        # print(hall_1.view_available_seats(id))



      
    elif user_input==4:
        break