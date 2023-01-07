"""
project: task manager
----------------------
Name:  subrata saha
email: subratabaec@gmail.com
Date: Jan 7, 2023
"""

"""
Task class will have 6 fields.
task: The name of task (string)
created_time: The date and time when task was created (datetime)
updated_time: The date and time when task was updated (datetime)
completed_time: The date and time when task was completed (datetime)
task_done: Define if the task is completed (boolean)
id: Unique id to define the task (uuid)

Task class will have two methods:
update_task(): It will take the task object and new task name and update the task name and add updated_time.
complete_task(): It will take the task object and mark the task as completed and add completed_time.

"""
from datetime import datetime
import uuid

class Task:    
    total_task_list=[] # Database for all task infos

    def __init__(self,id, task, created_time, updated_time, task_done, completed_time ) -> None:
        self.id=id
        self. task= task
        self.created_time=created_time
        self.updated_time=updated_time
        self.task_done= task_done
        self.completed_time=completed_time

    def task_input(self):
        task_name=input("enter new task: ")
        cr_time=str(datetime.now())
        unique_id=str(uuid.uuid1())

        self.new_task=Task(unique_id, task_name, cr_time, "NA", False, "NA" )
        self.total_task_list.append(vars(self.new_task))
        print("new task adding complete")
    
    def show_all_task(self):

        for index in self.total_task_list:
            print("ID: ",index["id"])
            print("Task name: ",index["task"])
            print("created time: ",index["created_time"])
            print("update time: ",index["updated_time"])
            print("completed_time: ",index["completed_time"])
            print("task_done: ",index["task_done"])    
            print("\n")

    def update_task(self):

        for i in range(len(self.total_task_list)):
            if(self.total_task_list[i]["task_done"]==False):
                print("Task no: ", i+1)
                print("ID: ",self.total_task_list[i]["id"])
                print("Task name: ",self.total_task_list[i]["task"])
                print("created time: ",self.total_task_list[i]["created_time"])
                print("update time: ",self.total_task_list[i]["updated_time"])
                print("completed_time: ",self.total_task_list[i]["completed_time"])
                print("task_done: ",self.total_task_list[i]["task_done"])    
                print("\n")

        # input no. , task name and make dict to replace
        select=int(input("Select task number to update: "))
        task_name=str(input("write update task name: "))

        new_task={'task':task_name}
        time=str(datetime.now())
        new_time={'updated_time': time}

        for i in range(len(self.total_task_list)):
            if(i+1==select):
                self.total_task_list[i].update(new_task)
                self.total_task_list[i].update(new_time)                
                break
        
        
    def complete_task(self):
        
        # only showing the incomplete task to complete
        for i in range(len(self.total_task_list)):
            if(self.total_task_list[i]["task_done"]==False):
                print("Task no: ", i+1)
                print("ID: ",self.total_task_list[i]["id"])
                print("Task name: ",self.total_task_list[i]["task"])
                print("created time: ",self.total_task_list[i]["created_time"])
                print("update time: ",self.total_task_list[i]["updated_time"])
                print("completed_time: ",self.total_task_list[i]["completed_time"])
                print("task_done: ",self.total_task_list[i]["task_done"])    
                print("\n")

        select=int(input("Select task number to complete: "))

        task_status={'task_done':True}
        time=str(datetime.now())
        new_time={'completed_time': time}

        
        for i in range(len(self.total_task_list)):
            if(i+1==select):
                self.total_task_list[i].update(task_status)
                self.total_task_list[i].update(new_time)                
                break
    
    def show_incomplete_task(self):
        flag=0

        for index in self.total_task_list:
            if(index["task_done"]==False):
                print("ID: ",index["id"])
                print("Task name: ",index["task"])
                print("created time: ",index["created_time"])
                print("update time: ",index["updated_time"])
                print("completed_time: ",index["completed_time"])
                print("task_done: ",index["task_done"])    
                print("\n")
                flag=1
        
        if flag==0:
                print("No imcomplete task\n")

    def show_complete_task(self):  

        flag=0
        for index in self.total_task_list:
            if(index["task_done"]==True):
                print("ID: ",index["id"])
                print("Task name: ",index["task"])
                print("created time: ",index["created_time"])
                print("update time: ",index["updated_time"])
                print("completed_time: ",index["completed_time"])
                print("task_done: ",index["task_done"])    
                print("\n")
                flag=1
        if flag==0:
                print("No complete task\n")

    def check_incomplete_task(self):

        flag=0

        for index in self.total_task_list:
            if(index["task_done"]==False):
                flag=1 # at least one incomplete found
        if(flag==1):
            return 1
        else:
            return 0



# main()
task_manager=Task("none","NA","NA",'NA','NA',"NA")

while True:
    print("1. Add new task\n2. Show all task\n3. Show incomplete task\n4. Show completed task\n5. update task\n6. Mark a task completed\n9. exit")
    user_input=int(input("Enter option: "))
    if user_input==1:
        task_manager.task_input()
        print("\n")

    elif user_input==2:
        print("\nshowing all tasks: \n")
        task_manager.show_all_task()
    
    elif user_input==3:
        print("\nshowing incomplete tasks: \n")
        task_manager.show_incomplete_task()
    
    elif user_input==4:
        print("\nshowing complete tasks: \n")
        task_manager.show_complete_task()

    elif user_input==5:
        print("\n")
        print("\nshowing tasks to update: \n")

        res=task_manager.check_incomplete_task()
        if(res==0):
            print("no task left to update\n")
        elif(res==1):
            task_manager.update_task()

    elif user_input==6:
        print("\n")
        print("\nshowing tasks to complete: \n")
        res=task_manager.check_incomplete_task()
        if(res==0):
            print("no task left to complete\n")
        elif(res==1):
            task_manager.complete_task()
    
    elif user_input==9:
        break

### The END