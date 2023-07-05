// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSLotWeaponParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSLotWeaponParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotWeaponParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLotParamBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRarity();
// End Cross Module References

static_assert(std::is_polymorphic<FSSLotWeaponParam>() == std::is_polymorphic<FSSLotParamBase>(), "USTRUCT FSSLotWeaponParam cannot be polymorphic unless super FSSLotParamBase is polymorphic");

class UScriptStruct* FSSLotWeaponParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSLotWeaponParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSLotWeaponParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSLotWeaponParam"), sizeof(FSSLotWeaponParam), Get_Z_Construct_UScriptStruct_FSSLotWeaponParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSLotWeaponParam>()
{
	return FSSLotWeaponParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSLotWeaponParam(FSSLotWeaponParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSLotWeaponParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSLotWeaponParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSLotWeaponParam()
	{
		UScriptStruct::DeferCppStructOps<FSSLotWeaponParam>(FName(TEXT("SSLotWeaponParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSLotWeaponParam;
	struct Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSLotWeaponParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSLotWeaponParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_Rarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLotWeaponParam" },
		{ "ModuleRelativePath", "Public/SSLotWeaponParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLotWeaponParam, Rarity), Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_Rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_WeaponID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLotWeaponParam" },
		{ "ModuleRelativePath", "Public/SSLotWeaponParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_WeaponID = { "WeaponID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLotWeaponParam, WeaponID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_WeaponID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_WeaponID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::NewProp_WeaponID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FSSLotParamBase,
		&NewStructOps,
		"SSLotWeaponParam",
		sizeof(FSSLotWeaponParam),
		alignof(FSSLotWeaponParam),
		Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSLotWeaponParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSLotWeaponParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSLotWeaponParam"), sizeof(FSSLotWeaponParam), Get_Z_Construct_UScriptStruct_FSSLotWeaponParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSLotWeaponParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSLotWeaponParam_Hash() { return 724511421U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
