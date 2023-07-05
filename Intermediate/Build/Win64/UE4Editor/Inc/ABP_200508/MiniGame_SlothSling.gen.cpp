// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGame_SlothSling.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGame_SlothSling() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_SlothSling();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMiniGame_SlothSling::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGame_SlothSling_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGame_SlothSling, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGame_SlothSling"), sizeof(FMiniGame_SlothSling), Get_Z_Construct_UScriptStruct_FMiniGame_SlothSling_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGame_SlothSling>()
{
	return FMiniGame_SlothSling::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGame_SlothSling(FMiniGame_SlothSling::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGame_SlothSling"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_SlothSling
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_SlothSling()
	{
		UScriptStruct::DeferCppStructOps<FMiniGame_SlothSling>(FName(TEXT("MiniGame_SlothSling")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_SlothSling;
	struct Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugEnableThrowUnlimited_MetaData[];
#endif
		static void NewProp_bIsDebugEnableThrowUnlimited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugEnableThrowUnlimited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugEnableTimeUnlimited_MetaData[];
#endif
		static void NewProp_bIsDebugEnableTimeUnlimited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugEnableTimeUnlimited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugDispInputInfo_MetaData[];
#endif
		static void NewProp_bIsDebugDispInputInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugDispInputInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugDispScore_MetaData[];
#endif
		static void NewProp_bIsDebugDispScore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugDispScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugDispLandPoint_MetaData[];
#endif
		static void NewProp_bIsDebugDispLandPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugDispLandPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGame_SlothSling.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGame_SlothSling>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableThrowUnlimited_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_SlothSling" },
		{ "ModuleRelativePath", "Public/MiniGame_SlothSling.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableThrowUnlimited_SetBit(void* Obj)
	{
		((FMiniGame_SlothSling*)Obj)->bIsDebugEnableThrowUnlimited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableThrowUnlimited = { "bIsDebugEnableThrowUnlimited", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_SlothSling), &Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableThrowUnlimited_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableThrowUnlimited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableThrowUnlimited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableTimeUnlimited_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_SlothSling" },
		{ "ModuleRelativePath", "Public/MiniGame_SlothSling.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableTimeUnlimited_SetBit(void* Obj)
	{
		((FMiniGame_SlothSling*)Obj)->bIsDebugEnableTimeUnlimited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableTimeUnlimited = { "bIsDebugEnableTimeUnlimited", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_SlothSling), &Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableTimeUnlimited_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableTimeUnlimited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableTimeUnlimited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispInputInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_SlothSling" },
		{ "ModuleRelativePath", "Public/MiniGame_SlothSling.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispInputInfo_SetBit(void* Obj)
	{
		((FMiniGame_SlothSling*)Obj)->bIsDebugDispInputInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispInputInfo = { "bIsDebugDispInputInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_SlothSling), &Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispInputInfo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispInputInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispInputInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_SlothSling" },
		{ "ModuleRelativePath", "Public/MiniGame_SlothSling.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispScore_SetBit(void* Obj)
	{
		((FMiniGame_SlothSling*)Obj)->bIsDebugDispScore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispScore = { "bIsDebugDispScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_SlothSling), &Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispScore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispLandPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_SlothSling" },
		{ "ModuleRelativePath", "Public/MiniGame_SlothSling.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispLandPoint_SetBit(void* Obj)
	{
		((FMiniGame_SlothSling*)Obj)->bIsDebugDispLandPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispLandPoint = { "bIsDebugDispLandPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_SlothSling), &Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispLandPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispLandPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispLandPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableThrowUnlimited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugEnableTimeUnlimited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispInputInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::NewProp_bIsDebugDispLandPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGame_SlothSling",
		sizeof(FMiniGame_SlothSling),
		alignof(FMiniGame_SlothSling),
		Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_SlothSling()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGame_SlothSling_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGame_SlothSling"), sizeof(FMiniGame_SlothSling), Get_Z_Construct_UScriptStruct_FMiniGame_SlothSling_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGame_SlothSling_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGame_SlothSling_Hash() { return 2686456661U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
