// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSCreateHottestPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSCreateHottestPlayerData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
class UScriptStruct* FELSSCreateHottestPlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSCreateHottestPlayerData"), sizeof(FELSSCreateHottestPlayerData), Get_Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSCreateHottestPlayerData>()
{
	return FELSSCreateHottestPlayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSCreateHottestPlayerData(FELSSCreateHottestPlayerData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSCreateHottestPlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSCreateHottestPlayerData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSCreateHottestPlayerData()
	{
		UScriptStruct::DeferCppStructOps<FELSSCreateHottestPlayerData>(FName(TEXT("ELSSCreateHottestPlayerData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSCreateHottestPlayerData;
	struct Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_datPlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_datPlayerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_datSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_datSetupParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_datWrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_datWrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_datWrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSCreateHottestPlayerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSCreateHottestPlayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datPlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCreateHottestPlayerData" },
		{ "ModuleRelativePath", "Public/ELSSCreateHottestPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datPlayerData = { "datPlayerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSCreateHottestPlayerData, datPlayerData), Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datPlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datPlayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datSetupParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCreateHottestPlayerData" },
		{ "ModuleRelativePath", "Public/ELSSCreateHottestPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datSetupParam = { "datSetupParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSCreateHottestPlayerData, datSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datSetupParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datWrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCreateHottestPlayerData" },
		{ "ModuleRelativePath", "Public/ELSSCreateHottestPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datWrestlerID = { "datWrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSCreateHottestPlayerData, datWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datWrestlerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datPlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::NewProp_datWrestlerID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSCreateHottestPlayerData",
		sizeof(FELSSCreateHottestPlayerData),
		alignof(FELSSCreateHottestPlayerData),
		Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSCreateHottestPlayerData"), sizeof(FELSSCreateHottestPlayerData), Get_Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSCreateHottestPlayerData_Hash() { return 3103588305U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
