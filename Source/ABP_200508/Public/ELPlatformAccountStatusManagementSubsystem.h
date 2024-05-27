#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CloseLoginUIEventHandlerDelegate.h"
#include "LoginCancelEventHandlerDelegate.h"
#include "LogoutEventHandlerDelegate.h"
#include "SwapLoginEventHandlerDelegate.h"
#include "ELPlatformAccountStatusManagementSubsystem.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELPlatformAccountStatusManagementSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCloseLoginUIEventHandler OnCloseLoginUIEventHandler;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoginCancelEventHandler OnLoginCancelEventHandler;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLogoutEventHandler OnLogoutEventHandler;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwapLoginEventHandler OnSwapLoginEventHandler;
    
    UELPlatformAccountStatusManagementSubsystem();

    UFUNCTION(BlueprintCallable)
    void SwitchProfile();
    
    UFUNCTION(BlueprintCallable)
    void OpenPickerforReConnectPad(const int32 _controllerIndex, const int32 _checkingController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOSSLoggedIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetworkConnection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecuteSwitchProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHostControllerIndex();
    
    UFUNCTION(BlueprintCallable)
    bool FirstLogin(const int32 _controllerIndex);
    
    UFUNCTION(BlueprintCallable)
    void FinishedSwitchProfile();
    
    UFUNCTION(BlueprintCallable)
    void ClosedDialog();
    
};

