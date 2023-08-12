#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialExpression.h"
#include "EManaColorSpace.h"
#include "EManaMovieType.h"
#include "MaterialExpressionManaColorSpaceConverter.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class CRIWARERUNTIME_API UMaterialExpressionManaColorSpaceConverter : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Luma;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput ChromaB;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput ChromaR;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Alpha;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Gamma;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bH264;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaMovieType MovieType;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    EManaColorSpace ColorSpace;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGammaExponent;
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstGamma;
    
    UMaterialExpressionManaColorSpaceConverter();
};

