#pragma once
#include "CoreMinimal.h"
#include "LobbyCharacterData.generated.h"

class UEOSUserBase;

USTRUCT(BlueprintType)
struct FLobbyCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserBase* UserBase;
    
    ABP_200508_API FLobbyCharacterData();
};

