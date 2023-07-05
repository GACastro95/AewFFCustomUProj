#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "EasyGameInstanceSubsystem.generated.h"

class UEasyInstancedHelper;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class ELITE_CORE_API UEasyGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UEasyInstancedHelper*> Helper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> StartupList;
    
public:
    UEasyGameInstanceSubsystem();
    UFUNCTION(BlueprintCallable)
    UEasyInstancedHelper* GetHelperObject(const TSubclassOf<UEasyInstancedHelper> Class);
    
};

