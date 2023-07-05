#pragma once
#include "CoreMinimal.h"
#include "EAttireType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELWrestlerProfile.h"
#include "EWrestlerID_N.h"
#include "FELWrestlerProfileUtility.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API UFELWrestlerProfileUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFELWrestlerProfileUtility();
    UFUNCTION(BlueprintCallable)
    static void GetWrestlerSNS(FString& _outName, EWrestlerID_N _WrestlerID, bool Capital);
    
    UFUNCTION(BlueprintCallable)
    static void GetWrestlerShortName(FString& _outName, EWrestlerID_N _WrestlerID, bool Capital);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWrestlerProfile(FELWrestlerProfile& _outProfile, EWrestlerID_N _WrestlerID);
    
    UFUNCTION(BlueprintCallable)
    static void GetWrestlerName(FString& _outName, EWrestlerID_N _WrestlerID, bool IsTwoLine, bool Capital);
    
    UFUNCTION(BlueprintCallable)
    static void GetWrestlerEntranceName(FString& _outName, EWrestlerID_N _WrestlerID, bool Capital);
    
    UFUNCTION(BlueprintCallable)
    static void GetWrestlerCareerName(FString& _outName, EWrestlerID_N _WrestlerID, bool Capital);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetThumbnailPose(const EWrestlerID_N _WrestlerID);
    
    UFUNCTION(BlueprintCallable)
    static EAttireType GetThumbnailAttireType(const EWrestlerID_N _WrestlerID);
    
};

