#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ESSDebugStringCategory.h"
#include "SSDebugStringParam.h"
#include "SSDebugStringStatus.h"
#include "ELSSDebugHUD.generated.h"

class UDataTable;

UCLASS(Blueprintable, NonTransient)
class AELSSDebugHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShowLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateLogState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSDebugStringCategory> EnabledCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DebugStringParamTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDebugStringParam DebugStringParam[27];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSDebugStringStatus DebugStringStatus[27];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugStringBuffer;
    
public:
    AELSSDebugHUD();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDebugText();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDebugText(bool InIsShow, const FText& InDebugText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugString(bool InIsShow, const FString& InDebugString);
    
};

