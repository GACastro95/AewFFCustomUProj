// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesEnvironmentGroggySpecialState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesEnvironmentGroggySpecialState() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesEnvironmentGroggySpecialState>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesEnvironmentGroggySpecialState cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesEnvironmentGroggySpecialState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesEnvironmentGroggySpecialState"), sizeof(FELMovesEnvironmentGroggySpecialState), Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesEnvironmentGroggySpecialState>()
{
	return FELMovesEnvironmentGroggySpecialState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesEnvironmentGroggySpecialState(FELMovesEnvironmentGroggySpecialState::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesEnvironmentGroggySpecialState"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesEnvironmentGroggySpecialState
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesEnvironmentGroggySpecialState()
	{
		UScriptStruct::DeferCppStructOps<FELMovesEnvironmentGroggySpecialState>(FName(TEXT("ELMovesEnvironmentGroggySpecialState")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesEnvironmentGroggySpecialState;
	struct Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stand_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stand_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stand_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Running_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Running_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Running_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Running_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Running_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Running_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggySpecialState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesEnvironmentGroggySpecialState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggySpecialState" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggySpecialState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Punch = { "Stand_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggySpecialState, Stand_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggySpecialState" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggySpecialState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Kick = { "Stand_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggySpecialState, Stand_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggySpecialState" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggySpecialState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Grapple = { "Stand_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggySpecialState, Stand_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggySpecialState" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggySpecialState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Punch = { "Running_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggySpecialState, Running_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggySpecialState" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggySpecialState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Kick = { "Running_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggySpecialState, Running_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesEnvironmentGroggySpecialState" },
		{ "ModuleRelativePath", "Public/ELMovesEnvironmentGroggySpecialState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Grapple = { "Running_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesEnvironmentGroggySpecialState, Running_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Stand_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::NewProp_Running_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesEnvironmentGroggySpecialState",
		sizeof(FELMovesEnvironmentGroggySpecialState),
		alignof(FELMovesEnvironmentGroggySpecialState),
		Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesEnvironmentGroggySpecialState"), sizeof(FELMovesEnvironmentGroggySpecialState), Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesEnvironmentGroggySpecialState_Hash() { return 1889805061U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
