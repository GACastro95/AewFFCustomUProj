#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MenuEnd_DelegateDelegate.h"
#include "TitleMenu_Param.h"
#include "TitleMenu_QuickSettings_ImGui.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API ATitleMenu_QuickSettings_ImGui : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTitleMenu_Param> m_stMenuParams;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMenuEnd_Delegate MenuEnd_Dispatcher;
    
    ATitleMenu_QuickSettings_ImGui(const FObjectInitializer& ObjectInitializer);

};

