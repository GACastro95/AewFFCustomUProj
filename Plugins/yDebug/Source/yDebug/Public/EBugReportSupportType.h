#pragma once
#include "CoreMinimal.h"
#include "EBugReportSupportType.generated.h"

UENUM(BlueprintType)
enum class EBugReportSupportType : uint8 {
    None,
    Mail,
    Mail_JIRA,
    JIRA = 4,
    Max,
};

