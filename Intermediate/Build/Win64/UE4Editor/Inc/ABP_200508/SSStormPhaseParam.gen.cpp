// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSStormPhaseParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSStormPhaseParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStormPhaseParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRound();
// End Cross Module References

static_assert(std::is_polymorphic<FSSStormPhaseParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSStormPhaseParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSStormPhaseParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSStormPhaseParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSStormPhaseParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSStormPhaseParam"), sizeof(FSSStormPhaseParam), Get_Z_Construct_UScriptStruct_FSSStormPhaseParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSStormPhaseParam>()
{
	return FSSStormPhaseParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSStormPhaseParam(FSSStormPhaseParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSStormPhaseParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSStormPhaseParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSStormPhaseParam()
	{
		UScriptStruct::DeferCppStructOps<FSSStormPhaseParam>(FName(TEXT("SSStormPhaseParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSStormPhaseParam;
	struct Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Round_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Round_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Round;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radiusMeter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radiusMeter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_announceDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_announceDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shrinkDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shrinkDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_intervalDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_intervalDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSStormPhaseParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSStormPhaseParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Round_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Round_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormPhaseParam" },
		{ "ModuleRelativePath", "Public/SSStormPhaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormPhaseParam, Round), Z_Construct_UEnum_ABP_200508_ESSRound, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Round_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Round_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_radiusMeter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormPhaseParam" },
		{ "ModuleRelativePath", "Public/SSStormPhaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_radiusMeter = { "radiusMeter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormPhaseParam, radiusMeter), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_radiusMeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_radiusMeter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_announceDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormPhaseParam" },
		{ "ModuleRelativePath", "Public/SSStormPhaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_announceDuration = { "announceDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormPhaseParam, announceDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_announceDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_announceDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_shrinkDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormPhaseParam" },
		{ "ModuleRelativePath", "Public/SSStormPhaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_shrinkDuration = { "shrinkDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormPhaseParam, shrinkDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_shrinkDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_shrinkDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_intervalDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormPhaseParam" },
		{ "ModuleRelativePath", "Public/SSStormPhaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_intervalDuration = { "intervalDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormPhaseParam, intervalDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_intervalDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_intervalDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_DamageCycle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormPhaseParam" },
		{ "ModuleRelativePath", "Public/SSStormPhaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_DamageCycle = { "DamageCycle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormPhaseParam, DamageCycle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_DamageCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_DamageCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormPhaseParam" },
		{ "ModuleRelativePath", "Public/SSStormPhaseParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormPhaseParam, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Round_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Round,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_radiusMeter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_announceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_shrinkDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_intervalDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_DamageCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::NewProp_Damage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSStormPhaseParam",
		sizeof(FSSStormPhaseParam),
		alignof(FSSStormPhaseParam),
		Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSStormPhaseParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSStormPhaseParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSStormPhaseParam"), sizeof(FSSStormPhaseParam), Get_Z_Construct_UScriptStruct_FSSStormPhaseParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSStormPhaseParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSStormPhaseParam_Hash() { return 1811990951U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
