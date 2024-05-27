#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "MenuWidgetSubsystem.generated.h"

class UELBottomHelpManager;
class UELLocalizeFontManager;
class UELMenuNotifyOnlineErrorManager;
class UUserWidget;

UCLASS(Blueprintable)
class ABP_200508_API UMenuWidgetSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELBottomHelpManager* m_BottomHelpManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELLocalizeFontManager* m_LocalizeFontManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELMenuNotifyOnlineErrorManager* m_MenuNotifyOnlineErrorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLayoutWidgetVisible;
    
public:
    UMenuWidgetSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void SetupBottomHelpManager();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetShowCommonLayoutWidget(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowCommonLayoutWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELMenuNotifyOnlineErrorManager* GetMenuNotifyOnlineErrorManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELLocalizeFontManager* GetLocalizeFontManager() const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetCommonLayout(bool& bResult, const TSubclassOf<UUserWidget> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELBottomHelpManager* GetBottomHelpManager() const;
    
};

