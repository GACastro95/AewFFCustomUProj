// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSGameSessionPartyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSGameSessionPartyData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEOSGameSessionPartyData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FELEOSGameSessionPartyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEOSGameSessionPartyData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEOSGameSessionPartyData"), sizeof(FELEOSGameSessionPartyData), Get_Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEOSGameSessionPartyData>()
{
	return FELEOSGameSessionPartyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEOSGameSessionPartyData(FELEOSGameSessionPartyData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEOSGameSessionPartyData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSGameSessionPartyData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEOSGameSessionPartyData()
	{
		UScriptStruct::DeferCppStructOps<FELEOSGameSessionPartyData>(FName(TEXT("ELEOSGameSessionPartyData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEOSGameSessionPartyData;
	struct Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyOwnerPUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyOwnerPUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyDataObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyDataObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionPartyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEOSGameSessionPartyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewProp_PartyOwnerPUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionPartyData" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewProp_PartyOwnerPUID = { "PartyOwnerPUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionPartyData, PartyOwnerPUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewProp_PartyOwnerPUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewProp_PartyOwnerPUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewProp_PartyDataObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSGameSessionPartyData" },
		{ "ModuleRelativePath", "Public/ELEOSGameSessionPartyData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewProp_PartyDataObject = { "PartyDataObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEOSGameSessionPartyData, PartyDataObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewProp_PartyDataObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewProp_PartyDataObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewProp_PartyOwnerPUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::NewProp_PartyDataObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELEOSGameSessionPartyData",
		sizeof(FELEOSGameSessionPartyData),
		alignof(FELEOSGameSessionPartyData),
		Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEOSGameSessionPartyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEOSGameSessionPartyData"), sizeof(FELEOSGameSessionPartyData), Get_Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEOSGameSessionPartyData_Hash() { return 4243720077U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
