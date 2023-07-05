#pragma once
#include "CoreMinimal.h"
#include "CostumeParam.h"
#include "RosterPresetRaw.generated.h"

USTRUCT(BlueprintType)
struct FRosterPresetRaw {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeParam CostumeParam;
    
    CREATION_API FRosterPresetRaw();
};

