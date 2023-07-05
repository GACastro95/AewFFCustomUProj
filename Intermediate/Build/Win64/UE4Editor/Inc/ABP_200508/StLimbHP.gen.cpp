// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StLimbHP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStLimbHP() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStLimbHP();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStLimbHP>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStLimbHP cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStLimbHP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStLimbHP_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStLimbHP, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StLimbHP"), sizeof(FStLimbHP), Get_Z_Construct_UScriptStruct_FStLimbHP_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStLimbHP>()
{
	return FStLimbHP::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStLimbHP(FStLimbHP::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StLimbHP"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStLimbHP
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStLimbHP()
	{
		UScriptStruct::DeferCppStructOps<FStLimbHP>(FName(TEXT("StLimbHP")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStLimbHP;
	struct Z_Construct_UScriptStruct_FStLimbHP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Arm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Leg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStLimbHP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StLimbHP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStLimbHP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStLimbHP>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Head_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StLimbHP" },
		{ "ModuleRelativePath", "Public/StLimbHP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStLimbHP, Head), METADATA_PARAMS(Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Arm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StLimbHP" },
		{ "ModuleRelativePath", "Public/StLimbHP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Arm = { "Arm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStLimbHP, Arm), METADATA_PARAMS(Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Arm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Arm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Body_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StLimbHP" },
		{ "ModuleRelativePath", "Public/StLimbHP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStLimbHP, Body), METADATA_PARAMS(Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Leg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StLimbHP" },
		{ "ModuleRelativePath", "Public/StLimbHP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Leg = { "Leg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStLimbHP, Leg), METADATA_PARAMS(Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Leg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Leg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStLimbHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Arm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStLimbHP_Statics::NewProp_Leg,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStLimbHP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StLimbHP",
		sizeof(FStLimbHP),
		alignof(FStLimbHP),
		Z_Construct_UScriptStruct_FStLimbHP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStLimbHP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStLimbHP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStLimbHP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStLimbHP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStLimbHP_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StLimbHP"), sizeof(FStLimbHP), Get_Z_Construct_UScriptStruct_FStLimbHP_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStLimbHP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStLimbHP_Hash() { return 4057396464U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
