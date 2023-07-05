#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "ELSSUIManagerBase.generated.h"

class AELSSPlayer;
class APlayerController;
class UELSSPanelBase;
class UELSSUIManagerHandle;
class UObject;

UCLASS(Blueprintable)
class ABP_200508_API AELSSUIManagerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UELSSUIManagerHandle*> HandleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
public:
    AELSSUIManagerBase();
protected:
    UFUNCTION(BlueprintCallable)
    void Unload(UELSSUIManagerHandle* Handle);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerController(APlayerController* Controller);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLoadingScreen(const bool IsOpen);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenVictoryroyaleNamePlate(AELSSPlayer* inPlayer, int32 InChampionNum, const FString& InRingName, const FString& InGamerTag);
    
    UFUNCTION(BlueprintCallable)
    UELSSUIManagerHandle* LoadAsync(TSoftClassPtr<UELSSPanelBase> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadComplete(UELSSUIManagerHandle* Handle);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
    UFUNCTION(BlueprintCallable)
    static void DumpHandleInfo(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void Dump();
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UELSSPanelBase* CreateImmediate(UObject* WorldContextObject, TSubclassOf<UELSSPanelBase> WidgetClass, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UELSSPanelBase* CreateFromUI(UObject* WorldContextObject, TSoftClassPtr<UELSSPanelBase> basePanel, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UELSSPanelBase* CreateFromHandle(UObject* WorldContextObject, UELSSUIManagerHandle* Handle, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseVictoryroyaleNamePlate();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool Check(UELSSUIManagerHandle* lhs, UELSSUIManagerHandle* rhs);
    
};

