#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELBottomHelpManager.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class ABP_200508_API UELBottomHelpManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_BottomHelpWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> m_ParentLayoutWidget;
    
public:
    UELBottomHelpManager();
    UFUNCTION(BlueprintCallable)
    void SetCommonLayoutWidget(UUserWidget* _widget);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetParentLayoutWidget();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetBottomHelpWidget();
    
};

