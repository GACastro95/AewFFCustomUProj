// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSGuardReactionParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSGuardReactionParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGuardReactionParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageSE();
// End Cross Module References

static_assert(std::is_polymorphic<FSSGuardReactionParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSGuardReactionParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSGuardReactionParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSGuardReactionParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSGuardReactionParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSGuardReactionParam"), sizeof(FSSGuardReactionParam), Get_Z_Construct_UScriptStruct_FSSGuardReactionParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSGuardReactionParam>()
{
	return FSSGuardReactionParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSGuardReactionParam(FSSGuardReactionParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSGuardReactionParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSGuardReactionParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSGuardReactionParam()
	{
		UScriptStruct::DeferCppStructOps<FSSGuardReactionParam>(FName(TEXT("SSGuardReactionParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSGuardReactionParam;
	struct Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinueGuard_MetaData[];
#endif
		static void NewProp_ContinueGuard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ContinueGuard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageSEOverride_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageSEOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageSEOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSGuardReactionParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSGuardReactionParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGuardReactionParam" },
		{ "ModuleRelativePath", "Public/SSGuardReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGuardReactionParam, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGuardReactionParam" },
		{ "ModuleRelativePath", "Public/SSGuardReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageRate = { "DamageRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGuardReactionParam, DamageRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_ContinueGuard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGuardReactionParam" },
		{ "ModuleRelativePath", "Public/SSGuardReactionParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_ContinueGuard_SetBit(void* Obj)
	{
		((FSSGuardReactionParam*)Obj)->ContinueGuard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_ContinueGuard = { "ContinueGuard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSGuardReactionParam), &Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_ContinueGuard_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_ContinueGuard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_ContinueGuard_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageSEOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageSEOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGuardReactionParam" },
		{ "ModuleRelativePath", "Public/SSGuardReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageSEOverride = { "DamageSEOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGuardReactionParam, DamageSEOverride), Z_Construct_UEnum_ABP_200508_ESSDamageSE, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageSEOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageSEOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_ContinueGuard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageSEOverride_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::NewProp_DamageSEOverride,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSGuardReactionParam",
		sizeof(FSSGuardReactionParam),
		alignof(FSSGuardReactionParam),
		Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSGuardReactionParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSGuardReactionParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSGuardReactionParam"), sizeof(FSSGuardReactionParam), Get_Z_Construct_UScriptStruct_FSSGuardReactionParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSGuardReactionParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSGuardReactionParam_Hash() { return 430175915U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
