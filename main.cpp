//
// Created by Federico Bertossi on 25/09/22.
// [My File]
//

#include <iostream>

class Team {
public:
    std::string name;
    int strength;
    int points;

    void printName() {
        std::cout << name << std::endl;
    }

    void printStrength() {
        std::cout << "Strength: " << strength << std::endl;
    }

    void printPoints() {
        std::cout << "Points: " << points << std::endl;
    }
};

class Match {
public:
    Team team1;
    Team team2;
    int score1;
    int score2;

    int getWinner() {
        if (score1 > score2) {
            return 1;
        } else if (score1 < score2) {
            return 2;
        } else {
            return 0;
        }
    }

    void printScore() {
        if (getWinner() == 0) {
            std::cout << team1.name << " | " << score1 << " - " << score2 << " | " << team2.name << " \tdraw "
                      << std::endl;
            team1.points += 1;
            team2.points += 1;
        } else if (getWinner() == 1) {
            std::cout << team1.name << " | " << score1 << " - " << score2 << " | " << team2.name << " \twinner: "
                      << team1.name << std::endl;
            team1.points += 3;
        } else if (getWinner() == 2) {
            std::cout << team1.name << " | " << score1 << " - " << score2 << " | " << team2.name << " \twinner: "
                      << team2.name << std::endl;
            team2.points += 3;
        }
    }
};


void clear_screen() {
    system("clear");
}

void sleep(int i) {
    clock_t endwait;
    endwait = clock() + i * CLOCKS_PER_SEC;
    while (clock() < endwait) {}
}

void printScoreboard(Team teams[], int n) {
    std::cout << "\nScoreboard:" << std::endl;
    for (int i = 1; i <= n; i++) {
        std::cout << teams[i].name << " | " << teams[i].points << " points" << std::endl;
    }
}

int main() {
    // create 20 teams
    Team *teams = new Team[20];
    Match *matches = new Match[38];

    // name the teams
    for (int i = 1; i <= 20; i++) {
        teams[i].name = "Team " + std::to_string(i);
    }

    // set the strength of the teams
    for (int i = 1; i <= 20; i++) {
        // strength is a random number between 0.5, 1 and 1.5
        teams[i].strength = (rand() % 2) + 1;

    }

    // Match days
    for (int i = 1; i <= 38; i++) {
        std::cout << "\nMatch " << i << std::endl;
        for (int j = 1; j <= 20; j += 2) {
            matches[j].team1 = teams[j];
            matches[j].team2 = teams[j + 1];
            matches[j].score1 = rand() % 5 * matches[j].team1.strength;
            matches[j].score2 = rand() % 5 * matches[j].team2.strength;
            matches[j].printScore();
        }
//        sleep(3);
        clear_screen();
    }

    printScoreboard(teams, 20);

    return 0;
}


