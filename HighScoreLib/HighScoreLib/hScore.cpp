#include "pch.h"
#include "framework.h"
#include "hScore.h"

using namespace std;

namespace hscore {

	void setList(Score scoreList[sizeList]) {
		for (int i = 0; i < sizeList; i++)
		{
			scoreList[i].name = "Emply";
			scoreList[i].score = 0;
		}
	};

	void addUserList(Score scoreList[sizeList], string userName, long int userScore) {

		bool deterbucle = true;
		int bucle = 0;
		long int aux1Score, aux2Score;
		string aux1Name, aux2Name;

		while (deterbucle) {
			if (bucle < sizeList) {
				if (userScore > scoreList[bucle].score) {

					aux1Name = scoreList[bucle].name;
					aux1Score = scoreList[bucle].score;

					scoreList[bucle].name = userName;
					scoreList[bucle].score = userScore;

					deterbucle = false;
				}
				else {
					bucle++;
				}
			}
			else {
				deterbucle = false;
			}
		}

		if (bucle < sizeList) {
			for (int i = (bucle + 1); i < sizeList; i++) {
				aux2Name = scoreList[i].name;
				aux2Score = scoreList[i].score;

				scoreList[i].name = aux1Name;
				scoreList[i].score = aux1Score;

				aux1Name = aux2Name;
				aux1Score = aux2Score;
			}
		}
		else {}
	};

	void deleteUserList(Score scoreList[sizeList], int userPosition) {
		scoreList[userPosition].name = "Emply";
		scoreList[userPosition].score = 0;

		for (int i = (userPosition + 1); i < sizeList; i++)
		{
			scoreList[i - 1].name = scoreList[i].name;
			scoreList[i - 1].score = scoreList[i].score;

			scoreList[i].name = "Emply";
			scoreList[i].score = 0;
		}
	};

	void deleteAllList(Score scoreList[sizeList]) {
		for (int i = 0; i < sizeList; i++)
		{
			scoreList[i].name = "Emply";
			scoreList[i].score = 0;
		}
	};

	long int getUserScoreWPosition(Score scoreList[sizeList], int userPosition) {
		long int auxscore;

		auxscore = scoreList[userPosition].score;

		return auxscore;
	}

	string getUserNameWPosition(Score scoreList[sizeList], int userPosition) {
		string auxname;

		auxname = scoreList[userPosition].name;

		return auxname;
	}

	int getUserPosiotionWName(Score scoreList[sizeList], string userName) {
		int auxUserPosition;

		for (int i = 0; i < sizeList; i++) {
			if (scoreList[i].name == userName) {
				auxUserPosition = i;
			}
		}
		return auxUserPosition;
	}

	long int getUserScoreWName(Score scoreList[sizeList], string userName) {
		long int auxUserScore;

		for (int i = 0; i < sizeList; i++) {
			if (scoreList[i].name == userName) {
				auxUserScore = scoreList[i].score;
			}
		}
		return auxUserScore;
	}
}