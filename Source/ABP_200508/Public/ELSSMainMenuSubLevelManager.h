#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSMainMenuSubLevel.h"
#include "ESSMainMenuSubLevelSituation.h"
#include "SSMainMenuSubLevelParam.h"
#include "SSMainMenuSubLevelSituationParam.h"
#include "ELSSMainMenuSubLevelManager.generated.h"

class UDataTable;
class ULevelStreaming;

UCLASS(Blueprintable)
class ABP_200508_API AELSSMainMenuSubLevelManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MainMenuSubLevelParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuSubLevelParam> MainMenuSubLevelParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SituationParamTable_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SituationParamTable_Swith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MainMenuSubLevelSituationParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuSubLevelSituationParam> MainMenuSubLevelSituationParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMainMenuSubLevelSituation CurrentSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSMainMenuSubLevel, bool> TmpSubLevelTypesAndVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReservedMenuWrestlersVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LoadRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UnloadRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VisibleRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InvisibleRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SubLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DynamicSubLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelStreaming*> SubLevels;
    
public:
    AELSSMainMenuSubLevelManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestChangeLevel(ESSMainMenuSubLevelSituation inSituation);
    
    UFUNCTION(BlueprintCallable)
    void MakeRequestData(ESSMainMenuSubLevelSituation inSituation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsExecuting() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeSubLevelInfos();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubLevelParam(ESSMainMenuSubLevel InType, FSSMainMenuSubLevelParam& OutParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSituationParam(ESSMainMenuSubLevelSituation inSituation, FSSMainMenuSubLevelSituationParam& OutParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSMainMenuSubLevelSituation GetCurrentSituation() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EmptyAllRequests();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelAllRequests();
    
};

