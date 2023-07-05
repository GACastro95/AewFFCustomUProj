#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeSectionMapping_BP.h"
#include "SkelMeshMergeUVTransformMapping.h"
#include "Templates/SubclassOf.h"
#include "SkeletalMeshMergeParams.generated.h"

class UAnimInstance;
class USkeletalMesh;
class USkeleton;

USTRUCT(BlueprintType)
struct ELITE_API FSkeletalMeshMergeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeSectionMapping_BP> MeshSectionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> MeshesToMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StripTopLODS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsCpuAccess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkeletonBefore: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> PostProcessAnimBlueprint;
    
    FSkeletalMeshMergeParams();
};

