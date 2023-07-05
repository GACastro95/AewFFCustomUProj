// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEmoteCutsceneTriggerCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEmoteCutsceneTriggerCondition() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FELEmoteCutsceneTriggerCondition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEmoteCutsceneTriggerCondition"), sizeof(FELEmoteCutsceneTriggerCondition), Get_Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEmoteCutsceneTriggerCondition>()
{
	return FELEmoteCutsceneTriggerCondition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEmoteCutsceneTriggerCondition(FELEmoteCutsceneTriggerCondition::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEmoteCutsceneTriggerCondition"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEmoteCutsceneTriggerCondition
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEmoteCutsceneTriggerCondition()
	{
		UScriptStruct::DeferCppStructOps<FELEmoteCutsceneTriggerCondition>(FName(TEXT("ELEmoteCutsceneTriggerCondition")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEmoteCutsceneTriggerCondition;
	struct Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Winners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Winners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Losers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Losers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Losers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEmoteCutsceneTriggerCondition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEmoteCutsceneTriggerCondition>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Winners_Inner = { "Winners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Winners_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEmoteCutsceneTriggerCondition" },
		{ "ModuleRelativePath", "Public/ELEmoteCutsceneTriggerCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Winners = { "Winners", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEmoteCutsceneTriggerCondition, Winners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Winners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Winners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Losers_Inner = { "Losers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Losers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEmoteCutsceneTriggerCondition" },
		{ "ModuleRelativePath", "Public/ELEmoteCutsceneTriggerCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Losers = { "Losers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEmoteCutsceneTriggerCondition, Losers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Losers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Losers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEmoteCutsceneTriggerCondition" },
		{ "ModuleRelativePath", "Public/ELEmoteCutsceneTriggerCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEmoteCutsceneTriggerCondition, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Winners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Winners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Losers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Losers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::NewProp_Distance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELEmoteCutsceneTriggerCondition",
		sizeof(FELEmoteCutsceneTriggerCondition),
		alignof(FELEmoteCutsceneTriggerCondition),
		Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEmoteCutsceneTriggerCondition"), sizeof(FELEmoteCutsceneTriggerCondition), Get_Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEmoteCutsceneTriggerCondition_Hash() { return 911374538U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
