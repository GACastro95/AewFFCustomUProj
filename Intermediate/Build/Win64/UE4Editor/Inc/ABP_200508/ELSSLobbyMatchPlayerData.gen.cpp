// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSLobbyMatchPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSLobbyMatchPlayerData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerController_NoRegister();
// End Cross Module References
class UScriptStruct* FELSSLobbyMatchPlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSLobbyMatchPlayerData"), sizeof(FELSSLobbyMatchPlayerData), Get_Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSLobbyMatchPlayerData>()
{
	return FELSSLobbyMatchPlayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSLobbyMatchPlayerData(FELSSLobbyMatchPlayerData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSLobbyMatchPlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyMatchPlayerData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyMatchPlayerData()
	{
		UScriptStruct::DeferCppStructOps<FELSSLobbyMatchPlayerData>(FName(TEXT("ELSSLobbyMatchPlayerData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyMatchPlayerData;
	struct Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_matchPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_matchPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSLobbyMatchPlayerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSLobbyMatchPlayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyMatchPlayerData" },
		{ "ModuleRelativePath", "Public/ELSSLobbyMatchPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerState = { "matchPlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyMatchPlayerData, matchPlayerState), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyMatchPlayerData" },
		{ "ModuleRelativePath", "Public/ELSSLobbyMatchPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerController = { "matchPlayerController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyMatchPlayerData, matchPlayerController), Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyMatchPlayerData" },
		{ "ModuleRelativePath", "Public/ELSSLobbyMatchPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerId = { "matchPlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyMatchPlayerData, matchPlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::NewProp_matchPlayerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSLobbyMatchPlayerData",
		sizeof(FELSSLobbyMatchPlayerData),
		alignof(FELSSLobbyMatchPlayerData),
		Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSLobbyMatchPlayerData"), sizeof(FELSSLobbyMatchPlayerData), Get_Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerData_Hash() { return 350601564U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
