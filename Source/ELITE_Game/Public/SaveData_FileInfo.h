#pragma once
#include "CoreMinimal.h"
#include "SaveData_FileInfo.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FSaveData_FileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FSaveData_FileInfo();
};

