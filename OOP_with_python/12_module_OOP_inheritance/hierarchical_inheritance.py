# module 12-8
# hierachical inheritance

# 1. single level inheritance (parent--> child)
# 2. multi level inheritance (grandpa--> parent--> child)
# 3. Multiple inheritance (fayher,mother: child -->(father, mother))
# 4. Hierarchical inheritance (father: father-->me, father--> brother, father-->sister)

class Employee:
    def __init__(self, name, id, salary, position, experience) -> None:
        self.name=name
        self.id=id
        self.salary=salary
        self.position=position

class Developer(Employee):
    def __init__(self, name, id, salary, position, tech, area_of_work):
        self.tech=tech
        self.area_of_work=area_of_work
        super().__init__(name, id, salary, position)

class Testing(Employee):
    pass

class Sales(Employee):
    pass

class TechLead(Employee):
    def __init__(self, name, id, salary, position, team) -> None:
        self.team=team
        super().__init__(name, id, salary, position)