#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChangeCashNum_DebugDelegateDelegate.h"
#include "LoadMoney_DebugDelegateDelegate.h"
#include "SaveMoney_DebugDelegateDelegate.h"
#include "GameMoney_MenuSettings.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UGameMoney_MenuSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeCashNum_DebugDelegate ChangeCashNum_DebugDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveMoney_DebugDelegate SaveMoney_DebugDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadMoney_DebugDelegate LoadMoney_DebugDelegate;
    
    UGameMoney_MenuSettings();

};

