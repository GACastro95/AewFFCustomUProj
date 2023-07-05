// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSProjectileLaunchInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSProjectileLaunchInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSProjectileLaunchInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
// End Cross Module References
class UScriptStruct* FSSProjectileLaunchInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSProjectileLaunchInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSProjectileLaunchInfo"), sizeof(FSSProjectileLaunchInfo), Get_Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSProjectileLaunchInfo>()
{
	return FSSProjectileLaunchInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSProjectileLaunchInfo(FSSProjectileLaunchInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSProjectileLaunchInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSProjectileLaunchInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSProjectileLaunchInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSProjectileLaunchInfo>(FName(TEXT("SSProjectileLaunchInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSProjectileLaunchInfo;
	struct Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSProjectileLaunchInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSProjectileLaunchInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSProjectileLaunchInfo" },
		{ "ModuleRelativePath", "Public/SSProjectileLaunchInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchTime = { "LaunchTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSProjectileLaunchInfo, LaunchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSProjectileLaunchInfo" },
		{ "ModuleRelativePath", "Public/SSProjectileLaunchInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchLocation = { "LaunchLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSProjectileLaunchInfo, LaunchLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSProjectileLaunchInfo" },
		{ "ModuleRelativePath", "Public/SSProjectileLaunchInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchPower = { "LaunchPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSProjectileLaunchInfo, LaunchPower), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::NewProp_LaunchPower,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSProjectileLaunchInfo",
		sizeof(FSSProjectileLaunchInfo),
		alignof(FSSProjectileLaunchInfo),
		Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSProjectileLaunchInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSProjectileLaunchInfo"), sizeof(FSSProjectileLaunchInfo), Get_Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSProjectileLaunchInfo_Hash() { return 2853231352U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
