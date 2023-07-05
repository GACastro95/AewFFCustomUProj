// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSFallInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSFallInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSFallInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSFallReason();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSSFallInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSFallInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSFallInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSFallInfo"), sizeof(FSSFallInfo), Get_Z_Construct_UScriptStruct_FSSFallInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSFallInfo>()
{
	return FSSFallInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSFallInfo(FSSFallInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSFallInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSFallInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSFallInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSFallInfo>(FName(TEXT("SSFallInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSFallInfo;
	struct Z_Construct_UScriptStruct_FSSFallInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApexZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ApexZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchAttackOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaunchAttackOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLandingLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLandingLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleJumpCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DoubleJumpCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSFallInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSFallInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_Reason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallInfo" },
		{ "ModuleRelativePath", "Public/SSFallInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallInfo, Reason), Z_Construct_UEnum_ABP_200508_ESSFallReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_Reason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_ApexZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallInfo" },
		{ "ModuleRelativePath", "Public/SSFallInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_ApexZ = { "ApexZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallInfo, ApexZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_ApexZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_ApexZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_LaunchAttackOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallInfo" },
		{ "ModuleRelativePath", "Public/SSFallInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_LaunchAttackOwner = { "LaunchAttackOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallInfo, LaunchAttackOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_LaunchAttackOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_LaunchAttackOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_LaunchDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallInfo" },
		{ "ModuleRelativePath", "Public/SSFallInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_LaunchDamage = { "LaunchDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallInfo, LaunchDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_LaunchDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_LaunchDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_MaxLandingLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallInfo" },
		{ "ModuleRelativePath", "Public/SSFallInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_MaxLandingLevel = { "MaxLandingLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallInfo, MaxLandingLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_MaxLandingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_MaxLandingLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_DoubleJumpCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallInfo" },
		{ "ModuleRelativePath", "Public/SSFallInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_DoubleJumpCount = { "DoubleJumpCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallInfo, DoubleJumpCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_DoubleJumpCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_DoubleJumpCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSFallInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_ApexZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_LaunchAttackOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_LaunchDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_MaxLandingLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallInfo_Statics::NewProp_DoubleJumpCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSFallInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSFallInfo",
		sizeof(FSSFallInfo),
		alignof(FSSFallInfo),
		Z_Construct_UScriptStruct_FSSFallInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSFallInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSFallInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSFallInfo"), sizeof(FSSFallInfo), Get_Z_Construct_UScriptStruct_FSSFallInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSFallInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSFallInfo_Hash() { return 2396107420U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
