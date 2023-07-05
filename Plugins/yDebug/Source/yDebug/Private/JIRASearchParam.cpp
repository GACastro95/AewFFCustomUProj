#include "JIRASearchParam.h"

FJIRASearchParam::FJIRASearchParam() {
    this->StartAt = 0;
    this->MaxResults = 0;
    this->UseDefault = false;
    this->IssueType = EJIRAIssueType::All;
    this->UseOverrideProject = false;
}

