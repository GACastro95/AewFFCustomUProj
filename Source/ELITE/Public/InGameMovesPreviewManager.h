#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InGameMovesPreviewManager.generated.h"

class UInGameMovesPreviewMenu;

UCLASS(Blueprintable)
class ELITE_API AInGameMovesPreviewManager : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInGameMovesPreviewMenu* PreviewMenu;
    
    AInGameMovesPreviewManager();
    UFUNCTION(BlueprintCallable)
    void SortMontageKeyArray(UPARAM(Ref) TArray<FString>& OutKeys);
    
    UFUNCTION(BlueprintCallable)
    void SetUpController();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_Up();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_Right();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_Left();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_FaceButton_Right();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_FaceButton_Bottom();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug_Down();
    
};

