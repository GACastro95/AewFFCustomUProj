// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHpItemBonusLevelParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHpItemBonusLevelParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHpItemBonusLevel();
// End Cross Module References

static_assert(std::is_polymorphic<FSSHpItemBonusLevelParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSHpItemBonusLevelParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSHpItemBonusLevelParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHpItemBonusLevelParam"), sizeof(FSSHpItemBonusLevelParam), Get_Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHpItemBonusLevelParam>()
{
	return FSSHpItemBonusLevelParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHpItemBonusLevelParam(FSSHpItemBonusLevelParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHpItemBonusLevelParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHpItemBonusLevelParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHpItemBonusLevelParam()
	{
		UScriptStruct::DeferCppStructOps<FSSHpItemBonusLevelParam>(FName(TEXT("SSHpItemBonusLevelParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHpItemBonusLevelParam;
	struct Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoveryRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RecoveryRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHpItemBonusLevelParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHpItemBonusLevelParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_MoveLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_MoveLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHpItemBonusLevelParam" },
		{ "ModuleRelativePath", "Public/SSHpItemBonusLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_MoveLevel = { "MoveLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHpItemBonusLevelParam, MoveLevel), Z_Construct_UEnum_ABP_200508_ESSHpItemBonusLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_MoveLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_MoveLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_RecoveryRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHpItemBonusLevelParam" },
		{ "ModuleRelativePath", "Public/SSHpItemBonusLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_RecoveryRate = { "RecoveryRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHpItemBonusLevelParam, RecoveryRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_RecoveryRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_RecoveryRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_MoveLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_MoveLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::NewProp_RecoveryRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSHpItemBonusLevelParam",
		sizeof(FSSHpItemBonusLevelParam),
		alignof(FSSHpItemBonusLevelParam),
		Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHpItemBonusLevelParam"), sizeof(FSSHpItemBonusLevelParam), Get_Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHpItemBonusLevelParam_Hash() { return 2007441364U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
