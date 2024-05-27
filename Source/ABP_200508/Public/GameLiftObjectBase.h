#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EEOSTitleStorageEvent.h"
#include "EOSTitleStorageProgress.h"
#include "PingData.h"
#include "GameLiftObjectBase.generated.h"

class UEOSTitleStorageBase;

UCLASS(Blueprintable)
class ABP_200508_API UGameLiftObjectBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSTitleStorageEvent LastTitleStorageEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPingData> msTargetRegionData;
    
    UGameLiftObjectBase();

    UFUNCTION(BlueprintCallable)
    void UpdateTargetRegionLatencyData();
    
    UFUNCTION(BlueprintCallable)
    void StartTargetRegionLatencyData();
    
    UFUNCTION(BlueprintCallable)
    void RequestDownloadSSModeServiceParam(bool inSSModeOnly);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSSModeServiceParam();
    
    UFUNCTION(BlueprintCallable)
    void OnTitleStorageEvent(EEOSTitleStorageEvent inEvent, UEOSTitleStorageBase* inTitleStorageBase, const FEOSTitleStorageProgress& inTitleStorageProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnExitSSMode();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterSSMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsRegionLatencyUpdateEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsRegionInfoEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownloadingSSModeServiceParam() const;
    
};

