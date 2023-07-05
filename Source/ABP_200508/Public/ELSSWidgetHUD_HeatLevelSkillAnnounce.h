#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELSSWidgetBase.h"
#include "ESSMoveCommand.h"
#include "SSHeatLevelUpInfo.h"
#include "ELSSWidgetHUD_HeatLevelSkillAnnounce.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_HeatLevelSkillAnnounce : public UELSSWidgetBase {
    GENERATED_BODY()
public:
    UELSSWidgetHUD_HeatLevelSkillAnnounce();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWIndowSize(const FVector2D& InWindowSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWIndowOpacity(float InOpacity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeMoveCommandText(ESSMoveCommand inMoveCommand, int32 inMoveId, int32 InArrayNum);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsShow();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsPlayAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetSkillName(int32 InHeatLevelSkillId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyHeatSkillAnnounce(const FSSHeatLevelUpInfo& InHeatLevelUpInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyHeatLevelText(int32 inHeatLevel);
    
};

