#pragma once
#include "CoreMinimal.h"
#include "MovesTestMenuStructDefine.h"
#include "GameFramework/Actor.h"
#include "AutoAnimInfo.h"
#include "EAutoAnimMode.h"
#include "SettingMenuIDs.h"
#include "YCAM_AutoAnimPreview.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AYCAM_AutoAnimPreview : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoAnimMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAutoAnimMode> ModeQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovesTestMenuStructDefine> MenuDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSettingMenuIDs> MenuChildMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPlayAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CategoryItemIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutoAnimInfo> AutoAnimInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDuplicateCategory;
    
public:
    AYCAM_AutoAnimPreview(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Uninit();
    
    UFUNCTION(BlueprintCallable)
    void StrikeDistanceTestStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopPreview();
    
    UFUNCTION(BlueprintCallable)
    void PreviewStartToArray(TArray<int32> In_SettingMenuIDs, EAutoAnimMode In_Mode);
    
    UFUNCTION(BlueprintCallable)
    void PreviewStartAll();
    
    UFUNCTION(BlueprintCallable)
    void PreviewStart(int32 In_SettingMenuID, EAutoAnimMode In_Mode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimations();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteDequeMode();
    
    UFUNCTION(BlueprintCallable)
    void DivingDistanceTestStart();
    
    UFUNCTION(BlueprintCallable)
    void DistanceTestStart();
    
    UFUNCTION(BlueprintCallable)
    void AllTestStart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddPlaySituationFromCategoryItemID(const TArray<int32>& In_CategoryItemIDs);
    
    UFUNCTION(BlueprintCallable)
    void AddCategoryItemIDFromSettingMenuID(int32 In_SettingMenuID, TArray<int32>& Out_CategoryItemIDs);
    
};

