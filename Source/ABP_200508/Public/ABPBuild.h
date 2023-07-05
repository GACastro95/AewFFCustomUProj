#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ABPBuild.generated.h"

class UABPBuild;

UCLASS(Blueprintable)
class ABP_200508_API UABPBuild : public UObject {
    GENERATED_BODY()
public:
    UABPBuild();
    UFUNCTION(BlueprintCallable)
    FString GetVersion(bool _bGetSubminorVersion);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSubMinorVersion();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMinorVersion();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMajorVersion();
    
    UFUNCTION(BlueprintCallable)
    FString GetBuildTime();
    
    UFUNCTION(BlueprintCallable)
    FString GetBuildDate_Numeric();
    
    UFUNCTION(BlueprintCallable)
    FString GetBuildDate();
    
    UFUNCTION(BlueprintCallable)
    static bool CreateABPBuild(UABPBuild*& _pcInst);
    
};

