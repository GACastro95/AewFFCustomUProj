// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGame_DamageChallenge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGame_DamageChallenge() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_DamageChallenge();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMiniGame_DamageChallenge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGame_DamageChallenge, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGame_DamageChallenge"), sizeof(FMiniGame_DamageChallenge), Get_Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGame_DamageChallenge>()
{
	return FMiniGame_DamageChallenge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGame_DamageChallenge(FMiniGame_DamageChallenge::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGame_DamageChallenge"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_DamageChallenge
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_DamageChallenge()
	{
		UScriptStruct::DeferCppStructOps<FMiniGame_DamageChallenge>(FName(TEXT("MiniGame_DamageChallenge")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_DamageChallenge;
	struct Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCPUNotWorking_MetaData[];
#endif
		static void NewProp_bIsCPUNotWorking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCPUNotWorking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGame_DamageChallenge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGame_DamageChallenge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_bIsCPUNotWorking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_DamageChallenge" },
		{ "ModuleRelativePath", "Public/MiniGame_DamageChallenge.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_bIsCPUNotWorking_SetBit(void* Obj)
	{
		((FMiniGame_DamageChallenge*)Obj)->bIsCPUNotWorking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_bIsCPUNotWorking = { "bIsCPUNotWorking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_DamageChallenge), &Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_bIsCPUNotWorking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_bIsCPUNotWorking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_bIsCPUNotWorking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_DamageNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_DamageChallenge" },
		{ "ModuleRelativePath", "Public/MiniGame_DamageChallenge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_DamageNum = { "DamageNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_DamageChallenge, DamageNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_DamageNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_DamageNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_bIsCPUNotWorking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::NewProp_DamageNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGame_DamageChallenge",
		sizeof(FMiniGame_DamageChallenge),
		alignof(FMiniGame_DamageChallenge),
		Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_DamageChallenge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGame_DamageChallenge"), sizeof(FMiniGame_DamageChallenge), Get_Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGame_DamageChallenge_Hash() { return 3845693962U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
