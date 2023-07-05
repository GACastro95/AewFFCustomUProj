// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSOnlinePlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSOnlinePlayerData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSOnlinePlayerData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Json();
// End Cross Module References
class UScriptStruct* FSSOnlinePlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSOnlinePlayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSOnlinePlayerData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSOnlinePlayerData"), sizeof(FSSOnlinePlayerData), Get_Z_Construct_UScriptStruct_FSSOnlinePlayerData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSOnlinePlayerData>()
{
	return FSSOnlinePlayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSOnlinePlayerData(FSSOnlinePlayerData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSOnlinePlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSOnlinePlayerData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSOnlinePlayerData()
	{
		UScriptStruct::DeferCppStructOps<FSSOnlinePlayerData>(FName(TEXT("SSOnlinePlayerData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSOnlinePlayerData;
	struct Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLogin_MetaData[];
#endif
		static void NewProp_isLogin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLogin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equipPreset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_equipPreset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerSetupParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equipSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_equipSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSOnlinePlayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlinePlayerData" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSOnlinePlayerData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlinePlayerData" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSOnlinePlayerData, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlinePlayerData" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSOnlinePlayerData, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_SessionID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlinePlayerData" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSOnlinePlayerData, SessionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_SessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_SessionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlinePlayerData" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSOnlinePlayerData, WrestlerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_Controller_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlinePlayerData" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSOnlinePlayerData, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_isLogin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlinePlayerData" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_isLogin_SetBit(void* Obj)
	{
		((FSSOnlinePlayerData*)Obj)->isLogin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_isLogin = { "isLogin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSOnlinePlayerData), &Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_isLogin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_isLogin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_isLogin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_equipPreset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlinePlayerData" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_equipPreset = { "equipPreset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSOnlinePlayerData, equipPreset), Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_equipPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_equipPreset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_WrestlerSetupParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlinePlayerData" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_WrestlerSetupParam = { "WrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSOnlinePlayerData, WrestlerSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Json, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_WrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_WrestlerSetupParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_equipSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSOnlinePlayerData" },
		{ "ModuleRelativePath", "Public/SSOnlinePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_equipSettings = { "equipSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSOnlinePlayerData, equipSettings), Z_Construct_UScriptStruct_FSSPlayerEquipSettings_Json, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_equipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_equipSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_isLogin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_equipPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_WrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::NewProp_equipSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSOnlinePlayerData",
		sizeof(FSSOnlinePlayerData),
		alignof(FSSOnlinePlayerData),
		Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSOnlinePlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSOnlinePlayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSOnlinePlayerData"), sizeof(FSSOnlinePlayerData), Get_Z_Construct_UScriptStruct_FSSOnlinePlayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSOnlinePlayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSOnlinePlayerData_Hash() { return 3790365460U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
