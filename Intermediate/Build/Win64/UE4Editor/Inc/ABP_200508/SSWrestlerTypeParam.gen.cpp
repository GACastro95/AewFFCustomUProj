// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWrestlerTypeParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWrestlerTypeParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
// End Cross Module References

static_assert(std::is_polymorphic<FSSWrestlerTypeParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSWrestlerTypeParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSWrestlerTypeParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWrestlerTypeParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWrestlerTypeParam"), sizeof(FSSWrestlerTypeParam), Get_Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWrestlerTypeParam>()
{
	return FSSWrestlerTypeParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWrestlerTypeParam(FSSWrestlerTypeParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWrestlerTypeParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerTypeParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerTypeParam()
	{
		UScriptStruct::DeferCppStructOps<FSSWrestlerTypeParam>(FName(TEXT("SSWrestlerTypeParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerTypeParam;
	struct Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHpBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHpBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KoMaxHpBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KoMaxHpBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpeedRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerFinisherId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditWrestlerFinisherId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VictoryCutsceneId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VictoryCutsceneId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWrestlerTypeParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_WrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_WrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerTypeParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_WrestlerType = { "WrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerTypeParam, WrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_WrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_WrestlerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_MaxHpBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerTypeParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_MaxHpBase = { "MaxHpBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerTypeParam, MaxHpBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_MaxHpBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_MaxHpBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_KoMaxHpBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerTypeParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_KoMaxHpBase = { "KoMaxHpBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerTypeParam, KoMaxHpBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_KoMaxHpBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_KoMaxHpBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_AttackBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerTypeParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_AttackBase = { "AttackBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerTypeParam, AttackBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_AttackBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_AttackBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_SpeedRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerTypeParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_SpeedRate = { "SpeedRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerTypeParam, SpeedRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_SpeedRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_SpeedRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_EditWrestlerFinisherId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerTypeParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_EditWrestlerFinisherId = { "EditWrestlerFinisherId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerTypeParam, EditWrestlerFinisherId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_EditWrestlerFinisherId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_EditWrestlerFinisherId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_VictoryCutsceneId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerTypeParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerTypeParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_VictoryCutsceneId = { "VictoryCutsceneId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerTypeParam, VictoryCutsceneId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_VictoryCutsceneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_VictoryCutsceneId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_WrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_MaxHpBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_KoMaxHpBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_AttackBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_SpeedRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_EditWrestlerFinisherId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::NewProp_VictoryCutsceneId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSWrestlerTypeParam",
		sizeof(FSSWrestlerTypeParam),
		alignof(FSSWrestlerTypeParam),
		Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerTypeParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWrestlerTypeParam"), sizeof(FSSWrestlerTypeParam), Get_Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerTypeParam_Hash() { return 3904406971U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
