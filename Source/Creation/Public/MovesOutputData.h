#pragma once
#include "CoreMinimal.h"
#include "MovesOutputData.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FMovesOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RosterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Property;
    
    FMovesOutputData();
};

