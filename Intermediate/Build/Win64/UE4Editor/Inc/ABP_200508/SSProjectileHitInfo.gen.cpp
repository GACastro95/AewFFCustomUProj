// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSProjectileHitInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSProjectileHitInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSProjectileHitInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
// End Cross Module References
class UScriptStruct* FSSProjectileHitInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSProjectileHitInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSProjectileHitInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSProjectileHitInfo"), sizeof(FSSProjectileHitInfo), Get_Z_Construct_UScriptStruct_FSSProjectileHitInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSProjectileHitInfo>()
{
	return FSSProjectileHitInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSProjectileHitInfo(FSSProjectileHitInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSProjectileHitInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSProjectileHitInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSProjectileHitInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSProjectileHitInfo>(FName(TEXT("SSProjectileHitInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSProjectileHitInfo;
	struct Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSProjectileHitInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSProjectileHitInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_HitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSProjectileHitInfo" },
		{ "ModuleRelativePath", "Public/SSProjectileHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_HitTime = { "HitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSProjectileHitInfo, HitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_HitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_HitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSProjectileHitInfo" },
		{ "ModuleRelativePath", "Public/SSProjectileHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSProjectileHitInfo, Location), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_ImpactLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSProjectileHitInfo" },
		{ "ModuleRelativePath", "Public/SSProjectileHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_ImpactLocation = { "ImpactLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSProjectileHitInfo, ImpactLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_ImpactLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_ImpactLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_ImpactPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSProjectileHitInfo" },
		{ "ModuleRelativePath", "Public/SSProjectileHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_ImpactPower = { "ImpactPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSProjectileHitInfo, ImpactPower), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_ImpactPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_ImpactPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_HitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_ImpactLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::NewProp_ImpactPower,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSProjectileHitInfo",
		sizeof(FSSProjectileHitInfo),
		alignof(FSSProjectileHitInfo),
		Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSProjectileHitInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSProjectileHitInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSProjectileHitInfo"), sizeof(FSSProjectileHitInfo), Get_Z_Construct_UScriptStruct_FSSProjectileHitInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSProjectileHitInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSProjectileHitInfo_Hash() { return 3150595638U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
