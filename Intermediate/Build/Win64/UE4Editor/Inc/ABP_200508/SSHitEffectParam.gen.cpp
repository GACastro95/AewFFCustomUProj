// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHitEffectParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHitEffectParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHitEffectParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSHitEffectParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSHitEffectParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSHitEffectParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHitEffectParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHitEffectParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHitEffectParam"), sizeof(FSSHitEffectParam), Get_Z_Construct_UScriptStruct_FSSHitEffectParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHitEffectParam>()
{
	return FSSHitEffectParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHitEffectParam(FSSHitEffectParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHitEffectParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHitEffectParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHitEffectParam()
	{
		UScriptStruct::DeferCppStructOps<FSSHitEffectParam>(FName(TEXT("SSHitEffectParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHitEffectParam;
	struct Z_Construct_UScriptStruct_FSSHitEffectParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDatabaseRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectDatabaseRowName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHitEffectParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHitEffectParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::NewProp_EffectDatabaseRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHitEffectParam" },
		{ "ModuleRelativePath", "Public/SSHitEffectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::NewProp_EffectDatabaseRowName = { "EffectDatabaseRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHitEffectParam, EffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::NewProp_EffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::NewProp_EffectDatabaseRowName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::NewProp_EffectDatabaseRowName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSHitEffectParam",
		sizeof(FSSHitEffectParam),
		alignof(FSSHitEffectParam),
		Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHitEffectParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHitEffectParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHitEffectParam"), sizeof(FSSHitEffectParam), Get_Z_Construct_UScriptStruct_FSSHitEffectParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHitEffectParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHitEffectParam_Hash() { return 2645915890U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
