// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAIPlayerParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAIPlayerParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAIPlayerParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAIPlayerParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAIPlayerParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAIPlayerParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAIPlayerParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAIPlayerParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAIPlayerParam"), sizeof(FSSAIPlayerParam), Get_Z_Construct_UScriptStruct_FSSAIPlayerParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAIPlayerParam>()
{
	return FSSAIPlayerParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAIPlayerParam(FSSAIPlayerParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAIPlayerParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAIPlayerParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAIPlayerParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAIPlayerParam>(FName(TEXT("SSAIPlayerParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAIPlayerParam;
	struct Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconSymbolId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IconSymbolId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconBgId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IconBgId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconColorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IconColorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconColorListId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IconColorListId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Badge1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Badge1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Badge2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Badge2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Badge3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Badge3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatSkillSettingsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillSettingsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAIPlayerParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAIPlayerParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconSymbolId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconSymbolId = { "IconSymbolId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerParam, IconSymbolId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconSymbolId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconSymbolId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconBgId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconBgId = { "IconBgId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerParam, IconBgId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconBgId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconBgId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconColorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconColorId = { "IconColorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerParam, IconColorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconColorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconColorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconColorListId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconColorListId = { "IconColorListId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerParam, IconColorListId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconColorListId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconColorListId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge1 = { "Badge1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerParam, Badge1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge2 = { "Badge2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerParam, Badge2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge3 = { "Badge3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerParam, Badge3), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_HeatSkillSettingsId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAIPlayerParam" },
		{ "ModuleRelativePath", "Public/SSAIPlayerParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_HeatSkillSettingsId = { "HeatSkillSettingsId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAIPlayerParam, HeatSkillSettingsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_HeatSkillSettingsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_HeatSkillSettingsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconSymbolId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconBgId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconColorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_IconColorListId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_Badge3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::NewProp_HeatSkillSettingsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAIPlayerParam",
		sizeof(FSSAIPlayerParam),
		alignof(FSSAIPlayerParam),
		Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAIPlayerParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAIPlayerParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAIPlayerParam"), sizeof(FSSAIPlayerParam), Get_Z_Construct_UScriptStruct_FSSAIPlayerParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAIPlayerParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAIPlayerParam_Hash() { return 2067409977U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
