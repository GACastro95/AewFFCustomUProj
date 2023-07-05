// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ControlIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlIK() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FControlIK();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELIKPartType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELAttachCondition();
// End Cross Module References
class UScriptStruct* FControlIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FControlIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlIK, Z_Construct_UPackage__Script_ELITE(), TEXT("ControlIK"), sizeof(FControlIK), Get_Z_Construct_UScriptStruct_FControlIK_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FControlIK>()
{
	return FControlIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FControlIK(FControlIK::StaticStruct, TEXT("/Script/ELITE"), TEXT("ControlIK"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFControlIK
{
	FScriptStruct_ELITE_StaticRegisterNativesFControlIK()
	{
		UScriptStruct::DeferCppStructOps<FControlIK>(FName(TEXT("ControlIK")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFControlIK;
	struct Z_Construct_UScriptStruct_FControlIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetIK_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetIK_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Condition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ControlIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlIK>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_TargetIK_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_TargetIK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ControlIK" },
		{ "ModuleRelativePath", "Public/ControlIK.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_TargetIK = { "TargetIK", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlIK, TargetIK), Z_Construct_UEnum_ELITE_Game_EELIKPartType, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_TargetIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_TargetIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_EffectorClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ControlIK" },
		{ "ModuleRelativePath", "Public/ControlIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_EffectorClass = { "EffectorClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlIK, EffectorClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_EffectorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_EffectorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_EffectorName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ControlIK" },
		{ "ModuleRelativePath", "Public/ControlIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_EffectorName = { "EffectorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlIK, EffectorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_EffectorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_EffectorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_Condition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ControlIK" },
		{ "ModuleRelativePath", "Public/ControlIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlIK, Condition), Z_Construct_UScriptStruct_FELAttachCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_Condition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_TargetIK_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_TargetIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_EffectorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_EffectorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlIK_Statics::NewProp_Condition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"ControlIK",
		sizeof(FControlIK),
		alignof(FControlIK),
		Z_Construct_UScriptStruct_FControlIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FControlIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ControlIK"), sizeof(FControlIK), Get_Z_Construct_UScriptStruct_FControlIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FControlIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FControlIK_Hash() { return 516828677U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
