// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesRunningCounter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesRunningCounter() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRunningCounter();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesStick();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesRunningCounter>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesRunningCounter cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesRunningCounter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesRunningCounter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesRunningCounter, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesRunningCounter"), sizeof(FELMovesRunningCounter), Get_Z_Construct_UScriptStruct_FELMovesRunningCounter_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesRunningCounter>()
{
	return FELMovesRunningCounter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesRunningCounter(FELMovesRunningCounter::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesRunningCounter"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesRunningCounter
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesRunningCounter()
	{
		UScriptStruct::DeferCppStructOps<FELMovesRunningCounter>(FName(TEXT("ELMovesRunningCounter")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesRunningCounter;
	struct Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesRunningCounter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesRunningCounter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRunningCounter" },
		{ "ModuleRelativePath", "Public/ELMovesRunningCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Punch = { "Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRunningCounter, Punch), Z_Construct_UScriptStruct_FELMovesStick, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRunningCounter" },
		{ "ModuleRelativePath", "Public/ELMovesRunningCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Kick = { "Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRunningCounter, Kick), Z_Construct_UScriptStruct_FELMovesStick, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRunningCounter" },
		{ "ModuleRelativePath", "Public/ELMovesRunningCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Grapple = { "Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRunningCounter, Grapple), Z_Construct_UScriptStruct_FELMovesStick, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::NewProp_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesRunningCounter",
		sizeof(FELMovesRunningCounter),
		alignof(FELMovesRunningCounter),
		Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesRunningCounter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesRunningCounter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesRunningCounter"), sizeof(FELMovesRunningCounter), Get_Z_Construct_UScriptStruct_FELMovesRunningCounter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesRunningCounter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesRunningCounter_Hash() { return 3520261427U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
