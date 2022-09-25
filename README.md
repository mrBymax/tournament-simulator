# tournament-simulator
A pretty simple tournament simulation (a beginner-friendly project you might want to try)
If you want to contribute, you can fork the repository and make a pull request with your changes, just create a new file with your name and I will upload it.
You can use any language you want.

It's a great way for me to learn new things and improve my skills, so I'd be glad if you could help me out 😄

====================================================================================================

## My Example of a Tournament
### Design Plan

I'm going to simulate a football competition based on the italian "Serie A", with a small difference.
#### I'm going to use the following data:

- 20 teams
- 38 rounds
- 3 points for a win, 1 for a draw, 0 for a loss
- The first 4 teams will qualify for the Champions League, the 5th and 6th for the Europa League, the 7th for the Italian Cup and the last 3 will stay blessed (because it's just the first version of the simulation)
- There will be a "Scudetto-winner playoff" between the first 4 teams of the table that will compete in 2 matches (semi-finals and final) to determine the winner of the Scudetto (the italian championship)

#### Technical details:
- The teams will be represented by a class
- Each team will have a name, a score and a list of matches
- Each match will be represented by a class
- The schedule will be generated randomly
- The matches will be played randomly (the winner will be determined randomly with a coefficient based on the team's strength)
- The results will be saved in a file and the table will be printed in the console
- The table will be sorted by points, then by goal difference and then by goals scored
- The matches will be played in a loop until the end of the season
- Each team can play at most 2 matches per round (home and away)
- The teams will be generated randomly with a random name and a random strength (the strength will be used to determine the winner of a match)
- The teams will be saved in a file and loaded at the beginning of the simulation (the file can be modified externally)
- Every team will have 11 players (the players will be generated randomly with a random name and a random strength), each player will have a position (goalkeeper, defender, midfielder, forward) and a number (from 1 to 11) and it is an attribute of the team object
- Each match will have a list of goalscorers (the goalscorers will be generated randomly with a random name and a random strength)
- The matches will be played simultaneously, each one with a different thread