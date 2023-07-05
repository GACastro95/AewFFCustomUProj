// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/UserProfileSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserProfileSaveData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileSaveData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileColorParam();
// End Cross Module References
class UScriptStruct* FUserProfileSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FUserProfileSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserProfileSaveData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("UserProfileSaveData"), sizeof(FUserProfileSaveData), Get_Z_Construct_UScriptStruct_FUserProfileSaveData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FUserProfileSaveData>()
{
	return FUserProfileSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserProfileSaveData(FUserProfileSaveData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("UserProfileSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileSaveData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileSaveData()
	{
		UScriptStruct::DeferCppStructOps<FUserProfileSaveData>(FName(TEXT("UserProfileSaveData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileSaveData;
	struct Z_Construct_UScriptStruct_FUserProfileSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIconID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIconID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerIconBgId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerIconBgId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIconBgColorParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerIconBgColorParam;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BadgeIdList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadgeIdList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BadgeIdList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSymbolIconID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponSymbolIconID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponDecalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_weaponDecalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDecalColorParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponDecalColorParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserProfileSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserProfileSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_PlayerIconID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileSaveData" },
		{ "ModuleRelativePath", "Public/UserProfileSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_PlayerIconID = { "PlayerIconID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileSaveData, PlayerIconID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_PlayerIconID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_PlayerIconID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_playerIconBgId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileSaveData" },
		{ "ModuleRelativePath", "Public/UserProfileSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_playerIconBgId = { "playerIconBgId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileSaveData, playerIconBgId), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_playerIconBgId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_playerIconBgId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_PlayerIconBgColorParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileSaveData" },
		{ "ModuleRelativePath", "Public/UserProfileSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_PlayerIconBgColorParam = { "PlayerIconBgColorParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileSaveData, PlayerIconBgColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_PlayerIconBgColorParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_PlayerIconBgColorParam_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_BadgeIdList_Inner = { "BadgeIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_BadgeIdList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileSaveData" },
		{ "ModuleRelativePath", "Public/UserProfileSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_BadgeIdList = { "BadgeIdList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileSaveData, BadgeIdList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_BadgeIdList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_BadgeIdList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_WeaponSymbolIconID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileSaveData" },
		{ "ModuleRelativePath", "Public/UserProfileSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_WeaponSymbolIconID = { "WeaponSymbolIconID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileSaveData, WeaponSymbolIconID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_WeaponSymbolIconID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_WeaponSymbolIconID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_weaponDecalId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileSaveData" },
		{ "ModuleRelativePath", "Public/UserProfileSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_weaponDecalId = { "weaponDecalId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileSaveData, weaponDecalId), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_weaponDecalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_weaponDecalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_WeaponDecalColorParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileSaveData" },
		{ "ModuleRelativePath", "Public/UserProfileSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_WeaponDecalColorParam = { "WeaponDecalColorParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileSaveData, WeaponDecalColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_WeaponDecalColorParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_WeaponDecalColorParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_PlayerIconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_playerIconBgId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_PlayerIconBgColorParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_BadgeIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_BadgeIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_WeaponSymbolIconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_weaponDecalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::NewProp_WeaponDecalColorParam,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"UserProfileSaveData",
		sizeof(FUserProfileSaveData),
		alignof(FUserProfileSaveData),
		Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserProfileSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserProfileSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserProfileSaveData"), sizeof(FUserProfileSaveData), Get_Z_Construct_UScriptStruct_FUserProfileSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserProfileSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserProfileSaveData_Hash() { return 4292453875U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
