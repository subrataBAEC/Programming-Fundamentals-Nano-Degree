# conceptual 5-1
# T2 match: cricket score board 

import random
class T2Cup:
    allTeams=[]
    def entry_team(self, teamObj):
        self.allTeams.append(teamObj)

class Team(T2Cup):
    def __init__(self, name) -> None: # team name
        self.teamName=name
        self.playersListOfObjects=[]
        super().entry_team(self)
 
    def entry_player(self, player): # entry player
        self.playersListOfObjects.append(player)
    def __repr__(self) -> str:
        return f"from object Team name: {self.teamName}"

class Player:
    def __init__(self, name, teamObj) -> None:
        self.playerName=name
        # plyer as a batter
        self.strikeRate=0.0
        self.runBat=0
        self.ballUsed=0
        self.sixes=0
        self.fours=0
        # player as a bowler
        self.runBowl=0
        self.wicketTaken=0
        self.ballsBowled=0
        # teamObj.players
        teamObj.playersListOfObjects.append(self) # ex: ban.playerListOfObject.append(tamim)

    def __repr__(self) -> str:
        return f"Name: {self.playerName}"

class Innings:
    def __init__(self, team1, team2, battingTeam, bowlingTeam) -> None:
        self.teamOneObject=team1
        self.teamTwoObject=team2
        self.battingTeam=battingTeam
        self.bowlingTeam=bowlingTeam
        self.totalRun=0
        self.totalWicket=0
        self.totalOver=0
        self.currentBall=0
        self.currentBattingList=[battingTeam.playersListOfObjects[0], battingTeam.playersListOfObjects[1]]
        self.striker=battingTeam.playersListOfObjects[0]
        self.currentBowler=None
        self.currentOverStatus=[]
        self.allOverStatus=[]
    def show_score_board(self):
        # print(f"{self.currentBattingList[0]}")
        print(f"*{self.currentBattingList[0].playerName}-{self.currentBattingList[0].runBat}({self.currentBattingList[0].ballUsed})",end="\t")
        print(f"{self.currentBattingList[1].playerName}-{self.currentBattingList[1].runBat}({self.currentBattingList[1].ballUsed})")

        print(f"{battingTeamobj.teamName[:3].upper()} | {self.totalRun}-{self.totalWicket}")
        print(f"Overs: {self.totalOver}.{self.currentBall}")
        
        # show bowler if not None
        if self.currentBowler is not None:
            print(f"{self.currentBowler.playerName}-{self.currentBowler.runBowl}/{self.currentBowler.wicketTaken}")
        
    # set bowler
    def set_bowler(self, bowlerObj):
        self.currentBowler=bowlerObj
    
    def bowl(self, status): # changes after one ball
        self.totalRun+=status
        self.striker.runBat+=status
        self.striker.ballUsed+=1
        self.currentBowler.runBowl+=status
        self.currentBowler.ballsBowled+=1
        self.currentBall+=1
# main()
# team
ban=Team("Bangladesh")
ind=Team("India")
# player
tamim=Player("Tamim Iqbal", ban)
sakib= Player("sakib", ban)
mustafiz=Player("mustafiz", ban)
kohli= Player("kohli", ind)
dhoni= Player("dhoni", ind)
bumrah= Player("Bumrah", ind)

# print(tamim.playerName)

# for obj in ban.playersListOfObjects:
#     print(obj.playerName) 

print(ban.playersListOfObjects) # using repr function
print(ind.playersListOfObjects) 

cup=T2Cup()
while True:
    print("select two teams")
    # print(cup.allTeams) # print two team objects, print team names using repr func.
    for i in range(len(cup.allTeams)):
        print(f"{i+1}. {cup.allTeams[i].teamName}")
    teamOneIndex, teamTwoIndex= map(int, input("enter two team indexes: ").split(" "))
    # print(cup.allTeams[teamOneIndex])
    teamOneIndex-=1
    teamTwoIndex-=1
    teamOneObj=cup.allTeams[teamOneIndex]
    teamTwoObj=cup.allTeams[teamTwoIndex]
    print(teamOneObj, teamTwoObj)
    tosswin=random.choice([teamOneIndex,teamTwoIndex]) # for toss win or lose
    print(f"{cup.allTeams[tosswin].teamName} wins the toss")
    if tosswin==teamOneIndex:
        tosslose=teamTwoIndex
    else:
        tosslose=teamOneIndex
    rand=random.choice([0,1]) # for batting or bowling
    if rand==0: # tosswin team=bowl, tosslose team=bat
        print(f"{cup.allTeams[tosswin].teamName} choose bowling")
        battingTeamobj=cup.allTeams[tosslose]
        bowlingTeamobj=cup.allTeams[tosswin]

    else: # tosswin team=bat, tosslose team=bowl
        print(f"{cup.allTeams[tosswin].teamName} choose batting")
        battingTeamobj=cup.allTeams[tosswin]
        bowlingTeamobj=cup.allTeams[tosslose]
    # print(f"Batting team: {battingTeamobj}")
    # print(f"bowling team: {bowlingTeamobj}")

    # show score board
    firstInnings=Innings(teamOneObj, teamTwoObj, battingTeamobj,bowlingTeamobj)
    firstInnings.show_score_board()

    # choose bowler
    print("choose bowler: ")
    for i,val in enumerate(bowlingTeamobj.playersListOfObjects):
        print(f"{i+1}. {val.playerName}")
    bowlerIndex=int(input("enter bowler index: "))
    bowlerIndex-=1
    bowlerObj=bowlingTeamobj.playersListOfObjects[bowlerIndex]
    firstInnings.set_bowler(bowlerObj)
    # firstInnings.show_score_board()
    print('\n')
    firstInnings.bowl(6)
    firstInnings.show_score_board()

    
    break