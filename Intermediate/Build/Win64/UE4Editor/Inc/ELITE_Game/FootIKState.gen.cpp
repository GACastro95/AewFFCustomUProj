// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/FootIKState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootIKState() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FFootIKState();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FFootIKState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FFootIKState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootIKState, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("FootIKState"), sizeof(FFootIKState), Get_Z_Construct_UScriptStruct_FFootIKState_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FFootIKState>()
{
	return FFootIKState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootIKState(FFootIKState::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("FootIKState"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFFootIKState
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFFootIKState()
	{
		UScriptStruct::DeferCppStructOps<FFootIKState>(FName(TEXT("FootIKState")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFFootIKState;
	struct Z_Construct_UScriptStruct_FFootIKState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIK_MetaData[];
#endif
		static void NewProp_bIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttach_MetaData[];
#endif
		static void NewProp_bAttach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootIKState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FootIKState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootIKState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootIKState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bIK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootIKState" },
		{ "ModuleRelativePath", "Public/FootIKState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bIK_SetBit(void* Obj)
	{
		((FFootIKState*)Obj)->bIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bIK = { "bIK", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFootIKState), &Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bIK_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bAttach_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootIKState" },
		{ "ModuleRelativePath", "Public/FootIKState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bAttach_SetBit(void* Obj)
	{
		((FFootIKState*)Obj)->bAttach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bAttach = { "bAttach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFootIKState), &Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bAttach_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bAttach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bAttach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_Position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootIKState" },
		{ "ModuleRelativePath", "Public/FootIKState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootIKState, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_BlendRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootIKState" },
		{ "ModuleRelativePath", "Public/FootIKState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_BlendRate = { "BlendRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootIKState, BlendRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_BlendRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_BlendRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootIKState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_bAttach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootIKState_Statics::NewProp_BlendRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootIKState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"FootIKState",
		sizeof(FFootIKState),
		alignof(FFootIKState),
		Z_Construct_UScriptStruct_FFootIKState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootIKState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootIKState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootIKState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootIKState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootIKState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootIKState"), sizeof(FFootIKState), Get_Z_Construct_UScriptStruct_FFootIKState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootIKState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootIKState_Hash() { return 3817516548U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
