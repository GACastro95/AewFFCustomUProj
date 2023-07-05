#pragma once
#include "CoreMinimal.h"
#include "ESaveDataProcResult.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ESaveDataAccessorEvent.h"
#include "OnGameTokenChangedDelegate.h"
#include "OnSavePlayerDataEndedDelegate.h"
#include "GamePlaySubsystem.generated.h"

class USaveData_AccessorBase;

UCLASS(Blueprintable)
class ABP_200508_API UGamePlaySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameTokenChanged OnAewCashValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameTokenChanged OnAewGoldValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSavePlayerDataEnded OnSavePlayerDataEnded;
    
    UGamePlaySubsystem();
private:
    UFUNCTION(BlueprintCallable)
    void OnSavedPlayerData(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnSavedOnlineInfo(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result);
    
};

