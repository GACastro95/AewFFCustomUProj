// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHeatLevelParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHeatLevelParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSHeatLevelParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSHeatLevelParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSHeatLevelParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHeatLevelParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHeatLevelParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHeatLevelParam"), sizeof(FSSHeatLevelParam), Get_Z_Construct_UScriptStruct_FSSHeatLevelParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHeatLevelParam>()
{
	return FSSHeatLevelParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHeatLevelParam(FSSHeatLevelParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHeatLevelParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatLevelParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatLevelParam()
	{
		UScriptStruct::DeferCppStructOps<FSSHeatLevelParam>(FName(TEXT("SSHeatLevelParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatLevelParam;
	struct Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KoMaxHpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KoMaxHpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSetEffectSlotNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveSetEffectSlotNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHeatLevelParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHeatLevelParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatLevelParam" },
		{ "ModuleRelativePath", "Public/SSHeatLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatLevelParam, Exp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_MaxHpRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatLevelParam" },
		{ "ModuleRelativePath", "Public/SSHeatLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_MaxHpRate = { "MaxHpRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatLevelParam, MaxHpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_MaxHpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_MaxHpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_KoMaxHpRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatLevelParam" },
		{ "ModuleRelativePath", "Public/SSHeatLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_KoMaxHpRate = { "KoMaxHpRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatLevelParam, KoMaxHpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_KoMaxHpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_KoMaxHpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_AttackRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatLevelParam" },
		{ "ModuleRelativePath", "Public/SSHeatLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_AttackRate = { "AttackRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatLevelParam, AttackRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_AttackRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_AttackRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_MoveSetEffectSlotNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatLevelParam" },
		{ "ModuleRelativePath", "Public/SSHeatLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_MoveSetEffectSlotNum = { "MoveSetEffectSlotNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatLevelParam, MoveSetEffectSlotNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_MoveSetEffectSlotNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_MoveSetEffectSlotNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_MaxHpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_KoMaxHpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_AttackRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::NewProp_MoveSetEffectSlotNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSHeatLevelParam",
		sizeof(FSSHeatLevelParam),
		alignof(FSSHeatLevelParam),
		Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHeatLevelParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHeatLevelParam"), sizeof(FSSHeatLevelParam), Get_Z_Construct_UScriptStruct_FSSHeatLevelParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHeatLevelParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHeatLevelParam_Hash() { return 744688616U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
