#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SSFgfMatchInfo.h"
#include "ELSSFgfUtility.generated.h"

class AELSSFgfManager;
class AELSSGimmickFgfGoal;
class AELSSItemBox;
class AELSSTeamState;
class AELSSWeaponFgfBall;
class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELSSFgfUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSFgfUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSyncedSSFgfMatchInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSFgfLocalPlayerTeamOffense(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSFgfLocalPlayerTeamDefense(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSFgfBallFree(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSFgfTigerTeamId(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSTeamState* GetSSFgfTeamState(const UObject* WorldContextObject, bool isOffense);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSFgfSecondTeamId(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSSFgfMatchInfo(const UObject* WorldContextObject, FSSFgfMatchInfo& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSFgfManager* GetSSFgfManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AELSSGimmickFgfGoal*> GetSSFgfGoals(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSFgfFirstTeamId(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSFgfDragonTeamId(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSWeaponFgfBall* GetSSFgfBall(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AELSSItemBox*> GetSSDefenseTeamTreasureBoxes(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetNearLocatorPos(const UObject* WorldContextObject, FVector InPos, FVector& outPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CheckSSFgfMatchInfo(const UObject* WorldContextObject, bool& outIamTiger, bool& outIamPlayFirst);
    
};

