#pragma once
#include "CoreMinimal.h"
#include "ELSaveGameBase.h"
#include "SaveData_MiniGame.generated.h"

UCLASS(Blueprintable)
class USaveData_MiniGame : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_bAlreadyPlayedMiniGameArray;
    
    USaveData_MiniGame();
};

