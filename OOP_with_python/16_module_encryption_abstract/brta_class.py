# Module 16-4 (creat BRTA class)

import random

class BRTA:
    def __init__(self) -> None:
        self._license={} # dict

    # give license number of passed
    def take_driving_test(self, email):
        score=random.randint(0, 100)
        if score>=33:
            print("congrats, you have passed, driving score:",score)
            license_number=random.randint(5000, 9999)
            self._license[email]=license_number # add to dict
            return license_number
        else:
            print("sorry, you have failed, driving score:",score)
            return False
    
    # check if license is genuin
    def validate_license(self, email, license):
        for key, value in self._license.items():
            # print(key, value)
            if key==email and value==license:
                return True
        return False 
