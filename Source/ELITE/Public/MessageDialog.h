#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MessageDialog.generated.h"

class UMessageDialog;

UCLASS(Blueprintable)
class ELITE_API UMessageDialog : public UObject {
    GENERATED_BODY()
public:
    UMessageDialog();
    UFUNCTION(BlueprintCallable)
    static bool CreateMessageDialog(UMessageDialog*& _pcInst);
    
    UFUNCTION(BlueprintCallable)
    bool CallDialogYesNo(const FString& Name);
    
};

