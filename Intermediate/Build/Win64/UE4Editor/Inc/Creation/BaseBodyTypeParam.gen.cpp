// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/BaseBodyTypeParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBodyTypeParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBaseBodyTypeParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGenderConditions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputRange();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBuildBodyRangeParam();
// End Cross Module References

static_assert(std::is_polymorphic<FBaseBodyTypeParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBaseBodyTypeParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBaseBodyTypeParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FBaseBodyTypeParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseBodyTypeParam, Z_Construct_UPackage__Script_Creation(), TEXT("BaseBodyTypeParam"), sizeof(FBaseBodyTypeParam), Get_Z_Construct_UScriptStruct_FBaseBodyTypeParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FBaseBodyTypeParam>()
{
	return FBaseBodyTypeParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseBodyTypeParam(FBaseBodyTypeParam::StaticStruct, TEXT("/Script/Creation"), TEXT("BaseBodyTypeParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFBaseBodyTypeParam
{
	FScriptStruct_Creation_StaticRegisterNativesFBaseBodyTypeParam()
	{
		UScriptStruct::DeferCppStructOps<FBaseBodyTypeParam>(FName(TEXT("BaseBodyTypeParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFBaseBodyTypeParam;
	struct Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyTypeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyTypeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnail;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenderCondition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenderCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GenderCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightRangeSI_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightRangeSI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyBalanceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyBalanceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyBalance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BodyBalance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightRangeSI_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightRangeSI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOfSlim_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOfSlim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlimMorphRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlimMorphRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOfHeavy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOfHeavy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeavyMorphRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeavyMorphRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOfMuscular_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOfMuscular;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuscularMorphRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuscularMorphRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MorphCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseBodyTypeParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyTypeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyTypeID = { "BodyTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, BodyTypeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyTypeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyTypeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_UnlockID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_UnlockID = { "UnlockID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, UnlockID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_UnlockID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_UnlockID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_Thumbnail_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_GenderCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_GenderCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_GenderCondition = { "GenderCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, GenderCondition), Z_Construct_UEnum_ELITE_Core_EGenderConditions, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_GenderCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_GenderCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeightRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeightRange = { "HeightRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, HeightRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeightRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeightRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeightRangeSI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeightRangeSI = { "HeightRangeSI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, HeightRangeSI), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeightRangeSI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeightRangeSI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyBalanceRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyBalanceRange = { "BodyBalanceRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, BodyBalanceRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyBalanceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyBalanceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyBalance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyBalance = { "BodyBalance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, BodyBalance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyBalance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyBalance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_WeightRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_WeightRange = { "WeightRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, WeightRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_WeightRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_WeightRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_WeightRangeSI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_WeightRangeSI = { "WeightRangeSI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, WeightRangeSI), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_WeightRangeSI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_WeightRangeSI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfSlim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfSlim = { "StartOfSlim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, StartOfSlim), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfSlim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfSlim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_SlimMorphRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_SlimMorphRange = { "SlimMorphRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, SlimMorphRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_SlimMorphRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_SlimMorphRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfHeavy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfHeavy = { "StartOfHeavy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, StartOfHeavy), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfHeavy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfHeavy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeavyMorphRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeavyMorphRange = { "HeavyMorphRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, HeavyMorphRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeavyMorphRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeavyMorphRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfMuscular_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfMuscular = { "StartOfMuscular", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, StartOfMuscular), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfMuscular_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfMuscular_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_MuscularMorphRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_MuscularMorphRange = { "MuscularMorphRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, MuscularMorphRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_MuscularMorphRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_MuscularMorphRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_MorphCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BaseBodyTypeParam" },
		{ "ModuleRelativePath", "Public/BaseBodyTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_MorphCollision = { "MorphCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseBodyTypeParam, MorphCollision), Z_Construct_UScriptStruct_FBuildBodyRangeParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_MorphCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_MorphCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyTypeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_UnlockID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_GenderCondition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_GenderCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeightRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeightRangeSI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyBalanceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_BodyBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_WeightRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_WeightRangeSI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfSlim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_SlimMorphRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfHeavy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_HeavyMorphRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_StartOfMuscular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_MuscularMorphRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_PhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::NewProp_MorphCollision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BaseBodyTypeParam",
		sizeof(FBaseBodyTypeParam),
		alignof(FBaseBodyTypeParam),
		Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseBodyTypeParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseBodyTypeParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseBodyTypeParam"), sizeof(FBaseBodyTypeParam), Get_Z_Construct_UScriptStruct_FBaseBodyTypeParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseBodyTypeParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseBodyTypeParam_Hash() { return 4076582308U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
