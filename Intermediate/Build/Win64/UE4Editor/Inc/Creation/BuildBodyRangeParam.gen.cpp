// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/BuildBodyRangeParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildBodyRangeParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBuildBodyRangeParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBoneTransRange();
// End Cross Module References

static_assert(std::is_polymorphic<FBuildBodyRangeParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBuildBodyRangeParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBuildBodyRangeParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FBuildBodyRangeParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildBodyRangeParam, Z_Construct_UPackage__Script_Creation(), TEXT("BuildBodyRangeParam"), sizeof(FBuildBodyRangeParam), Get_Z_Construct_UScriptStruct_FBuildBodyRangeParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FBuildBodyRangeParam>()
{
	return FBuildBodyRangeParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildBodyRangeParam(FBuildBodyRangeParam::StaticStruct, TEXT("/Script/Creation"), TEXT("BuildBodyRangeParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFBuildBodyRangeParam
{
	FScriptStruct_Creation_StaticRegisterNativesFBuildBodyRangeParam()
	{
		UScriptStruct::DeferCppStructOps<FBuildBodyRangeParam>(FName(TEXT("BuildBodyRangeParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFBuildBodyRangeParam;
	struct Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hips_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spine1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spine2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Chest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Neck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Neck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Leg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BuildBodyRangeParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildBodyRangeParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Hips_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyRangeParam" },
		{ "ModuleRelativePath", "Public/BuildBodyRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Hips = { "Hips", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyRangeParam, Hips), Z_Construct_UScriptStruct_FBoneTransRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Hips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Hips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Spine1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyRangeParam" },
		{ "ModuleRelativePath", "Public/BuildBodyRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Spine1 = { "Spine1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyRangeParam, Spine1), Z_Construct_UScriptStruct_FBoneTransRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Spine1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Spine1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Spine2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyRangeParam" },
		{ "ModuleRelativePath", "Public/BuildBodyRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Spine2 = { "Spine2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyRangeParam, Spine2), Z_Construct_UScriptStruct_FBoneTransRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Spine2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Spine2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Chest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyRangeParam" },
		{ "ModuleRelativePath", "Public/BuildBodyRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Chest = { "Chest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyRangeParam, Chest), Z_Construct_UScriptStruct_FBoneTransRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Chest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Neck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyRangeParam" },
		{ "ModuleRelativePath", "Public/BuildBodyRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Neck = { "Neck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyRangeParam, Neck), Z_Construct_UScriptStruct_FBoneTransRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Neck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Neck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Shoulder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyRangeParam" },
		{ "ModuleRelativePath", "Public/BuildBodyRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Shoulder = { "Shoulder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyRangeParam, Shoulder), Z_Construct_UScriptStruct_FBoneTransRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Shoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Shoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Leg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyRangeParam" },
		{ "ModuleRelativePath", "Public/BuildBodyRangeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Leg = { "Leg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyRangeParam, Leg), Z_Construct_UScriptStruct_FBoneTransRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Leg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Leg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Hips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Spine1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Spine2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Chest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Neck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Shoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::NewProp_Leg,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BuildBodyRangeParam",
		sizeof(FBuildBodyRangeParam),
		alignof(FBuildBodyRangeParam),
		Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildBodyRangeParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildBodyRangeParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildBodyRangeParam"), sizeof(FBuildBodyRangeParam), Get_Z_Construct_UScriptStruct_FBuildBodyRangeParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuildBodyRangeParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildBodyRangeParam_Hash() { return 3490609562U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
