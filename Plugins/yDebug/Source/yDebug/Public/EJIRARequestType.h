#pragma once
#include "CoreMinimal.h"
#include "EJIRARequestType.generated.h"

UENUM(BlueprintType)
enum class EJIRARequestType : uint8 {
    Search,
    CreateIssue,
    GetIssue,
    UpdateIssue,
    DeleteIssue,
};

