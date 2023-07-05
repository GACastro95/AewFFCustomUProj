#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ELBattlePassChallengeListSetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELBattlePassChallengeListSetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCursor;
    
public:
    UELBattlePassChallengeListSetBase();
protected:
    UFUNCTION(BlueprintCallable)
    int32 MovePage(bool IsUp, bool& Moved);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveCursor(bool IsUp, bool& Moved);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetItemListNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetDispItemNum() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMovedCursorType();
    
};

