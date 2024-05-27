#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ESSLogIconType.h"
#include "SSLogTextParam.h"
#include "ELSSWidgetHUD_SSLogSet.generated.h"

class UELSSWidgetHUD_SSLog;
class UTexture2D;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_SSLogSet : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_SSLog*> LogArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> IconArrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LogMessageShowTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MAXLOGSHOWTIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* LogSetVerticalBox;
    
public:
    UELSSWidgetHUD_SSLogSet();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLogShowState(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLogArrayPos();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetAllLogs();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetLogIcon(ESSLogIconType InIconType);
    
    UFUNCTION(BlueprintCallable)
    void DeleteLogTextMessage();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddMultiColorLogMessage(const TArray<FSSLogTextParam>& inTextParam, ESSLogIconType InIconType);
    
};

