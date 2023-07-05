#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ButtonClick_DelegateDelegate.h"
#include "InGameMovesPreviewMenu.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELITE_API UInGameMovesPreviewMenu : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonClick_Delegate ButtonClick_Dispatcher;
    
    UInGameMovesPreviewMenu();
    UFUNCTION(BlueprintCallable)
    void SetSelectIndex(int32 _SelectIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSequentialExecution();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMenu(const TArray<FString>& _ComboBoxKeys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectIndex();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSequentialExecution();
    
};

