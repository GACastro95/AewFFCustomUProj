#pragma once
#include "CoreMinimal.h"
#include "EJIRAIssueType.generated.h"

UENUM(BlueprintType)
enum class EJIRAIssueType : uint8 {
    All,
    Task,
    Bug,
};

