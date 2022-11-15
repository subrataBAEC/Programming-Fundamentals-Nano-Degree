#3_tier_architecture
# client ---- application server -- DB server

# below is a simplified version

# database layer
class Data:
    def __init__(self) -> None:
        self.data={
            "order1":{"item1":"laptop","price":50000},
            "order2":{"item2":"pc","price":40000},
            "order3":{"item1":"mouse","price":500}
        }
    def get_order_details(self, orderID):
        return self.data[orderID]

# application layer
class Application:
    pass

# client layer
class GUI:
    pass
