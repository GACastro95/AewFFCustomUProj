// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSProjectileLaunchInfoForPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSProjectileLaunchInfoForPickup() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSProjectileLaunchInfo();
// End Cross Module References

static_assert(std::is_polymorphic<FSSProjectileLaunchInfoForPickup>() == std::is_polymorphic<FSSProjectileLaunchInfo>(), "USTRUCT FSSProjectileLaunchInfoForPickup cannot be polymorphic unless super FSSProjectileLaunchInfo is polymorphic");

class UScriptStruct* FSSProjectileLaunchInfoForPickup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSProjectileLaunchInfoForPickup"), sizeof(FSSProjectileLaunchInfoForPickup), Get_Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSProjectileLaunchInfoForPickup>()
{
	return FSSProjectileLaunchInfoForPickup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSProjectileLaunchInfoForPickup(FSSProjectileLaunchInfoForPickup::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSProjectileLaunchInfoForPickup"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSProjectileLaunchInfoForPickup
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSProjectileLaunchInfoForPickup()
	{
		UScriptStruct::DeferCppStructOps<FSSProjectileLaunchInfoForPickup>(FName(TEXT("SSProjectileLaunchInfoForPickup")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSProjectileLaunchInfoForPickup;
	struct Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSProjectileLaunchInfoForPickup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSProjectileLaunchInfoForPickup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::NewProp_GravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSProjectileLaunchInfoForPickup" },
		{ "ModuleRelativePath", "Public/SSProjectileLaunchInfoForPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSProjectileLaunchInfoForPickup, GravityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::NewProp_GravityScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::NewProp_GravityScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FSSProjectileLaunchInfo,
		&NewStructOps,
		"SSProjectileLaunchInfoForPickup",
		sizeof(FSSProjectileLaunchInfoForPickup),
		alignof(FSSProjectileLaunchInfoForPickup),
		Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSProjectileLaunchInfoForPickup"), sizeof(FSSProjectileLaunchInfoForPickup), Get_Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSProjectileLaunchInfoForPickup_Hash() { return 1977751952U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
