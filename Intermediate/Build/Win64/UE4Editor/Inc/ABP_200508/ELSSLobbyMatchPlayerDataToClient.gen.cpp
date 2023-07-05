// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSLobbyMatchPlayerDataToClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSLobbyMatchPlayerDataToClient() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerState_NoRegister();
// End Cross Module References
class UScriptStruct* FELSSLobbyMatchPlayerDataToClient::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSLobbyMatchPlayerDataToClient"), sizeof(FELSSLobbyMatchPlayerDataToClient), Get_Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSLobbyMatchPlayerDataToClient>()
{
	return FELSSLobbyMatchPlayerDataToClient::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient(FELSSLobbyMatchPlayerDataToClient::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSLobbyMatchPlayerDataToClient"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyMatchPlayerDataToClient
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyMatchPlayerDataToClient()
	{
		UScriptStruct::DeferCppStructOps<FELSSLobbyMatchPlayerDataToClient>(FName(TEXT("ELSSLobbyMatchPlayerDataToClient")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyMatchPlayerDataToClient;
	struct Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matchPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchPlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSLobbyMatchPlayerDataToClient.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSLobbyMatchPlayerDataToClient>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewProp_matchPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyMatchPlayerDataToClient" },
		{ "ModuleRelativePath", "Public/ELSSLobbyMatchPlayerDataToClient.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewProp_matchPlayerState = { "matchPlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyMatchPlayerDataToClient, matchPlayerState), Z_Construct_UClass_AELSSPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewProp_matchPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewProp_matchPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewProp_matchPlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyMatchPlayerDataToClient" },
		{ "ModuleRelativePath", "Public/ELSSLobbyMatchPlayerDataToClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewProp_matchPlayerId = { "matchPlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyMatchPlayerDataToClient, matchPlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewProp_matchPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewProp_matchPlayerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewProp_matchPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::NewProp_matchPlayerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSLobbyMatchPlayerDataToClient",
		sizeof(FELSSLobbyMatchPlayerDataToClient),
		alignof(FELSSLobbyMatchPlayerDataToClient),
		Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSLobbyMatchPlayerDataToClient"), sizeof(FELSSLobbyMatchPlayerDataToClient), Get_Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyMatchPlayerDataToClient_Hash() { return 2558574310U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
