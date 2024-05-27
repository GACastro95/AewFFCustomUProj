#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ELSaveDataHeader.h"
#include "ELSaveGameBase.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API UELSaveGameBase : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSaveDataHeader m_stHeader;
    
public:
    UELSaveGameBase();

};

