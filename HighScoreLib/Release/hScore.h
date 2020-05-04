#pragma once
#include <string>

using namespace std;

namespace hscore {

	const int sizeList = 50;

	struct Score {
		string name;
		long int score = 0;
	};

	void setList(Score scoreList[sizeList]);

	void addUserList(Score scoreList[sizeList], string userName, long int score);

	void deleteUserList(Score scoreList[sizeList], int UserPosition);

	void deleteAllList(Score scoreList[sizeList]);

	long int getUserScoreWPosition(Score scoreList[sizeList], int userPosition);

	string getUserNameWPosition(Score scoreList[sizeList], int userPosition);

	int getUserPosiotionWName(Score scoreList[sizeList], string userName);

	long int getUserScoreWName(Score scoreList[sizeList], string userName);
}
