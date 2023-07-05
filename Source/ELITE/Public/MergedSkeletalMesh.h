#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SkeletalMeshMergeParams.h"
#include "MergedSkeletalMesh.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class ELITE_API UMergedSkeletalMesh : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMergedSkeletalMesh();
private:
    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeMeshes(const FSkeletalMeshMergeParams& Params);
    
};

