// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeCompleteState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeCompleteState() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeCompleteState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FChallengeCompleteState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeCompleteState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeCompleteState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeCompleteState"), sizeof(FChallengeCompleteState), Get_Z_Construct_UScriptStruct_FChallengeCompleteState_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeCompleteState>()
{
	return FChallengeCompleteState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeCompleteState(FChallengeCompleteState::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeCompleteState"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeCompleteState
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeCompleteState()
	{
		UScriptStruct::DeferCppStructOps<FChallengeCompleteState>(FName(TEXT("ChallengeCompleteState")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeCompleteState;
	struct Z_Construct_UScriptStruct_FChallengeCompleteState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChallengeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static void NewProp_Completed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeCompleteState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeCompleteState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_ChallengeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeCompleteState" },
		{ "ModuleRelativePath", "Public/ChallengeCompleteState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_ChallengeId = { "ChallengeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeCompleteState, ChallengeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_ChallengeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_ChallengeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeCompleteState" },
		{ "ModuleRelativePath", "Public/ChallengeCompleteState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_Completed_SetBit(void* Obj)
	{
		((FChallengeCompleteState*)Obj)->Completed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChallengeCompleteState), &Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_Completed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_ChallengeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::NewProp_Completed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ChallengeCompleteState",
		sizeof(FChallengeCompleteState),
		alignof(FChallengeCompleteState),
		Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeCompleteState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeCompleteState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeCompleteState"), sizeof(FChallengeCompleteState), Get_Z_Construct_UScriptStruct_FChallengeCompleteState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeCompleteState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeCompleteState_Hash() { return 4232673596U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
