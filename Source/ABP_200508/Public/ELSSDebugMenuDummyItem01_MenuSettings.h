#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChangeValue_DebugDispatcherDelegate.h"
#include "DummyItem01Value_Param.h"
#include "ELSSDebugMenuDummyItem01_MenuSettings.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSDebugMenuDummyItem01_MenuSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDummyItem01Value_Param> m_MenuCategory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeValue_DebugDispatcher ChangeValue_DebugDispatcher;
    
    UELSSDebugMenuDummyItem01_MenuSettings();

};

