// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSSystemMotionMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSSystemMotionMapping() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSSystemMotionMapping();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FSSSystemMotionMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSSystemMotionMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSSystemMotionMapping, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSSystemMotionMapping"), sizeof(FSSSystemMotionMapping), Get_Z_Construct_UScriptStruct_FSSSystemMotionMapping_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSSystemMotionMapping>()
{
	return FSSSystemMotionMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSSystemMotionMapping(FSSSystemMotionMapping::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSSystemMotionMapping"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSSystemMotionMapping
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSSystemMotionMapping()
	{
		UScriptStruct::DeferCppStructOps<FSSSystemMotionMapping>(FName(TEXT("SSSystemMotionMapping")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSSystemMotionMapping;
	struct Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkSt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkLo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkLo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkEn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkEn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunSt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunLo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunLo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunEn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunEn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSSystemMotionMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSSystemMotionMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_Idle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSystemMotionMapping" },
		{ "ModuleRelativePath", "Public/SSSystemMotionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_Idle = { "Idle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSystemMotionMapping, Idle), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkSt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSystemMotionMapping" },
		{ "ModuleRelativePath", "Public/SSSystemMotionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkSt = { "WalkSt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSystemMotionMapping, WalkSt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkSt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkSt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkLo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSystemMotionMapping" },
		{ "ModuleRelativePath", "Public/SSSystemMotionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkLo = { "WalkLo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSystemMotionMapping, WalkLo), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkLo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkLo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkEn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSystemMotionMapping" },
		{ "ModuleRelativePath", "Public/SSSystemMotionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkEn = { "WalkEn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSystemMotionMapping, WalkEn), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkEn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkEn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunSt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSystemMotionMapping" },
		{ "ModuleRelativePath", "Public/SSSystemMotionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunSt = { "RunSt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSystemMotionMapping, RunSt), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunSt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunSt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunLo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSystemMotionMapping" },
		{ "ModuleRelativePath", "Public/SSSystemMotionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunLo = { "RunLo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSystemMotionMapping, RunLo), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunLo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunLo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunEn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSystemMotionMapping" },
		{ "ModuleRelativePath", "Public/SSSystemMotionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunEn = { "RunEn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSystemMotionMapping, RunEn), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunEn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunEn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_Fall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSSystemMotionMapping" },
		{ "ModuleRelativePath", "Public/SSSystemMotionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_Fall = { "Fall", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSSystemMotionMapping, Fall), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_Fall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_Fall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkSt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkLo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_WalkEn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunSt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunLo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_RunEn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::NewProp_Fall,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSSystemMotionMapping",
		sizeof(FSSSystemMotionMapping),
		alignof(FSSSystemMotionMapping),
		Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSSystemMotionMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSSystemMotionMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSSystemMotionMapping"), sizeof(FSSSystemMotionMapping), Get_Z_Construct_UScriptStruct_FSSSystemMotionMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSSystemMotionMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSSystemMotionMapping_Hash() { return 1289708901U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
