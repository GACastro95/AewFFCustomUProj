#include "ELLeaderboardsQueryUserScoreTask.h"

UELLeaderboardsQueryUserScoreTask::UELLeaderboardsQueryUserScoreTask() {
    this->EOSLeaderboards = NULL;
    this->EOSFriend = NULL;
    this->EOSUser = NULL;
    this->QueryScoreScale = 1.00f;
    this->QueryStartIndex = 0;
    this->QueryCount = 0;
    this->QueryCountPerRequest = 64;
}


