// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameLiftDesiredPlayerSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLiftDesiredPlayerSession() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FGameLiftDesiredPlayerSession::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession, Z_Construct_UPackage__Script_ABP_200508(), TEXT("GameLiftDesiredPlayerSession"), sizeof(FGameLiftDesiredPlayerSession), Get_Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FGameLiftDesiredPlayerSession>()
{
	return FGameLiftDesiredPlayerSession::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLiftDesiredPlayerSession(FGameLiftDesiredPlayerSession::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("GameLiftDesiredPlayerSession"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftDesiredPlayerSession
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftDesiredPlayerSession()
	{
		UScriptStruct::DeferCppStructOps<FGameLiftDesiredPlayerSession>(FName(TEXT("GameLiftDesiredPlayerSession")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFGameLiftDesiredPlayerSession;
	struct Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLiftDesiredPlayerSession.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLiftDesiredPlayerSession>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftDesiredPlayerSession" },
		{ "ModuleRelativePath", "Public/GameLiftDesiredPlayerSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftDesiredPlayerSession, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewProp_PlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLiftDesiredPlayerSession" },
		{ "ModuleRelativePath", "Public/GameLiftDesiredPlayerSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLiftDesiredPlayerSession, PlayerData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::NewProp_PlayerData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"GameLiftDesiredPlayerSession",
		sizeof(FGameLiftDesiredPlayerSession),
		alignof(FGameLiftDesiredPlayerSession),
		Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLiftDesiredPlayerSession"), sizeof(FGameLiftDesiredPlayerSession), Get_Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLiftDesiredPlayerSession_Hash() { return 2638474479U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
