// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSGameSessionMatchingComplete.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSGameSessionMatchingComplete() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEOSGameSessionPartyData();
// End Cross Module References
class UScriptStruct* FELEOSGameSessionMatchingComplete::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEOSGameSessionMatchingComplete"), sizeof(FELEOSGameSessionMatchingComplete), Get_Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEOSGameSessionMatchingComplete>()
{
	return FELEOSGameSessionMatchingComplete::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEOSGameSessionMatchingComplete(FELEOSGameSessionMatchingComplete::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEOSGameSessionMatchingComplete"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSGameSessionMatchingComplete
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSGameSessionMatchingComplete()
	{
		UScriptStruct::DeferCppStructOps<FELEOSGameSessionMatchingComplete>(FName(TEXT("ELEOSGameSessionMatchingComplete")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEOSGameSessionMatchingComplete;
	struct Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayersPUID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersPUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayersPUID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartyData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingComplete.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEOSGameSessionMatchingComplete>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PlayersPUID_Inner = { "PlayersPUID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PlayersPUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingComplete" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingComplete.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PlayersPUID = { "PlayersPUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionMatchingComplete, PlayersPUID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PlayersPUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PlayersPUID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PartyData_Inner = { "PartyData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELEOSGameSessionPartyData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PartyData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionMatchingComplete" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionMatchingComplete.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PartyData = { "PartyData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionMatchingComplete, PartyData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PartyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PartyData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PlayersPUID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PlayersPUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PartyData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::NewProp_PartyData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELEOSGameSessionMatchingComplete",
		sizeof(FELEOSGameSessionMatchingComplete),
		alignof(FELEOSGameSessionMatchingComplete),
		Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEOSGameSessionMatchingComplete"), sizeof(FELEOSGameSessionMatchingComplete), Get_Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEOSGameSessionMatchingComplete_Hash() { return 380020119U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
