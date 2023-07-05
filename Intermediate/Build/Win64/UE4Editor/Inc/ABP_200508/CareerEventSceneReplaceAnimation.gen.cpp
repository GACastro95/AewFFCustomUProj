// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerEventSceneReplaceAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerEventSceneReplaceAnimation() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStageType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerReplaceAnimationWrestler();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerEventSceneReplaceAnimation>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerEventSceneReplaceAnimation cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerEventSceneReplaceAnimation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerEventSceneReplaceAnimation"), sizeof(FCareerEventSceneReplaceAnimation), Get_Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerEventSceneReplaceAnimation>()
{
	return FCareerEventSceneReplaceAnimation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerEventSceneReplaceAnimation(FCareerEventSceneReplaceAnimation::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerEventSceneReplaceAnimation"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventSceneReplaceAnimation
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventSceneReplaceAnimation()
	{
		UScriptStruct::DeferCppStructOps<FCareerEventSceneReplaceAnimation>(FName(TEXT("CareerEventSceneReplaceAnimation")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventSceneReplaceAnimation;
	struct Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StageType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperSmall_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SuperSmall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Small_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Small;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediumSmall_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MediumSmall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Medium_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Medium;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediumLarge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MediumLarge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Large_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Large;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bigman_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Bigman;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerEventSceneReplaceAnimation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_BaseAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_BaseAnim = { "BaseAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, BaseAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_BaseAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_BaseAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_StageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_StageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_StageType = { "StageType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, StageType), Z_Construct_UEnum_ABP_200508_ECareerStageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_StageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_StageType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_WrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_WrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_WrestlerType = { "WrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, WrestlerType), Z_Construct_UEnum_ABP_200508_ECareerReplaceAnimationWrestler, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_WrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_WrestlerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_SuperSmall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_SuperSmall = { "SuperSmall", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, SuperSmall), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_SuperSmall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_SuperSmall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Small_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Small = { "Small", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, Small), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Small_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Small_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_MediumSmall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_MediumSmall = { "MediumSmall", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, MediumSmall), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_MediumSmall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_MediumSmall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Medium_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Medium = { "Medium", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, Medium), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Medium_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Medium_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_MediumLarge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_MediumLarge = { "MediumLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, MediumLarge), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_MediumLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_MediumLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Large_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Large = { "Large", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, Large), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Large_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Large_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Bigman_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventSceneReplaceAnimation" },
		{ "ModuleRelativePath", "Public/CareerEventSceneReplaceAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Bigman = { "Bigman", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventSceneReplaceAnimation, Bigman), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Bigman_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Bigman_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_BaseAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_StageType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_StageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_WrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_SuperSmall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Small,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_MediumSmall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Medium,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_MediumLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Large,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::NewProp_Bigman,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerEventSceneReplaceAnimation",
		sizeof(FCareerEventSceneReplaceAnimation),
		alignof(FCareerEventSceneReplaceAnimation),
		Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerEventSceneReplaceAnimation"), sizeof(FCareerEventSceneReplaceAnimation), Get_Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerEventSceneReplaceAnimation_Hash() { return 3780992696U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
