// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFlexMatchMakeStatus_RequestData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFlexMatchMakeStatus_RequestData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELSSFlexMatchMakeStatus_RequestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSFlexMatchMakeStatus_RequestData"), sizeof(FELSSFlexMatchMakeStatus_RequestData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSFlexMatchMakeStatus_RequestData>()
{
	return FELSSFlexMatchMakeStatus_RequestData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData(FELSSFlexMatchMakeStatus_RequestData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSFlexMatchMakeStatus_RequestData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStatus_RequestData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStatus_RequestData()
	{
		UScriptStruct::DeferCppStructOps<FELSSFlexMatchMakeStatus_RequestData>(FName(TEXT("ELSSFlexMatchMakeStatus_RequestData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStatus_RequestData;
	struct Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatus_RequestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSFlexMatchMakeStatus_RequestData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_TicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStatus_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatus_RequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchMakeStatus_RequestData, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_TicketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStatus_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatus_RequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchMakeStatus_RequestData, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_RequestID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStatus_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStatus_RequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchMakeStatus_RequestData, RequestID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_RequestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_RequestID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_TicketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::NewProp_RequestID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSFlexMatchMakeStatus_RequestData",
		sizeof(FELSSFlexMatchMakeStatus_RequestData),
		alignof(FELSSFlexMatchMakeStatus_RequestData),
		Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSFlexMatchMakeStatus_RequestData"), sizeof(FELSSFlexMatchMakeStatus_RequestData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStatus_RequestData_Hash() { return 1599885301U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
