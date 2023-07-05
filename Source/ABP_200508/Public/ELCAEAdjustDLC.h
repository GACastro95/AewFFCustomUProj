#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELWrestlerProfile_CutScene.h"
#include "UnavailableDlcData.h"
#include "ELCAEAdjustDLC.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API UELCAEAdjustDLC : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AnimationDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ParticleDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> BGModelDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> FingerSignDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ScreenFilterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MusicDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MovieDataTable;
    
    UELCAEAdjustDLC();
    UFUNCTION(BlueprintCallable)
    void Setup();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDeleteDLCMovie(const FELWrestlerProfile_CutScene& BaseCutsceneProfile, const FUnavailableDlcData& UnavailableDlcData) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DeleteDLCItem(FELWrestlerProfile_CutScene& NewCutsceneProfile, const FELWrestlerProfile_CutScene& BaseCutsceneProfile, const FELWrestlerProfile_CutScene& DefaultCutsceneProfile, const FUnavailableDlcData& UnavailableDlcData) const;
    
};

