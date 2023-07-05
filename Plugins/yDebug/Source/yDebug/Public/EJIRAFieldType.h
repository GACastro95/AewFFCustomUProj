#pragma once
#include "CoreMinimal.h"
#include "EJIRAFieldType.generated.h"

UENUM(BlueprintType)
enum class EJIRAFieldType : uint8 {
    None,
    AggregateProgress,
    AggregateTimeEstimate,
    AggregatEtimespent,
    Assignee,
    Created,
    Creator,
    Description,
    DueDate,
    Environment,
    FixVersions,
    Issuelinks,
    IssueType,
    LastViewed,
    Priority,
    Progress,
    Project,
    Reporter,
    Resolution,
    Status,
    SubTasks,
    Summary,
    TimeEsimate,
    TimeoriginalEstimate,
    Timespent,
    Updated,
    Versions,
    Votes,
    Watches,
};

