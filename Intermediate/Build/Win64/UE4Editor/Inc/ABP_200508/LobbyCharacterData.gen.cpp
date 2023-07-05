// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyCharacterData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyCharacterData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyCharacterData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
// End Cross Module References
class UScriptStruct* FLobbyCharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FLobbyCharacterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyCharacterData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("LobbyCharacterData"), sizeof(FLobbyCharacterData), Get_Z_Construct_UScriptStruct_FLobbyCharacterData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FLobbyCharacterData>()
{
	return FLobbyCharacterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyCharacterData(FLobbyCharacterData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("LobbyCharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFLobbyCharacterData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFLobbyCharacterData()
	{
		UScriptStruct::DeferCppStructOps<FLobbyCharacterData>(FName(TEXT("LobbyCharacterData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFLobbyCharacterData;
	struct Z_Construct_UScriptStruct_FLobbyCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyCharacterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyCharacterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyCharacterData" },
		{ "ModuleRelativePath", "Public/LobbyCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyCharacterData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewProp_UserBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyCharacterData" },
		{ "ModuleRelativePath", "Public/LobbyCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewProp_UserBase = { "UserBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyCharacterData, UserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewProp_UserBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewProp_UserBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::NewProp_UserBase,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"LobbyCharacterData",
		sizeof(FLobbyCharacterData),
		alignof(FLobbyCharacterData),
		Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyCharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyCharacterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyCharacterData"), sizeof(FLobbyCharacterData), Get_Z_Construct_UScriptStruct_FLobbyCharacterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyCharacterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyCharacterData_Hash() { return 2271288204U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
