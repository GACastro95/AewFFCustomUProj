#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MAPreviewMenuMailCloseDelegateDelegate.h"
#include "MAPreviewMenuMailSaveDelegateDelegate.h"
#include "MAPreviewMenuMailSaveParam.h"
#include "MAPreviewMenuMail.generated.h"

UCLASS(Blueprintable)
class ELITE_API AMAPreviewMenuMail : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowMailSettingsWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMAPreviewMenuMailSaveParam MailParam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMAPreviewMenuMailSaveDelegate SaveDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMAPreviewMenuMailCloseDelegate SetShowMailDelegate;
    
    AMAPreviewMenuMail(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LoadSettings();
    
    UFUNCTION(BlueprintCallable)
    void DrawMailSettingsWindow();
    
};

